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


#import "CullState_proxy.h"
#import "MapRange_proxy.h"

/**
 * An abstract base class for all layers.
 */
__attribute__ ((visibility("default"))) @interface NTLayer : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Returns the layer task priority of this layer.<br>
 * @return The priority level for the tasks of this layer.
 */
-(int)getPriority;
/**
 * Sets the layer task priority. Higher priority layers get to load data before<br>
 * lower priority layers. Normal layers and tile layers have seperate task queues and thus <br>
 * don't compete with each other for task queue access. The default is 0.<br>
 * @param priority The new task priority for this layer, higher values get better access.
 */
-(void)setPriority: (int)priority;
/**
 * Returns the visibility of this layer.<br>
 * @return True if the layer is visible.
 */
-(BOOL)isVisible;
/**
 * Sets the visibility of this layer.<br>
 * @param visible The new visibility state of the layer.
 */
-(void)setVisible: (BOOL)visible;
/**
 * Returns the visible zoom range of this layer.<br>
 * @return The visible zoom range of this layer.
 */
-(NTMapRange*)getVisibleZoomRange;
/**
 * Set the visible zoom range for this layer. Current zoom level must be within this range for the layer to be visible.<br>
 * This range is half-open, thus layer is visible if range.min &lt;= ZOOMLEVEL &lt; range.max.<br>
 * @param range new visible zoom range
 */
-(void)setVisibleZoomRange: (NTMapRange*)range;
/**
 * Updates the layer using new visibility information. This method is periodically called when the map view moves.<br>
 * The visibilty info is saved, so the data can be refreshed later.<br>
 * @param cullState The new visibilty information.
 */
-(void)update: (NTCullState*)cullState;
/**
 * Refreshes the layer using old stored visibility information. This method might be called if some of the layer data<br>
 * changes.
 */
-(void)refresh;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

