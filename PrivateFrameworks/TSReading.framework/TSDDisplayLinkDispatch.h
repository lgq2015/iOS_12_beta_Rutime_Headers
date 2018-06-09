/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDDisplayLinkDispatch : NSObject {
    NSMutableArray * _blocks;
    TSDDisplayLink * _displayLink;
}

- (void)performBlockNextFrame:(id /* block */)arg1;
- (void)teardown;

@end