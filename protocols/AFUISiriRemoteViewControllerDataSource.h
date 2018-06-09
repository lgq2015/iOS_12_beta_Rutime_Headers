/* made by EzioChiu.
 */

@protocol AFUISiriRemoteViewControllerDataSource <NSObject>

@required

- (unsigned long long)lockStateForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (AFBulletin *)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 bulletinWithIdentifier:(NSString *)arg2;

@end
