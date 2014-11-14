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


#import "Color_proxy.h"

/**
 * A base class for other Style objects.
 */
__attribute__ ((visibility("default"))) @interface NTStyle : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Returns the color of the vector element.<br>
 * @return The color of the vector element.
 */
-(NTColor*)getColor;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

