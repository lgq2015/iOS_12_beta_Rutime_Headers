/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUserActivity : NSObject <CRContent, INCacheableObject, NSItemProviderReading, NSItemProviderWriting, UIItemProviderReading, UIItemProviderWriting> {
    id  _delegate;
    id  _frameworkDelegate;
    id  _internal;
}

@property (setter=_setContentAttributes:, copy) NSDictionary *_contentAttributes;
@property (setter=_setContentIdentifier:, copy) NSString *_contentIdentifier;
@property (setter=_setContentType:, copy) NSString *_contentType;
@property (setter=_setContentUserAction:, copy) NSString *_contentUserAction;
@property (getter=_isEligibleForUserActivityHandoff, setter=_setEligibleForUserActivityHandoff:) bool _eligibleForUserActivityHandoff;
@property (getter=_isEligibleForUserActivityIndexing, setter=_setEligibleForUserActivityIndexing:) bool _eligibleForUserActivityIndexing;
@property (getter=_isEligibleForUserActivityPublicIndexing, setter=_setEligibleForUserActivityPublicIndexing:) bool _eligibleForUserActivityPublicIndexing;
@property (getter=_isEligibleForUserActivityReminders, setter=_setEligibleForUserActivityReminders:) bool _eligibleForUserActivityReminders;
@property (setter=_setExpirationDate:, copy) NSDate *_expirationDate;
@property (setter=_setFrameworkDelegate:) <NSUserActivityDelegate> *_frameworkDelegate;
@property (setter=_setFrameworkPayload:, copy) NSDictionary *_frameworkPayload;
@property (readonly, retain) UAUserActivity *_internalUserActivity;
@property (setter=_setKeywords:, copy) NSSet *_keywords;
@property (readonly, copy) NSDate *_lastActivityDate;
@property (setter=_setMinimalRequiredUserInfoKeys:, copy) NSSet *_minimalRequiredUserInfoKeys;
@property (setter=_setOptions:, copy) NSDictionary *_options;
@property (readonly, copy) NSUUID *_originalUniqueIdentifier;
@property (setter=_setSubtitle:, copy) NSString *_subtitle;
@property (readonly) long long _suggestedActionType;
@property (readonly, copy) NSString *_teamIdentifier;
@property (readonly, retain) NSUUID *_uniqueIdentifier;
@property (readonly, copy) NSString *activityType;
@property (nonatomic, readonly, copy) NSString *cacheIdentifier;
@property (copy) CSSearchableItemAttributeSet *contentAttributeSet;
@property (nonatomic, readonly) NSArray *contextIdentifierPath;
@property (readonly, copy) NSString *debugDescription;
@property <NSUserActivityDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) CIBarcodeDescriptor *detectedBarcodeDescriptor;
@property (getter=isEligibleForHandoff) bool eligibleForHandoff;
@property (getter=isEligibleForPrediction) bool eligibleForPrediction;
@property (getter=isEligibleForPublicIndexing) bool eligibleForPublicIndexing;
@property (getter=isEligibleForSearch) bool eligibleForSearch;
@property (copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *externalMediaContentIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INInteraction *interaction;
@property (nonatomic, readonly) bool isClassKitDeepLink;
@property (copy) NSSet *keywords;
@property (nonatomic, retain) MKMapItem *mapItem;
@property bool needsSave;
@property (copy) NSString *persistentIdentifier;
@property (copy) NSURL *referrerURL;
@property (copy) NSSet *requiredUserInfoKeys;
@property (nonatomic, copy) NSString *suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property bool supportsContinuationStreams;
@property (copy) NSString *title;
@property (copy) NSDictionary *userInfo;
@property (copy) NSURL *webpageURL;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_currentUserActivityUUID;
+ (bool)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(id /* block */)arg3;
+ (void)_registerUserActivityType:(id)arg1 dynamicActivityType:(id)arg2;
+ (bool)_supportsUserActivityAppLinks;
+ (void)_unregisterUserActivityType:(id)arg1 dynamicActivityType:(id)arg2;
+ (id)_userFacingErrorForLaunchServicesError:(id)arg1 userInfo:(id)arg2;
+ (void)deleteAllSavedUserActivitiesWithCompletionHandler:(id /* block */)arg1;
+ (void)deleteSavedUserActivitiesWithPersistentIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_addKeywordsFromArray:(id)arg1;
- (id)_contentAttributes;
- (id)_contentIdentifier;
- (id)_contentType;
- (id)_contentUserAction;
- (bool)_createUserActivityDataWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_createUserActivityStringsWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1;
- (id)_determineMatchingApplicationBundleIdentifierWithOptions:(id)arg1;
- (id)_expirationDate;
- (id)_frameworkDelegate;
- (id)_frameworkPayload;
- (id)_initWithTypeIdentifier:(id)arg1 suggestedActionType:(long long)arg2 options:(id)arg3;
- (id)_initWithUserActivityData:(id)arg1;
- (id)_initWithUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3;
- (id)_initWithUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 options:(id)arg3;
- (id)_internalUserActivity;
- (bool)_isEligibleForUserActivityHandoff;
- (bool)_isEligibleForUserActivityIndexing;
- (bool)_isEligibleForUserActivityPublicIndexing;
- (bool)_isEligibleForUserActivityReminders;
- (id)_keywords;
- (id)_lastActivityDate;
- (id)_minimalRequiredUserInfoKeys;
- (id)_options;
- (id)_parentUserActivity;
- (void)_prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeFrameworkPayloadValueForKey:(id)arg1;
- (void)_removeUserInfoValueForKey:(id)arg1;
- (void)_resignCurrent;
- (void)_setContentAttributes:(id)arg1;
- (void)_setContentIdentifier:(id)arg1;
- (void)_setContentType:(id)arg1;
- (void)_setContentUserAction:(id)arg1;
- (void)_setEligibleForUserActivityHandoff:(bool)arg1;
- (void)_setEligibleForUserActivityIndexing:(bool)arg1;
- (void)_setEligibleForUserActivityPublicIndexing:(bool)arg1;
- (void)_setEligibleForUserActivityReminders:(bool)arg1;
- (void)_setExpirationDate:(id)arg1;
- (void)_setFrameworkDelegate:(id)arg1;
- (void)_setFrameworkPayload:(id)arg1;
- (void)_setKeywords:(id)arg1;
- (void)_setLastActivityDate:(id)arg1;
- (void)_setMinimalRequiredUserInfoKeys:(id)arg1;
- (void)_setOptions:(id)arg1;
- (void)_setParentUserActivity:(id)arg1;
- (void)_setSubtitle:(id)arg1;
- (id)_subtitle;
- (long long)_suggestedActionType;
- (id)_teamIdentifier;
- (id)_uniqueIdentifier;
- (void)_updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2;
- (void)_updateUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)activityType;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
- (void)becomeCurrent;
- (id)contentAttributeSet;
- (id)contentAttributes;
- (id)contentType;
- (id)contentUserAction;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)didSynchronizeActivity;
- (id)expirationDate;
- (void)getContinuationStreamsWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithActivityType:(id)arg1;
- (id)initWithInternalUserActivity:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1;
- (void)invalidate;
- (bool)isEligibleForHandoff;
- (bool)isEligibleForPrediction;
- (bool)isEligibleForPublicIndexing;
- (bool)isEligibleForSearch;
- (bool)isEqual:(id)arg1;
- (id)keywords;
- (bool)needsSave;
- (id)persistentIdentifier;
- (id)referrerURL;
- (id)requiredUserInfoKeys;
- (void)resignCurrent;
- (void)setContentAttributeSet:(id)arg1;
- (void)setContentAttributes:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setContentUserAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEligibleForHandoff:(bool)arg1;
- (void)setEligibleForPrediction:(bool)arg1;
- (void)setEligibleForPublicIndexing:(bool)arg1;
- (void)setEligibleForSearch:(bool)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setNeedsSave:(bool)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setReferrerURL:(id)arg1;
- (void)setRequiredUserInfoKeys:(id)arg1;
- (void)setSupportsContinuationStreams:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWebPageURL:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (bool)supportsContinuationStreams;
- (id)title;
- (id)typeIdentifier;
- (id)userInfo;
- (id)webPageURL;
- (id)webpageURL;
- (void)willSynchronizeActivity;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

