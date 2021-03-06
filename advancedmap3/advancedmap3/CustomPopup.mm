#import "CustomPopup.h"

static const int SCREEN_PADDING = 10;
static const int POPUP_PADDING = 10;
static const int FONT_SIZE = 15;
static const int STROKE_WIDTH = 2;
static const int TRIANGLE_SIZE = 10;
static const int TEXT_COLOR = 0xff000000;
static const int STROKE_COLOR = 0xff000000;
static const int BACKGROUND_COLOR = 0xffffffff;

@interface CustomPopup ()
{
@private
	NSString* _text;
	NTPopupStyle* _style;
}
@end

@implementation CustomPopup

-(id)initWithBaseBillboard: (NTBillboard*)baseBillboard text: (NSString*)text {
	// Create custom style for the popup - use special attachment anchor point a bit right from the center
	NTPopupStyleBuilder* styleBuilder = [[NTPopupStyleBuilder alloc] init];
	[styleBuilder setAttachAnchorPointX:0.5f attachAnchorPointY:0];
	NTPopupStyle* style = [styleBuilder buildStyle];

	if (self = [super initWithBaseBillboard:baseBillboard style:style]) {
		self->_text = text;
		self->_style = style;
	}
	return self;
}

-(NTBitmap*)drawBitmap: (NTScreenPos*)anchorScreenPos screenWidth: (float)screenWidth screenHeight: (float)screenHeight dpToPX: (float)dpToPX {
	
	// Calculate scaled dimensions
	float pxToDP = 1 / dpToPX;
	if ([_style isScaleWithDPI]) {
		dpToPX = 1;
	} else {
		pxToDP = 1;
	}
	
	screenWidth *= pxToDP;
	screenHeight *= pxToDP;
	
	int textFontSize = FONT_SIZE * dpToPX;
	
	int triangleWidth = TRIANGLE_SIZE * dpToPX;
	int triangleHeight = TRIANGLE_SIZE * dpToPX;
	
	int strokeWidth = STROKE_WIDTH * dpToPX;
	
	int screenPadding = SCREEN_PADDING * dpToPX;
	
	// Get text font
	NSString* textFontName = @"HelveticaNeue-Light";
	UIFont* textFont = [UIFont fontWithName:textFontName size:textFontSize];
	
	// Get background color
	NTColor* backgroundColor = [[NTColor alloc] initWithColor:BACKGROUND_COLOR];
	UIColor* backgroundUIColor = [UIColor colorWithRed:[backgroundColor getR] / 255.0 green:[backgroundColor getG] / 255.0
												  blue:[backgroundColor getB] / 255.0 alpha:[backgroundColor getA] / 255.0];
	// Get stroke color
	NTColor* strokeColor = [[NTColor alloc] initWithColor:STROKE_COLOR];
	UIColor* strokeUIColor = [UIColor colorWithRed:[strokeColor getR] / 255.0 green:[strokeColor getG] / 255.0
											  blue:[strokeColor getB] / 255.0 alpha:[strokeColor getA] / 255.0];
	
	// Calculate the maximum popup size, adjust with dpi
	int maxPopupWidth = MIN(screenWidth, screenHeight);
	
	// Calcualate maximum text and description width
	float halfStrokeWidth = strokeWidth * 0.5f;
	int maxTextWidth = maxPopupWidth - screenPadding * 2 - strokeWidth;
	
	// Measure text and description sizes
	NSString* text = self->_text;
	NSLineBreakMode textBreakMode = NSLineBreakByWordWrapping;
	CGSize textSize = CGSizeMake(0, 0);
	if (text) {
		textSize = [text sizeWithFont:textFont
					  constrainedToSize:CGSizeMake(maxTextWidth, CGFLOAT_MAX)
						  lineBreakMode:textBreakMode];
	}
	
	// Calculate bitmap size and create graphics context
	int popupWidth = textSize.width;
	popupWidth += 2 * POPUP_PADDING + strokeWidth + triangleWidth;
	int popupHeight = textSize.height;
	popupHeight += 2 * POPUP_PADDING + strokeWidth;
	
	CGSize popupSize = CGSizeMake(popupWidth, popupHeight);
	UIGraphicsBeginImageContext(popupSize);
	CGContextRef context = UIGraphicsGetCurrentContext();
	
	// Prepare background path
	CGRect backgroundStrokeRect = CGRectMake(triangleWidth, halfStrokeWidth,
											 (popupWidth - strokeWidth - triangleWidth), popupHeight - strokeWidth);
	UIBezierPath* backgroundPath = [UIBezierPath bezierPathWithRoundedRect:backgroundStrokeRect cornerRadius:1];
	backgroundPath.lineWidth = strokeWidth;
	
	// Prepare triangle path
	CGMutablePathRef path = CGPathCreateMutable();
	CGPathMoveToPoint(path, nullptr, triangleWidth, 0);
	CGPathAddLineToPoint(path, nullptr, halfStrokeWidth, triangleHeight * 0.5f);
	CGPathAddLineToPoint(path, nullptr, triangleWidth, triangleHeight);
	CGPathCloseSubpath(path);
	
	// Calculate anchor point and triangle position
	int triangleOffsetX = 0;
	int triangleOffsetY = (popupHeight - triangleHeight) / 2;
	[self setAnchorPointX:-1 anchorPointY:0];
	
	// Stroke background
	[strokeUIColor setStroke];
	[backgroundPath stroke];
	
	// Stroke triangle
	CGContextSaveGState(context);
	CGContextTranslateCTM(context, triangleOffsetX, triangleOffsetY);
	CGContextSetLineWidth(context, strokeWidth);
	CGContextAddPath(context, path);
	CGContextSetStrokeColorWithColor(context, strokeUIColor.CGColor);
	CGContextStrokePath(context);
	CGContextRestoreGState(context);
	
	// Fill background/2
	[backgroundUIColor setFill];
	[backgroundPath fill];
	
	// Fill triangle
	CGContextSaveGState(context);
	CGContextTranslateCTM(context, triangleOffsetX, triangleOffsetY);
	CGContextAddPath(context, path);
	CGContextSetFillColorWithColor(context, backgroundUIColor.CGColor);
	CGContextFillPath(context);
	CGContextRestoreGState(context);
	
	// Draw text
	NTColor* textColor = [[NTColor alloc] initWithColor:TEXT_COLOR];
	CGContextSetRGBFillColor(context, [textColor getR] / 255.0, [textColor getG] / 255.0,
							 [textColor getB] / 255.0, [textColor getA] / 255.0);
	CGRect textRect = CGRectMake(halfStrokeWidth + POPUP_PADDING + triangleWidth,
								  POPUP_PADDING,
								  textSize.width,
								  textSize.height);
	[text drawInRect:textRect withFont:textFont lineBreakMode:textBreakMode];

	// Extract image
	UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
	
	// Clean up
	CGPathRelease(path);
	UIGraphicsEndImageContext();
	
	if (![_style isScaleWithDPI] || ([_style isScaleWithDPI] && dpToPX >= 1)) {
		// The bitmap doesnt have to be power of two if the generated texture will never be
		// downscaled and thus doesn't need mipmaps
		return [NTBitmapUtils createBitmapFromUIImage:image pow2Padding:false];
	} else {
		// Bitmap needs to be power of two, because it needs mipmaps and
		// texture rectangle isn't supported
		return [NTBitmapUtils createBitmapFromUIImage:image pow2Padding:true];
	}
}

@end
