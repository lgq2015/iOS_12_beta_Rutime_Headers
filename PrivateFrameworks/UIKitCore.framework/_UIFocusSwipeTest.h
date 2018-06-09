/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusSwipeTest : _UIFocusTest {
    unsigned long long  _eventCount;
    const struct { double x1; long long x2; double x3; double x4; double x5; double x6; } * _events;
    int  _swipeAxis;
    UIWindow * _window;
}

@property (nonatomic) int swipeAxis;
@property (nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;
- (void)main;
- (void)prepareWithCompletionHandler:(id /* block */)arg1;
- (void)setSwipeAxis:(int)arg1;
- (void)setWindow:(id)arg1;
- (int)swipeAxis;
- (id)window;

@end