/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIViewControllerAction : NSObject {
    id /* block */  _completion;
    double  _curlUpRevealedHeight;
    NSString * _name;
    int  _transition;
    UIViewController * _viewController;
}

@property (setter=_setCurlUpRevealedHeight:, nonatomic) double _curlUpRevealedHeight;
@property (nonatomic, readonly) bool animated;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int transition;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (double)_curlUpRevealedHeight;
- (void)_setCurlUpRevealedHeight:(double)arg1;
- (bool)animated;
- (id /* block */)completion;
- (id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3;
- (id)name;
- (void)setCompletion:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setTransition:(int)arg1;
- (void)setViewController:(id)arg1;
- (int)transition;
- (id)viewController;

@end