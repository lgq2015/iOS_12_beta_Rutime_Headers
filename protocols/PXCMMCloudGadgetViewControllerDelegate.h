/* made by EzioChiu.
 */

@protocol PXCMMCloudGadgetViewControllerDelegate <PXGadgetDelegate>

@required

- (void)didUpdateCloudPhotoLibraryEnablement:(PXCMMCloudGadgetViewController *)arg1;
- (void)presentationRequestForWelcomeCloudViewController:(PXCMMCloudGadgetViewController *)arg1;

@end