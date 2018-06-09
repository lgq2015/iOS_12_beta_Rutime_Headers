/* made by EzioChiu.
 */

@protocol VSViewServiceRemoteViewControllerDelegate <NSObject>

@required

- (void)dismissViewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1;
- (void)presentViewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didCancelRequest:(NSUUID *)arg2;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didChooseAdditionalProvidersForRequest:(NSUUID *)arg2;
- (void)viewServiceRemoteViewController:(void *)arg1 didSelectProviderWithIdentifier:(void *)arg2 vetoHandler:(void *)arg3; // needs 3 arg types, found 8: VSViewServiceRemoteViewController *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 request:(NSUUID *)arg2 didFailWithError:(NSError *)arg3;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 request:(NSUUID *)arg2 didFinishWithResponse:(VSViewServiceResponse *)arg3;

@end