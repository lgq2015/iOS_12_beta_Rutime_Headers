/* made by EzioChiu.
 */

@protocol CRKCardSectionViewControllerDelegate <CRFeedbackListener>

@optional

- (struct CGSize { double x1; double x2; })boundingSizeForCardSectionViewController:(CRKCardSectionViewController *)arg1;
- (bool)canPerformCommand:(id <CRCommand>)arg1 forCardSectionViewController:(CRKCardSectionViewController *)arg2;
- (void)cardSectionViewController:(CRKCardSectionViewController *)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
- (void)cardSectionViewController:(CRKCardSectionViewController *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)cardSectionViewControllerBoundsDidChange:(CRKCardSectionViewController *)arg1;
- (void)cardSectionViewControllerDidFinishLoading:(CRKCardSectionViewController *)arg1;
- (bool)performCommand:(id <CRCommand>)arg1 forCardSectionViewController:(CRKCardSectionViewController *)arg2;
- (long long)preferredPunchoutIndexForCardSectionViewController:(CRKCardSectionViewController *)arg1;
- (void)presentViewController:(UIViewController *)arg1 forCardSectionViewController:(CRKCardSectionViewController *)arg2;

@end