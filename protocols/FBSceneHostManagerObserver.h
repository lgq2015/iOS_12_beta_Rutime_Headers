/* made by EzioChiu.
 */

@protocol FBSceneHostManagerObserver <NSObject>

@optional

- (void)sceneHostManager:(FBSceneHostManager *)arg1 willActivateRequester:(NSString *)arg2;
- (void)sceneHostManager:(FBSceneHostManager *)arg1 willDeactivateRequester:(NSString *)arg2;
- (void)sceneHostManagerContentStateDidChange:(FBSceneHostManager *)arg1;
- (void)sceneHostManagerDidInvalidate:(FBSceneHostManager *)arg1;

@end
