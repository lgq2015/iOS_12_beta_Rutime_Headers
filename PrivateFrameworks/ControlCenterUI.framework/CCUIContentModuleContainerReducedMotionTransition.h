/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIContentModuleContainerReducedMotionTransition : CCUIContentModuleContainerTransition {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _snapshotCorrectiveTransform;
    UIWindow * _snapshotHostWindow;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } snapshotCorrectiveTransform;
@property (nonatomic) UIWindow *snapshotHostWindow;

- (void).cxx_destruct;
- (void)performWithCustomAnimator:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setSnapshotCorrectiveTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setSnapshotHostWindow:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })snapshotCorrectiveTransform;
- (id)snapshotHostWindow;

@end