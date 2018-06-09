/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationWorkspaceServer : FBWorkspaceServer

- (bool)_queue_handleMessage:(id)arg1 withType:(long long)arg2;
- (void)sendExitEvent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendLaunchEvent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendProcessAssertionExpirationImminent;

@end