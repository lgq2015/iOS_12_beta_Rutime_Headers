/* made by EzioChiu.
 */

@protocol SBUIPowerDownViewInterface <NSObject>

@required

- (<SBUIPowerDownViewDelegate> *)delegate;
- (void)hideAnimated:(bool)arg1;
- (void)setDelegate:(id <SBUIPowerDownViewDelegate>)arg1;
- (void)showAnimated:(bool)arg1;

@end
