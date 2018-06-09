/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQOfferManager : NSObject {
    ICQOffer * _cachedOffer;
    NSObject<OS_dispatch_queue> * _cachedOfferQueue;
    NSTimer * _invalidationTimer;
    bool  _isRegisteredForDarwinNotifications;
}

@property (getter=isBuddyOfferEnabled, nonatomic) bool buddyOfferEnabled;
@property (nonatomic, retain) ICQOffer *cachedOffer;
@property (nonatomic, readonly) bool isDeviceStorageAlmostFull;
@property (nonatomic, readonly) NSNumber *photosLibrarySize;
@property (getter=isSimulatedDeviceStorageAlmostFull, nonatomic) bool simulatedDeviceStorageAlmostFull;
@property (nonatomic, retain) NSNumber *simulatedPhotosLibrarySize;

+ (bool)_legacyBuddyOfferMightNeedPresenting;
+ (bool)buddyOfferMightNeedPresenting;
+ (id)ckBackupDeviceID;
+ (id)defaultBundleIdentifier;
+ (id)defaultPlaceholderKeys;
+ (id)sharedOfferManager;
+ (id)stringWithPlaceholderFormat:(id)arg1 alternateString:(id)arg2;

- (void).cxx_destruct;
- (void)_firedInvalidationTimer:(id)arg1;
- (id)_funnelCloudServerOfferForAccount:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)_getOfferForAccount:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_handlePushReceivedDarwinNotification;
- (void)_refetchOffer;
- (void)_registerForDarwinNotifications;
- (void)_setupTimerForInvalidationDate:(id)arg1;
- (bool)_shouldUseOffer:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_teardownInvalidationTimer;
- (void)_unregisterForDarwinNotifications;
- (id)cachedOffer;
- (void)clearFollowups;
- (id)currentOffer;
- (id)currentOfferForBundleIdentifier:(id)arg1;
- (void)dealloc;
- (bool)fetchOfferIfNeeded;
- (void)forcePostFollowup;
- (void)getOfferForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getOfferWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isBuddyOfferEnabled;
- (bool)isDeviceStorageAlmostFull;
- (bool)isSimulatedDeviceStorageAlmostFull;
- (id)photosLibrarySize;
- (void)postBuddyOfferType:(id)arg1;
- (void)postOfferType:(id)arg1;
- (void)setBuddyOfferEnabled:(bool)arg1;
- (void)setCachedOffer:(id)arg1;
- (void)setSimulatedDeviceStorageAlmostFull:(bool)arg1;
- (void)setSimulatedPhotosLibrarySize:(id)arg1;
- (id)simulatedPhotosLibrarySize;
- (void)teardownCachedBuddyOffer;
- (void)teardownCachedOffer;
- (void)teardownCachedOffers;
- (void)updateOfferId:(id)arg1 buttonId:(id)arg2 info:(id)arg3 completion:(id /* block */)arg4;

@end