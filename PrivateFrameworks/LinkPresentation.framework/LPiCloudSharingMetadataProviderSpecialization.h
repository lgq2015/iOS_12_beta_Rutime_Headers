/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    CKContainer * _applicationContainer;
    NSString * _applicationFromURL;
    CKContainer * _baseContainer;
    bool  _canceled;
    NSString * _titleFromURL;
}

+ (id)applicationNameMap;
+ (id)extractApplicationFromURL:(id)arg1;
+ (id)extractTitleFromURL:(id)arg1;
+ (id)specializedMetadataProviderForURL:(id)arg1;

- (void).cxx_destruct;
- (id)applicationFromBundleIdentifiers:(id)arg1 containerIdentifier:(id)arg2;
- (bool)canUseCloudKit;
- (void)cancel;
- (void)completeUsingApplication:(id)arg1 title:(id)arg2;
- (void)completeWithShareMetadata:(id)arg1 bundleIDs:(id)arg2;
- (id)entitlementForKey:(id)arg1;
- (void)fail;
- (id)iconFromShare:(id)arg1;
- (id)initWithURL:(id)arg1 applicationFromURL:(id)arg2 titleFromURL:(id)arg3;
- (void)start;

@end
