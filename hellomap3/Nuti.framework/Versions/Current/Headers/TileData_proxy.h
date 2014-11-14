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


#import "UnsignedCharVector_proxy.h"

/**
 * A wrapper class for tile data.
 */
__attribute__ ((visibility("default"))) @interface NTTileData : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a VectorTileData object from a data blob.<br>
 * @param data The source tile data.
 */
-(id)initWithData: (UnsignedCharVector*)data;
/**
 * Returns tile data as a byte vector.<br>
 * @return Tile data as a byte vector.
 */
-(UnsignedCharVector*)getData;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

