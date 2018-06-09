/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKColorManager : NSObject {
    UIColor * _color;
    CALayer * _layer;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;
@property (nonatomic, retain) CALayer *layer;

- (void).cxx_destruct;
- (void)_updateFilterColor;
- (id)color;
- (id)contentColor;
- (id)layer;
- (void)setColor:(id)arg1;
- (void)setLayer:(id)arg1;
- (bool)shouldAnimatePropertyWithKey:(id)arg1;

@end