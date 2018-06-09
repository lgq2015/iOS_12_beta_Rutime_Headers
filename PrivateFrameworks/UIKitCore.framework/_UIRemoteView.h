/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIRemoteView : _UILayerHostView <UIStatusBarTinting> {
    bool  _actsAsTintView;
    _UIHostedWindowHostingHandle * _hostedWindowHostingHandle;
    UIColor * _statusBarTintColor;
    id /* block */  _tintColorDidChangeHandler;
}

@property (setter=_setActsAsTintView:, nonatomic) bool _actsAsTintView;
@property (setter=_setInheritsSecurity:, nonatomic) bool _inheritsSecurity;
@property (setter=_setStatusBarTintColor:, nonatomic, retain) UIColor *_statusBarTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tintColorDidChangeHandler;

+ (bool)_requiresWindowTouches;
+ (Class)layerClass;
+ (id)viewWithHostedWindowHostingHandle:(id)arg1;
+ (id)viewWithRemoteContextID:(unsigned int)arg1;

- (void).cxx_destruct;
- (bool)_actsAsTintView;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (bool)_inheritsSecurity;
- (void)_setActsAsTintView:(bool)arg1;
- (void)_setInheritsSecurity:(bool)arg1;
- (void)_setStatusBarTintColor:(id)arg1;
- (void)_setStatusBarTintColor:(id)arg1 duration:(double)arg2;
- (id)_statusBarTintColor;
- (void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)hostedWindowHostingHandle;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (void)setTintColorDidChangeHandler:(id /* block */)arg1;
- (void)tintColorDidChange;
- (id /* block */)tintColorDidChangeHandler;

@end