/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
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


#import "NTMapPos.h"
#import "NTBitmap.h"
#import "NTGeometry.h"
#import "NTTextStyle.h"
#import "NTLabel.h"

/**
 * A text element that can be displayed on the map.
 */
__attribute__ ((visibility("default"))) @interface NTText : NTLabel
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

/**
 * Creates a polymorphic instance of the given native object. This is used internally by the SDK.
 */
+(NTText*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a Text object with the specified style and attaches it to a billboard element.<br>
 * @param baseBillboard The billboard this text label will be attached to.<br>
 * @param style The style that defines what this text label looks like.<br>
 * @param text The text to be displayed.
 */
-(id)initWithBaseBillboard: (NTBillboard*)baseBillboard style: (NTTextStyle*)style text: (NSString*)text;
/**
 * Constructs a Text object from a geometry object and a style.<br>
 * @param geometry The geometry object that defines the location of this text label.<br>
 * @param style The style that defines what this text label looks like.<br>
 * @param text The text to be displayed.
 */
-(id)initWithGeometry: (NTGeometry*)geometry style: (NTTextStyle*)style text: (NSString*)text;
/**
 * Constructs a Text object from a map position and a style.<br>
 * @param pos The map position that defines the location of this text label.<br>
 * @param style The style that defines what this text label looks like.<br>
 * @param text The text to be displayed.
 */
-(id)initWithPos: (NTMapPos*)pos style: (NTTextStyle*)style text: (NSString*)text;
-(NTBitmap*)drawBitmap: (float)dpToPX;
/**
 * Returns the display text.<br>
 * @return The display text.
 */
-(NSString*)getText;
/**
 * Sets the display text.<br>
 * @param text The text to be displayed.
 */
-(void)setText: (NSString*)text;
/**
 * Returns the style of this text label.<br>
 * @return The style that defines what this text label looks like.
 */
-(NTTextStyle*)getStyle;
/**
 * Sets the style for this text label.<br>
 * @return The new style that defines what this text label looks like.
 */
-(void)setStyle: (NTTextStyle*)style;
/**
 * Returns the actual class name of this object. This is used internally by the SDK.<br>
 * @return The class name of this object.
 */
-(NSString*)swigGetClassName;
/**
 * Returns the pointer to the connected director object. This is used internally by the SDK.<br>
 * @return The pointer to the connected director object or null if director is not connected.
 */
-(void *)swigGetDirectorObject;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif
