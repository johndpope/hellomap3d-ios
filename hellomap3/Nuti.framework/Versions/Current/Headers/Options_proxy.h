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
 *  Possible projection modes.
 */
enum NTProjectionMode {
/**
 * Orthogonal projection mode means that the size of the objects on the screen<br>
 * does not depend on their distance from the camera. This might be useful because it <br>
 * avoids perspective distortion, but it becomes unusable at small tilt angles. <br>
 * This is sometimes confused with isometric projection which is a subtype of <br>
 * orthogonal projection.
 */
  NT_PROJECTION_MODE_ORTHOGONAL,
/**
 * Perspective projection means that the further away objects get from the camera the smaller<br>
 * they appear on the screen. This projection mode is used in most 3D games and applications.
 */
  NT_PROJECTION_MODE_PERSPECTIVE
};

/**
 *  Possible panning modes for dual touch user input.
 */
enum NTPanningMode {
/**
 * Free panning means that the map panning is unrestricted, user is able to zoom, rotate and <br>
 * pan the map at the same time without any artificial limits.
 */
  NT_PANNING_MODE_FREE,
/**
 * Sticky panning means that the map panning is restricted, user is able to freely pan the map,<br>
 * but zooming and rotating gestures can't be performed at the same time. User is still able to <br>
 * switch between zooming and rotating the map but it takes a bit more effort compared to FREE panning.<br>
 * gesture is performed and
 */
  NT_PANNING_MODE_STICKY,
/**
 * Final sticky panning means that the map panning is restricted, user is able to freely pan the map,<br>
 * but zooming and rotating gestures can't be performed at the same time. Once the gesture type is <br>
 * determined the user is stuck with either zooming or rotating. To switch the gesture the user has to lift<br>
 * at least one the two fingers off the screen.
 */
  NT_PANNING_MODE_STICKY_FINAL
};


#import "Bitmap_proxy.h"
#import "Color_proxy.h"
#import "MapBounds_proxy.h"
#import "MapEventListener_proxy.h"
#import "MapRange_proxy.h"
#import "MapVec_proxy.h"
#import "Projection_proxy.h"

/**
 * A class containing various options for rendering and map manipulation.
 */
__attribute__ ((visibility("default"))) @interface NTOptions : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Returns the color of the ambient light.<br>
 *  @return The color of the ambient light.
 */
-(NTColor*)getAmbientLightColor;
/**
 * Sets the parameters for the ambient light. Ambient light affects all lighting enabled models<br>
 * in the scene equally, it has no direction or location.<br>
 *  @param color The new color for the ambient light.
 */
-(void)setAmbientLight: (NTColor*)color;
/**
 * Returns the color of the main light.<br>
 *  @return The color of the main light.
 */
-(NTColor*)getMainLightColor;
/**
 * Returns the direction of the main light.<br>
 *  @return The direction of the main light.
 */
-(NTMapVec*)getMainLightDirection;
/**
 * Sets the parameters for the main light. The main light affects all lighting enabled models<br>
 * in the scene equally from a certain direction. This light can be used to simulate sun or moon light.<br>
 *  @param color The new color for the main light.<br>
 *  @param direction The new direction vector for the main light. (0,0,-1) means straight down, (-0.707,0,-0.707) means<br>
 *        from east with a 45 degree angle. The direction vector will be normalized.
 */
-(void)setMainLight: (NTColor*)color direction: (NTMapVec*)direction;
/**
 * Returns the projection mode.<br>
 * @return The projection mode.
 */
-(enum NTProjectionMode)getProjectionMode;
/**
 * Sets the projection mode. The default is ProjectionMode::PERSPECTIVE.<br>
 * @param projectionMode The new projection mode.
 */
-(void)setProjectionMode: (enum NTProjectionMode)projectionMode;
/**
 * Returns the click type detection state.<br>
 * @return True if click type detecton is enabled.
 */
-(BOOL)isClickTypeDetection;
/**
 * Sets the state of the click type detection flag. If set to true clicks are categorized as normal clicks, double clicks,<br>
 * long clicks and dual clicks. The click type resolving take about 400ms, so for applications that do not <br>
 * require this functionality, it can be turned off. The default is true.<br>
 * @param enabled The new state of the click type detection flag.
 */
-(void)setClickTypeDetecton: (BOOL)enabled;
/**
 * Returns the tile size used for drawing map tiles.<br>
 * @return The tile size in density-independent pixels (dp).
 */
-(int)getTileDrawSize;
/**
 * Sets the tile size for drawing map tiles. Different datasources may have different tile sizes, this option<br>
 * can be used to compensate for bigger or smaller tiles than default. The default is 256.<br>
 * @param tileDrawSize The new tile size in density-independent pixels (dp).
 */
-(void)setTileDrawSize: (int)tileDrawSize;
/**
 * Returns the dots per inch value.<br>
 * @return The dots per inch value.
 */
-(float)getDPI;
/**
 * Sets the dots per inch value. This is calculated automatically by the SDK when the MapView is created using <br>
 * the device screen parameters. The purpose of this value is to compensate for very high or low resolution devices,<br>
 * so that the map remains readable.<br>
 * @param dpi The new dots per inch value.
 */
-(void)setDPI: (float)dpi;
/**
 * Returns the draw distance value.<br>
 * @return The draw distance value.
 */
-(float)getDrawDistance;
/**
 * Sets a new draw distance value. The higher the draw distance the more tiles can be seen, if the map is tilted.<br>
 * Changing the draw distance will cause the horizon to move, which means that the if the sky bitmap is used,<br>
 * the horizon may not match up anymore. Increasing this value will decrease performance and increase network traffic, <br>
 * if online map is used. The default is 16.<br>
 * @param drawDistance The new draw distance value.
 */
-(void)setDrawDistance: (float)drawDistance;
/**
 * Returns the vertial field of view angle.<br>
 * @return The vertical field of view angle in degrees.
 */
-(int)getFieldOfViewY;
/**
 * Sets the vertial field of view angle. Larger values increase the viewable area, at the cost of performance and<br>
 * additional perspective distortion. The default is 70.<br>
 * @param fovY The new vertical field of view angle in degrees.
 */
-(void)setFieldOfViewY: (int)fovY;
/**
 * Returns the panning mode.<br>
 * @return The panning mode.
 */
-(enum NTPanningMode)getPanningMode;
/**
 * Sets the panning mode. The default is PanningMode::FREE.<br>
 * @param panningMode The new panning mode.
 */
-(void)setPanningMode: (enum NTPanningMode)panningMode;
/**
 * Returns the state of seamless horizontal panning flag.<br>
 * @return True if seamless horizontal panning is enabled.
 */
-(BOOL)isSeamlessPanning;
/**
 * Sets the state of seamless horizontal panning flag. If set to true, the user can scroll seamlessly from<br>
 * the left side of the map to the right, and the other way around. The default is true.<br>
 * @param enabled The new state of seamless horizontal panning flag.
 */
-(void)setSeamlessPanning: (BOOL)enabled;
/**
 * Returns the number of threads used by the envelope task pool.<br>
 * @return The envelope task thread pool size.
 */
-(int)getEnvelopeThreadPoolSize;
/**
 * Sets the number of threads used by the envelope task pool. More threads means more envelope tasks <br>
 * are executed in parallel. This might speed up the data query, but may cause performance drops. Default is 1.<br>
 * @param poolSize The new envelope task thread pool size.
 */
-(void)setEnvelopeThreadPoolSize: (int)poolSize;
/**
 * Returns the number of threads used by the tile task pool.<br>
 * @return The tile task thread pool size.
 */
-(int)getTileThreadPoolSize;
/**
 * Sets the number of threads used by the tile task pool. More threads means more tile tasks<br>
 * are executed in parallel. This might speed up the data query, but may cause performance drops. Default is 1.<br>
 * @param poolSize The new tile task thread pool size.
 */
-(void)setTileThreadPoolSize: (int)poolSize;
/**
 * Returns the background bitmap. May be null.<br>
 * @return The background bitmap.
 */
-(NTBitmap*)getBackgroundBitmap;
/**
 * Sets the background bitmap. The purpose of the background bitmap is to fill out the empty space when there's<br>
 * no map data visible. The bitmap will get scaled and repeated to cover the hole visible area. If a null pointer is passed, <br>
 * the background won't be drawn.<br>
 * The width and height of the bitmap must be power of two (for example: 256 * 256 or 128 * 512). <br>
 * It's also preferred if the bitmap was square (width == height), but this is not a requirement. <br>
 * The default is "default_background.png".<br>
 * @param backgroundBitmap The new background bitmap.
 */
-(void)setBackgroundBitmap: (NTBitmap*)backgroundBitmap;
/**
 * Returns the sky bitmap. May be null.<br>
 * @return The sky bitmap.
 */
-(NTBitmap*)getSkyBitmap;
/**
 * Sets the sky bitmap. The purpose of the sky bitmap is to fill out the empty space visible at low tilt angles.<br>
 * The bitmap is folded horizontally into 4 equal parts making up the north, east, south and west sides of the sky.<br>
 * The horizon of the sky should be vertically centered, for references look at the default sky bitmap bundled with the SDK.<br>
 * If a null pointer is passed, the sky won't be drawn.<br>
 * The width and height of the bitmap must be power of two (for example: 256 * 256 or 128 * 512). In the most common<br>
 * use case the width of the bitmap is 4 times the height (width == 4 * height), but this is not a requirement.  <br>
 * The default is "default_sky.png".<br>
 * @param skyBitmap The new sky bitmap.
 */
-(void)setSkyBitmap: (NTBitmap*)skyBitmap;
/**
 * Returns the horizontal alignment of the watermark.<br>
 * @return The horizontal alignment of the watermark.
 */
-(float)getWatermarkAlignmentX;
/**
 * Returns the vertical alignment of the watermark.<br>
 * @return The vertical alignment of the watermark.
 */
-(float)getWatermarkAlignmentY;
/**
 * Sets the position of the watermark relative to the screen. Values will be clamped to [-1, 1] range.<br>
 * @param alignmentX The new horizontal alignment for the watermark. -1 means the left side,<br>
 * 0 the center and 1 the right side. The default is 1.<br>
 * @param alignmentY The new vertical alignment for the watermark. -1 means the bottom,<br>
 * 0 the center and 1 the top. The default is -1.
 */
-(void)setWatermarkAlignment: (float)alignmentX alignmentY: (float)alignmentY;
/**
 * Returns the watermark relative scale.<br>
 * @return The watermark relative scale. The default is 1.
 */
-(float)getWatermarkScale;
/**
 * Set the watermark relative scale. By default, watermark size is independant of the actual watermark bitmap size.<br>
 * This method can be used to change this.<br>
 * @param scale The new relative scale value.
 */
-(void)setWatermarkScale: (float)scale;
/**
 * Returns the watermark bitmap. May be null.<br>
 * @return The watermark bitmap.
 */
-(NTBitmap*)getWatermarkBitmap;
/**
 * Sets the watermark bitmap. This is only available with enterprise licenses. The watermark will be displayed<br>
 * on top of the map view in a user chosen corner. If null is passed no watermark will be displayed.<br>
 * @param watermarkBitmap The new watermark bitmap.
 */
-(void)setWatermarkBitmap: (NTBitmap*)watermarkBitmap;
/**
 * Returns the horizontal padding of the watermark.<br>
 * @return The horizontal padding of the watermark in dp.
 */
-(float)getWatermarkPaddingX;
/**
 * Returns the vertical padding of the watermark.<br>
 * @return The vertical padding of the watermark in dp.
 */
-(float)getWatermarkPaddingY;
/**
 * Sets the padding between the watermark and the edge of the screen.<br>
 * @param paddingX The new horizontal padding for the watermark in dp. The default is 4.<br>
 * @param paddingY The new vertical padding for the watermark in dp. The default is 4.
 */
-(void)setWatermarkPaddingX: (float)paddingX paddingY: (float)paddingY;
/**
 * Returns the state of the user input flag.<br>
 * @return True if user input is allowed.
 */
-(BOOL)isUserInput;
/**
 * Sets the state of the user input flag. If set to false the user won't be able to pan the map using touch controls,<br>
 * programmatic map panning using MapView methods is still possible. The default is false.<br>
 * @param enabled The new state of the user input flag.
 */
-(void)setUserInput: (BOOL)enabled;
/**
 * Returns the state of the kinetic panning flag.<br>
 * @return True if kinetic panning is enabled.
 */
-(BOOL)isKineticPan;
/**
 * Sets the state of the kinetic panning flag. Kinetic panning allows the map to pan automatically using<br>
 * the inertia of the last swipe, after the user has finished interacting with the touch screen.<br>
 * Default is true.<br>
 * @param enabled The new state of the kinetic panning flag.
 */
-(void)setKineticPan: (BOOL)enabled;
/**
 * Returns the state of the kinetic rotation flag.<br>
 * @return True if kinetic rotation is enabled.
 */
-(BOOL)isKineticRotation;
/**
 * Sets the state of the kinetic rotation flag. Kinetic rotation allows the map to rotate automatically using<br>
 * the inertia of the last swipe, after the user has finished interacting with the touch screen.<br>
 * Default is true.<br>
 * @param enabled The new state of the kinetic rotation flag.
 */
-(void)setKineticRotation: (BOOL)enabled;
/**
 * Returns the state of kinetic zoom flag.<br>
 * @return True if kinetic zooming is enabled.
 */
-(BOOL)isKineticZoom;
/**
 * Sets the state of the kinetic zooming flag. Kinetic zooming allows the map to zoom automatically using<br>
 * the inertia of the last swipe, after the user has finished interacting with the touch screen.<br>
 * Default is true.<br>
 * @param enabled The new state of the kinetic zooming flag.
 */
-(void)setKineticZoom: (BOOL)enabled;
/**
 * Returns the state of the map rotatability flag.<br>
 * @return True if map rotating is enabled.
 */
-(BOOL)isRotatable;
/**
 * Sets the state of the map rotatability flag. If set to false the map can't be rotated by any means. The default is true.<br>
 * @param enabled The new state of the map rotatability flag.
 */
-(void)setRotatable: (BOOL)enabled;
/**
 * Returns the tilt range constraint.<br>
 * @return The tilt range constraint in degrees.
 */
-(NTMapRange*)getTiltRange;
/**
 * Sets the tilt range constraint. This will limit the tilt angle of the camera to the specified range.<br>
 * The current tilt angle will remain unaffected, until the next time the tilt angle changes.<br>
 * The minimum tilt angle is 30 degrees and the maximum is 90 degrees. Values that are out of range will be clamped.<br>
 * The default value is MapRange(30, 90).<br>
 * @param tiltRange The new tilt range constraint in degrees.
 */
-(void)setTiltRange: (NTMapRange*)tiltRange;
/**
 * Returns the zoom range constraint.<br>
 * @return The zoom range constraint.
 */
-(NTMapRange*)getZoomRange;
/**
 * Sets the zoom range constraint. This will limit the zoom level of the camera to the specified range.<br>
 * The current zoom level will remain unaffected, until the next time the zoom level changes.<br>
 * The minimum zoom value is 0 and the maximum is 24. Values that are out of range will be clamped.<br>
 * The default value is MapRange(0, 24).<br>
 * @param zoomRange The new zoom range constraint.
 */
-(void)setZoomRange: (NTMapRange*)zoomRange;
/**
 * Returns the map panning bounds constraints. Map bounds minimum and maximum points are in the base<br>
 * projection's coordinate system.<br>
 * @return The map bounds constraints.
 */
-(NTMapBounds*)getPanBounds;
/**
 * Sets the map panning bounds constraints. This will limit camera movement to the specified bounds.<br>
 * The current camera position will remain unaffected, until the next time camera position changes.<br>
 * Map bounds minimum and maximum points are expected to be in the base projection's coordinate system.<br>
 * If the bounds are larger than the world size, they will be clamped to world bounds. The default value covers the <br>
 * whole world.<br>
 * @param panBounds The new map bounds constraints.
 */
-(void)setPanBounds: (NTMapBounds*)panBounds;
/**
 * Returns the base projection.<br>
 * @return The base projection.
 */
-(NTProjection*)getBaseProjection;
/**
 * Sets the base projection. All MapView, MapEventListener and Options methods use the coordinate system of this projection.<br>
 * For example, if base projection is set to EPSG3857 then MapView::getFocusPos returns the coordinates in the EPSG3857 coordinate system,<br>
 * The same applies to setter methods like MapView::setFocusPos which expect the input coordinates to be in the base projection's coordinate system.<br>
 * The default is EPSG3857.<br>
 * @param baseProjection The new base projection.
 */
-(void)setBaseProjection: (NTProjection*)baseProjection;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

