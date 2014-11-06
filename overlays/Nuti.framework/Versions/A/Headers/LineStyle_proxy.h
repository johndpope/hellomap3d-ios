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

/**
 * Possible styles in which line end points are drawn.
 */
enum NTLineEndType {
/**
 * No line end points are drawn, line end with a straight line.
 */
  NT_LINE_END_TYPE_STRAIGHT,
/**
 * Line end points are drawn as half circles.
 */
  NT_LINE_END_TYPE_ROUND
};

/**
 * Possible styles in which line segments are connected with each other.
 */
enum NTLineJointType {
/**
 * Line segments are not connected with each other. The fastest and ugliest.
 */
  NT_LINE_JOINT_TYPE_NONE,
/**
 * Line segments are connected with each other using straight line connectors. Fast<br>
 * but results in an unnatural line.
 */
  NT_LINE_JOINT_TYPE_STRAIGHT,
/**
 * Line segments are connected with each other using circle sectors resulting in <br>
 * round corners. Slowest and prettiest.
 */
  NT_LINE_JOINT_TYPE_ROUND
};


#import "Bitmap_proxy.h"
#import "Style_proxy.h"

/**
 * A style for lines. Contains attributes for configuring how the line is drawn on the screen.
 */
@interface NTLineStyle : NTStyle
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a LineStyle object from various parameters. Instantiating the object directly is<br>
 * not recommended, LineStyleBuilder should be used instead.<br>
 * @param color The color for the line.<br>
 * @param bitmap The bitmap for the line.<br>
 * @param clickWidth The width of the line used for click detection.<br>
 * @param lineEndType The line's end point type.<br>
 * @param lineJointType The joint type for the line.<br>
 * @param stretchFactor The color for the line.<br>
 * @param width The width for the line.
 */
-(id)initWithColor: (NTColor*)color bitmap: (NTBitmap*)bitmap clickWidth: (float)clickWidth lineEndType: (enum NTLineEndType)lineEndType lineJointType: (enum NTLineJointType)lineJointType stretchFactor: (float)stretchFactor width: (float)width;
/**
 * Returns the bitmap of the line.<br>
 * @return The bitmap of the line.
 */
-(NTBitmap*)getBitmap;
/**
 * Returns the width of the line used for click detection.<br>
 * @return The width of the line used for click detection.
 */
-(float)getClickWidth;
/**
 * Returns the end point type of the line.<br>
 * @return The end point type of the line.
 */
-(enum NTLineEndType)getLineEndType;
/**
 * Returns the joint type of the line.<br>
 * @return The joint type of the line.
 */
-(enum NTLineJointType)getLineJointType;
/**
 * Returns the stretching factor of the line.<br>
 * @return The stretching factor of the line.
 */
-(float)getStretchFactor;
/**
 * Returns the width of the line.<br>
 * @return The width of the line.
 */
-(float)getWidth;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

