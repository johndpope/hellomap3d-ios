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

/**
 * A screen position defined by x,y floating point numbers.
 */
__attribute__ ((visibility("default"))) @interface NTScreenPos : NSObject
{
  void *swigCPtr;
  BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

/**  
 * Checks if this object is equal to the specified object.
 * @return True when objects are equal, false otherwise.
 */
-(BOOL)isEqual:(id)object;

/**
 * Returns the hash value of this object.
 * @return The hash value of this object.
 */
-(NSUInteger)hash;

/**
 * Constructs a ScreenPos object. All coordinates will be 0.
 */
-(id)init;
/**
 * Constructs a ScreenPos object from 2 coordinates. <br>
 * @param x The x coordinate.<br>
 * @param y The y coordinate.
 */
-(id)initWithX: (float)x y: (float)y;
/**
 * Returns the x coordinate of this position.<br>
 * @return The x coordinate of this position.
 */
-(float)getX;
/**
 * Returns the y coordinate of this position.<br>
 * @return The y coordinate of this position.
 */
-(float)getY;
/**
 * Checks for equality between this and another screen position.<br>
 * @param p The other screen position.<br>
 * @return True if equal.
 */
-(BOOL)isEqualInternal: (NTScreenPos*)p;
/**
 * Returns the hash value of this object.<br>
 * @return The hash value of this object.
 */
-(int)hashInternal;
/**
 * Creates a string representation of this screen position, useful for logging.<br>
 * @return The string representation of this screen position.
 */
-(NSString*)description;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

