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


#import "NTBitmap.h"

/**
 * Listener for events like map and vector element clicks etc.
 */
__attribute__ ((visibility("default"))) @interface NTMapRenderListener : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Listener method that is called when the map has been rendered.<br>
 * @param mapBitmap rendered map as bitmap.
 */
-(void)onMapRendered: (NTBitmap*)mapBitmap;
-(id)init;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif
