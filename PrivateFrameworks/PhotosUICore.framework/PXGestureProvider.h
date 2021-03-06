/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGestureProvider : NSObject {
    <PXGestureProviderDelegate> * _delegate;
    NSArray * _gestureRecognizers;
    UIView * _hostingView;
}

@property (nonatomic) <PXGestureProviderDelegate> *delegate;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (nonatomic) UIView *hostingView;

- (void).cxx_destruct;
- (id)delegate;
- (id)gestureRecognizers;
- (id)hostingView;
- (void)hostingViewDidChange;
- (void)setDelegate:(id)arg1;
- (void)setHostingView:(id)arg1;

@end
