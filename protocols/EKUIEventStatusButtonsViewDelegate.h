/* made by EzioChiu.
 */

@protocol EKUIEventStatusButtonsViewDelegate <NSObject>

@required

- (void)eventStatusButtonsView:(EKUIEventStatusButtonsView *)arg1 calculatedFontSizeToFit:(double)arg2;
- (void)eventStatusButtonsView:(EKUIEventStatusButtonsView *)arg1 didSelectAction:(long long)arg2;
- (double)eventStatusButtonsViewButtonFontSize:(EKUIEventStatusButtonsView *)arg1;

@end
