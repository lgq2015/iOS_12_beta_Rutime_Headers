/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSWebProcessPlugIn : NSObject <WKWebProcessPlugIn> {
    NSMapTable * _browserContextControllersToWebProcessPlugInPageControllers;
    WKWebProcessPlugInController * _plugInController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *doNotTrackEnabledPreference;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKWebProcessPlugInController *plugInController;
@property (nonatomic, readonly) NSNumber *safeBrowsingEnabledPreference;
@property (nonatomic, readonly) NSArray *searchEnginesForRedirectToSafeSearch;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didCreatePageController:(id)arg1 forBrowserContextController:(id)arg2;
- (id)doNotTrackEnabledPreference;
- (id)pageControllerWithBrowserContextController:(id)arg1;
- (id)parameterValueForKey:(id)arg1;
- (id)plugInController;
- (id)safeBrowsingEnabledPreference;
- (id)searchEnginesForRedirectToSafeSearch;
- (void)webProcessPlugIn:(id)arg1 didCreateBrowserContextController:(id)arg2;
- (void)webProcessPlugIn:(id)arg1 initializeWithObject:(id)arg2;
- (void)webProcessPlugIn:(id)arg1 willDestroyBrowserContextController:(id)arg2;
- (void)willDestroyPageController:(id)arg1 forBrowserContextController:(id)arg2;

@end