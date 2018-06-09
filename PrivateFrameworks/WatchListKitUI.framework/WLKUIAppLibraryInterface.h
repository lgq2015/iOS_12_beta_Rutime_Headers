/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIAppLibraryInterface : IKJSObject <WLKUIAppLibraryInterface> {
    WLKUIAppInstallerViewController * _installerViewController;
}

@property (nonatomic, readonly) NSArray *installed;
@property (nonatomic, readonly) NSArray *subscribed;
@property (nonatomic, readonly) NSArray *test;

+ (bool)_appInstallationAllowed;

- (void).cxx_destruct;
- (id)_appDictionariesForProxies:(id)arg1;
- (id)_appDictionaryForProxy:(id)arg1;
- (void)_configureAppInstallerViewController:(id)arg1 withOptions:(id)arg2;
- (id)_rootViewController;
- (void)installAppForChannel:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4;
- (id)installed;
- (bool)isAppInstalled:(id)arg1;
- (bool)isShowingInstaller;
- (void)presentPurchase:(id)arg1;
- (id)subscribed;
- (id)test;

@end