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


#import "NMLModelLODTreeDataSource_proxy.h"
#import "Projection_proxy.h"

/**
 * Online NML LOD Tree data source. This data source needs special<br>
 * online service and uses custom protocol.
 */
@interface NTNMLModelLODTreeOnlineDataSource : NTNMLModelLODTreeDataSource
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a NMLModelLODTreeSqliteDataSource object.<br>
 * @param projection The projection for the database. Currently only EPSG3857 is supported.<br>
 * @param serviceUrl The service connection point.
 */
-(id)initWithProjection: (NTProjection*)projection serviceUrl: (NSString*)serviceUrl;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif
