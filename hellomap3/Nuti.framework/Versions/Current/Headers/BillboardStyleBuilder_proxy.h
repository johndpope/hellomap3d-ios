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


#import "BillboardStyle_proxy.h"
#import "StyleBuilder_proxy.h"

/**
 * A base class for BillboardStyleBuilder subclasses.
 */
__attribute__ ((visibility("default"))) @interface NTBillboardStyleBuilder : NTStyleBuilder
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a BillboardStyleBuilder object with all parameters set to defaults.
 */
-(id)init;
/**
 * Returns the horizontal attaching anchor point of the billoard.<br>
 * @return The horizontal attaching anchor point of the billoard.
 */
-(float)getAttachAnchorPointX;
/**
 * Returns the vertical attaching anchor point of the billoard.<br>
 * @return The vertical attaching anchor point of the billoard.
 */
-(float)getAttachAnchorPointY;
/**
 * Sets the attaching anchor point for the billoard. The attaching anchor point is<br>
 * only used if the billboard is attached to another (base) billboard. It defines the point<br>
 * on the base billboard where the attachable billboard will be placed.<br>
 * @param attachAnchorPointX The new horizontal attaching anchor point for the billoard. -1 means the left side,<br>
 * 0 the center and 1 the right side. The default is 0.<br>
 * @param attachAnchorPointY The new vertical attaching anchor point for the billoard. -1 means the bottom,<br>
 * 0 the center and 1 the top. The default is 1.
 */
-(void)setAttachAnchorPointX: (float)attachAnchorPointX attachAnchorPointY: (float)attachAnchorPointY;
/**
 * Returns the state of the causes overlap flag.<br>
 * @return True if this billboard causes overlapping with other billboards behind it.
 */
-(BOOL)isCausesOverlap;
/**
 * Sets the state of the causes overlap flag. If set to false the billboard will<br>
 * never hide other billboards, even if they are overlapping and have the hide if overlapped flag<br>
 * set to true. If set to true the billboard may hide other overlapping billboards that have the<br>
 * hide if overlapped flag set to true and are located behind this billboard. This billboard may still<br>
 * be hidden by other billboards in front of it, regardless of this parameter.<br>
 * The default depends on the subclass.<br>
 * @param causesOverlap The new state of the allow overlap flag.
 */
-(void)setCausesOverlap: (BOOL)causesOverlap;
/**
 * Returns the state of the allow overlap flag.<br>
 * @return True if this billboard can be hidden by overlapping billboards in front of it.
 */
-(BOOL)isHideIfOverlapped;
/**
 * Sets the state of the hide if overlapped flag. If set to false the billboard may be<br>
 * hidden by other billboards that are overlapping with it and are located<br>
 * in front of this billboard. If set to true the billboard will never<br>
 * be hidden by other overlapping billboards. The default depends on the subclass.<br>
 * @param hideIfOverlapped The new state of the allow overlap flag.
 */
-(void)setHideIfOverlapped: (BOOL)hideIfOverlapped;
/**
 * Returns the horizontal offset of the billboard.<br>
 * @return The horizontal offset of the billboard, units depend on the scaling mode.
 */
-(float)getHorizontalOffset;
/**
 * Sets the horizontal offset for the billboard. Horizontal offset is used to offset the bitmap <br>
 * of the billboard horizontally relative to the billboard rotation. The units are the same as the<br>
 * units used in the setSize method. Negative values offset the bitmap to the left and<br>
 * positive values to the right. The default is 0.<br>
 * @param horizontalOffset The new horizontal offset for the billboard.
 */
-(void)setHorizontalOffset: (float)horizontalOffset;
/**
 * Returns the vertical offset of the billboard.<br>
 * @return The vertical offset of the billboard, units depend on the scaling mode.
 */
-(float)getVerticalOffset;
/**
 * Sets the vertical offset for the billboard. Vertical offset is used to offset the bitmap<br>
 * of the billboard vertically relative to the billboard rotation. The units are the same as the<br>
 * units used in the setSize method. Negative values offset the bitmap to the bottom and positive values to the top.<br>
 * The default is 0.<br>
 * @param verticalOffset The new vertical offset for the billboard.
 */
-(void)setVerticalOffset: (float)verticalOffset;
/**
 * Returns the placement priority of the billboard.<br>
 * @return The placement priority of the billboard.
 */
-(int)getPlacementPriority;
/**
 * Sets the placement priority for the billboard. Higher priority billboard get drawn in front of lower<br>
 * priority billboards regardless of their distance to the camera. If billboards are not allowed to overlap then<br>
 * higher priority billboards hide overlapping lower priority billboards. The default is 0.<br>
 * @return The new orientation mode for the billboard.
 */
-(void)setPlacementPriority: (int)placementPriority;
/**
 * Returns the state of the scale with DPI flag.<br>
 * @return True if this billboard's size will be scaled using the screen dot's per inch.
 */
-(BOOL)isScaleWithDPI;
/**
 * Sets the state of the scale with DPI flag. If set to true the billboard's size will scale using the screen<br>
 * dots per inch parameter. This means that billboards will look the same size regardless of the device screen size<br>
 * and density. If set to false the billboards will not be scaled with the screen density parameter, which means <br>
 * that billboard will look smaller on on higher density screens. Custom Label and Popup implementations may,<br>
 * but are not guaranteed to compensate for this by generating higher resolution images. The default depends on the subclass.<br>
 * @param scaleWithDPI The new state of the scale with DPI flag.
 */
-(void)setScaleWithDPI: (BOOL)scaleWithDPI;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