- (id)contextIdentifierPath;
- (bool)isClassKitDeepLink;

// Image: /System/Library/Frameworks/CoreImage.framework/CoreImage

- (id)detectedBarcodeDescriptor;
- (void)setDetectedCode:(id)arg1;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
+ (void)deleteAllInteractions;
+ (void)deleteInteractionsWithGroupIdentifier:(id)arg1;
+ (void)deleteInteractionsWithIdentifiers:(id)arg1;

- (bool)_accessedInteraction;
- (long long)_executionContext;
- (bool)_hasInteraction;
- (id)_initWithIntent:(id)arg1;
- (id)_intentsIdentifier;
- (bool)_isEligibleForPrediction;
- (void)_setAccessedInteraction:(bool)arg1;
- (void)_setEligibleForPrediction:(bool)arg1;
- (void)_setExecutionContext:(long long)arg1;
- (void)_setInteraction:(id)arg1 donate:(bool)arg2;
- (id)cacheIdentifier;
- (void)generateCachePayloadWithCompletion:(id /* block */)arg1;
- (id)inInteraction;
- (id)interaction;
- (void)setInInteraction:(id)arg1;
- (void)setInteraction:(id)arg1;
- (void)setSuggestedInvocationPhrase:(id)arg1;
- (id)suggestedInvocationPhrase;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_clearMapItemDonationFields;
- (void)_mapkit_populateFieldsForDonationOfMapItem:(id)arg1;
- (id)mapItem;
- (void)setMapItem:(id)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)_externalMediaContentBundleIdentifier;
- (void)_setExternalMediaContentBundleIdentifier:(id)arg1;
- (id)externalMediaContentIdentifier;
- (void)setExternalMediaContentIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

+ (bool)apui_isSupportedForCardRequests;

- (id)apui_intent;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)underlyingInteraction;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)_cnui_searchMailUserActivityForContact:(id)arg1;
+ (id)_cnui_sendMessageIntentWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_startAudioCallIntentWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_startVideoCallIntentWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_userActivityWithActivityType:(id)arg1 handle:(id)arg2 contact:(id)arg3 intentWithPerson:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id)mtUserActivityWithActivityType:(id)arg1;
+ (id)mtUserActivityWithActivityType:(id)arg1 title:(id)arg2;
+ (id)mtUserActivityWithActivityType:(id)arg1 title:(id)arg2 keywords:(id)arg3;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (bool)px_allowsDonationsForCurrentProcess;

- (bool)px_isCurrent;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)newObjectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity

+ (bool)_registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;

- (id)_copyWithNewUUID;
- (id)_objectForIdentifier:(id)arg1;
- (id)_originalUniqueIdentifier;
- (id)_payloadForIdentifier:(id)arg1;
- (id /* block */)_payloadUpdateBlockForIdentifier:(id)arg1;
- (void)_sendToCoreSpotlightIndexer;
- (void)_setDirty:(bool)arg1 identifier:(id)arg2;
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3;
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(bool)arg4;
- (void)_setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(id /* block */)arg3;
- (void)_updateForwardToCoreSpotlightIndexer:(BOOL)arg1;
- (id)contentAttributeSet;
- (void)setContentAttributeSet:(id)arg1;

@end