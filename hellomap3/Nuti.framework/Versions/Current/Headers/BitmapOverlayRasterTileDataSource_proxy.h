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


#import "MapPos_proxy.h"
#import "ScreenPos_proxy.h"
#import "MapTile_proxy.h"
#import "TileData_proxy.h"
#import "MapPosVector_proxy.h"
#import "ScreenPosVector_proxy.h"
#import "TileDataSource_proxy.h"
#import "Projection_proxy.h"
#import "Bitmap_proxy.h"
#import "ScreenPosVector_proxy.h"
#import "MapPosVector_proxy.h"

__attribute__ ((visibility("default"))) @interface NTBitmapOverlayRasterTileDataSource : NTTileDataSource
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(id)initWithMinZoom: (int)minZoom maxZoom: (int)maxZoom bitmap: (NTBitmap*)bitmap projection: (NTProjection*)projection mapPoses: (NTMapPosVector*)mapPoses bitmapPoses: (NTScreenPosVector*)bitmapPoses;
-(NTTileData*)loadTile: (NTMapTile*)mapTile;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

