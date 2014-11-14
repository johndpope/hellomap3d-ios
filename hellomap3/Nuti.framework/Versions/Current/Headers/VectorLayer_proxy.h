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


#import "Layer_proxy.h"
#import "VectorDataSource_proxy.h"

/**
 * A vector layer that loads data using an envelope. Should be used together with corresponding data source.
 */
__attribute__ ((visibility("default"))) @interface NTVectorLayer : NTLayer
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a VectorLayer object from a data source.<br>
 * @param dataSource The data source from which this layer loads data.
 */
-(id)initWithDataSource: (NTVectorDataSource*)dataSource;
/**
 * Returns the vector data source of this vector layer.<br>
 * @return The vector data source that was bound to this vector layer on construction.
 */
-(NTVectorDataSource*)getDataSource;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

