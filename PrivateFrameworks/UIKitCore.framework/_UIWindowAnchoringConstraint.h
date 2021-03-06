/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIWindowAnchoringConstraint : NSAutoresizingMaskLayoutConstraint {
    UIWindow * _window;
}

@property (nonatomic) UIWindow *window;

- (bool)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (void)setWindow:(id)arg1;
- (id)window;

@end
