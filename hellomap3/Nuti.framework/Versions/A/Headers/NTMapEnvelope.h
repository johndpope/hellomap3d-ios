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


#import "NTMapBounds.h"
#import "NTMapPosVector.h"

/**
 * A bounding area on the map. Can be defined by a map bounds object or by a convex bounding polygon.<br>
 * This class is intended for conservative object area estimation and fast intersection testing.
 */
__attribute__ ((visibility("default"))) @interface NTMapEnvelope : NSObject
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
 * Constructs an empty MapEnvelope object. Nothing is contained within<br>
 * this envelope.
 */
-(id)init;
/**
 * Constructs a MapEnvelope object using map bounds.
 */
-(id)initWithBounds: (NTMapBounds*)bounds;
/**
 * Constructs a MapEnvelope object from a convex bounding polygon.
 */
-(id)initWithConvexHull: (NTMapPosVector*)convexHull;
/**
 * Checks for equality between this and another envelope.<br>
 * @param envelope The other map envelope object.<br>
 * @return True if equal.
 */
-(BOOL)isEqualInternal: (NTMapEnvelope*)envelope;
/**
 * Returns the map bounds of this map envelope.<br>
 * @return The map bounds of this map envelope.
 */
-(NTMapBounds*)getBounds;
/**
 * Returns the convex hull of this map envelope.<br>
 * @return The convex hull of this map envelope.
 */
-(NTMapPosVector*)getConvexHull;
/**
 * Tests whether this map envelope contains another map envelope.<br>
 * @param envelope The other map envelope.<br>
 * @return True if this map envelope contains the other map envelope.
 */
-(BOOL)contains: (NTMapEnvelope*)envelope;
/**
 * Tests whether this map envelope intersects with another map envelope.<br>
 * @param envelope The other map envelope.<br>
 * @return True if this map envelope intersects the other map envelope.
 */
-(BOOL)intersects: (NTMapEnvelope*)envelope;
/**
 * Returns the hash value of this object.<br>
 * @return The hash value of this object.
 */
-(int)hashInternal;
/**
 * Creates a string representation of this map envelope, useful for logging.<br>
 * @return The string representation of this map envelope.
 */
-(NSString*)description;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif
