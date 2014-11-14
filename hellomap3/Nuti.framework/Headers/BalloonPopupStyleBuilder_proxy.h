/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#import <Foundation/Foundation.h>


#ifdef __cplusplus
extern "C" {
#endif


#import "BalloonPopupStyle_proxy.h"
#import "Color_proxy.h"
#import "PopupStyleBuilder_proxy.h"
#import <UIKit/UIKit.h>

/**
 * A builder class for BalloonPopupStyle.
 */
__attribute__ ((visibility("default"))) @interface NTBalloonPopupStyleBuilder : NTPopupStyleBuilder
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a BalloonPopupStyleBuilder object with all parameters set to defaults.
 */
-(id)init;
/**
 * Returns the corner radius of the popup.<br>
 * @return The corner radius of the popup in dp.
 */
-(int)getCornerRadius;
/**
 * Sets the corner radius of the popup. Bigger values mean rounder corners, 0 creates<br>
 * a rectangular popup. The default is 3.<br>
 * @param cornerRadius The new corner radius in dp.
 */
-(void)setCornerRadius: (int)cornerRadius;
/**
 * Returns the background color of the left part of the popup.<br>
 * @return The background color of the left part of the popup.
 */
-(NTColor*)getLeftColor;
/**
 * Sets the background color of the left part of the popup. The size of the colored area<br>
 * is determined by the left margins and the left image. The default is 0xFF00B483.<br>
 * @param leftColor The new color for the left part of the popup.
 */
-(void)setLeftColor: (NTColor*)leftColor;
/**
 * Returns the image of the left part of the popup.<br>
 * @return The image of the left part of the popup.
 */
-(UIImage*)getLeftImage;
/**
 * Sets the image for the left part of the popup. If null is passed no image will be drawn.<br>
 * The default is null.<br>
 * @param leftImage The new image for the left part of the popup.
 */
-(void)setLeftImage: (UIImage*)leftImage;
/**
 * Returns the margins of the left part of the popup.<br>
 * @return The margins of the left part of the popup.
 */
-(NTBalloonPopupMargins*)getLeftMargins;
/**
 * Sets the margins for the left part of the popup. The margins will determine how much<br>
 * empty space should surround the left image. The default is BalloonPopupMargins(5, 0, 5, 0).<br>
 * @param leftMargins The new margins for the left part of the popup in dp.
 */
-(void)setLeftMargins: (NTBalloonPopupMargins*)leftMargins;
/**
 * Returns the background color of the right part of the popup.<br>
 * @return The background color of the right part of the popup.
 */
-(NTColor*)getRightColor;
/**
 * Sets the background color of the right part of the popup. The size of the colored area<br>
 * is determined by the right margins and the right image. The default is 0xFF00B483.<br>
 * @param rightColor The new color for the right part of the popup.
 */
-(void)setRightColor: (NTColor*)rightColor;
/**
 * Returns the image of the right part of the popup.<br>
 * @return The image of the right part of the popup.
 */
-(UIImage*)getRightImage;
/**
 * Sets the image for the right part of the popup. If null is passed no image will be drawn.<br>
 * The default is null.<br>
 * @param rightImage The new image for the right part of the popup.
 */
-(void)setRightImage: (UIImage*)rightImage;
/**
 * Returns the margins of the right part of the popup.<br>
 * @return The margins of the right part of the popup.
 */
-(NTBalloonPopupMargins*)getRightMargins;
/**
 * Sets the margins for the right part of the popup. The margins will determine how much<br>
 * empty space should surround the right image. The default is BalloonPopupMargins(5, 0, 5, 0).<br>
 * @param rightMargins The new margins for the right part of the popup in dp.
 */
-(void)setRightMargins: (NTBalloonPopupMargins*)rightMargins;
/**
 * Returns the color of the title.<br>
 * @return The color of the title.
 */
-(NTColor*)getTitleColor;
/**
 * Sets the color of the title. The default is 0xFF000000.<br>
 * @param titleColor The new color for the title.
 */
-(void)setTitleColor: (NTColor*)titleColor;
/**
 * Returns the name of the title font.<br>
 * @return The name of the title font.
 */
-(NSString*)getTitleFontName;
/**
 * Sets the name of the title font. It must be one of the fonts bundled with the platform.<br>
 * The default is HelveticaNeue-Light.<br>
 * @param titleFontName The new name for the title font.
 */
-(void)setTitleFontName: (NSString*)titleFontName;
/**
 * Returns the size of the title font.<br>
 * @return The size of the title font.
 */
-(int)getTitleFontSize;
/**
 * Sets the size of the title font. The default is 16.<br>
 * @param titleFontSize The new size for the title font in pts.
 */
-(void)setTitleFontSize: (int)titleFontSize;
/**
 * Returns the margins of the title.<br>
 * @return The margins of the title.
 */
-(NTBalloonPopupMargins*)getTitleMargins;
/**
 * Sets the margins for the title. The margins will determine how much<br>
 * empty space should surround the title. The default is BalloonPopupMargins(8, 4, 8, 0).<br>
 * @param titleMargins The new margins for the title in dp.
 */
-(void)setTitleMargins: (NTBalloonPopupMargins*)titleMargins;
/**
 * Returns the state of the title wrap parameter.<br>
 * @return True if long titles are wrapped, false if it is truncated.
 */
-(BOOL)isTitleWrap;
/**
 * Sets the state of the title wrap parameter. If set to true, long titles that are<br>
 * wider than the sreen width will be wrapped to multiple lines, increasing the height of the popup. <br>
 * If set to false, long titles are truncated with three dots.<br>
 * @param titleWrap The new state of the title wrap parameter.
 */
-(void)setTitleWrap: (BOOL)titleWrap;
/**
 * Returns the color of the description.<br>
 * @return The color of the description.
 */
-(NTColor*)getDescriptionColor;
/**
 * Sets the color of the description. The default is 0xFF000000.<br>
 * @param descColor The new color for the description.
 */
-(void)setDescriptionColor: (NTColor*)descColor;
/**
 * Returns the name of the description font.<br>
 * @return The name of the description font.
 */
-(NSString*)getDescriptionFontName;
/**
 * Sets the name of the description font. It must be one of the fonts bundled with the platform.<br>
 * The default is HelveticaNeue-Light.<br>
 * @param descFontName The new name for the description font.
 */
-(void)setDescriptionFontName: (NSString*)descFontName;
/**
 * Returns the size of the description font.<br>
 * @return The size of the description font.
 */
-(int)getDescriptionFontSize;
/**
 * Sets the size of the description font. The default is 14.<br>
 * @param descFontSize The new size for the description font in pts.
 */
-(void)setDescriptionFontSize: (int)descFontSize;
/**
 * Returns the margins of the description.<br>
 * @return The margins of the description.
 */
-(NTBalloonPopupMargins*)getDescriptionMargins;
/**
 * Sets the margins for the description. The margins will determine how much<br>
 * empty space should surround the description. The default is BalloonPopupMargins(8, 4, 8, 0).<br>
 * @param descMargins The new margins for the description in dp.
 */
-(void)setDescriptionMargins: (NTBalloonPopupMargins*)descMargins;
/**
 * Returns the state of the description wrap parameter.<br>
 * @return True if long descriptions are wrapped, false if it is truncated.
 */
-(BOOL)isDescriptionWrap;
/**
 * Sets the state of the description wrap parameter. If set to true, long descriptions that are<br>
 * wider than the sreen width will be wrapped to multiple lines, increasing the height of the popup.<br>
 * If set to false, long descriptions are truncated with three dots.<br>
 * @param descWrap The new state of the description wrap parameter.
 */
-(void)setDescriptionWrap: (BOOL)descWrap;
/**
 * Returns the color of the stroke surrounding the popup.<br>
 * @return The color of the stroke surrounding the popup.
 */
-(NTColor*)getStrokeColor;
/**
 * Sets the color of the stroke surrounding the popup. The default is 0xFF000000.<br>
 * @param strokeColor The new color of the stroke surrounding the popup.
 */
-(void)setStrokeColor: (NTColor*)strokeColor;
/**
 * Returns the width of the stroke surrounding the popup.<br>
 * @return The width of the stroke surrounding the popup in dp.
 */
-(int)getStrokeWidth;
/**
 * Sets the width of the stroke surrounding the popup. The default is 1.<br>
 * @param strokeWidth The new width of the stroke surrounding the popup.
 */
-(void)setStrokeWidth: (int)strokeWidth;
/**
 * Returns the width of the triangle at the bottom of the popup.<br>
 * @return The width of the triangle at the bottom of the popup in dp.
 */
-(int)getTriangleWidth;
/**
 * Sets the width of the triangle at the bottom of the popup. The default is 20.<br>
 * @param triangleWidth The new width of the triangle at the bottom of the popup.
 */
-(void)setTriangleWidth: (int)triangleWidth;
/**
 * Returns the height of the triangle at the bottom of the popup.<br>
 * @return The height of the triangle at the bottom of the popup in dp.
 */
-(int)getTriangleHeight;
/**
 * Sets the height of the triangle at the bottom of the popup. The default is 10.<br>
 * @param triangleHeight The new height of the triangle at the bottom of the popup.
 */
-(void)setTriangleHeight: (int)triangleHeight;
/**
 * Builds a new instance of the BalloonPopupStyle object using previously set parameters.<br>
 * @return A new BalloonPopupStyle object.
 */
-(NTBalloonPopupStyle*)buildStyle;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

