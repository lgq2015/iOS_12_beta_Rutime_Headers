/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPConnectionsPasteboardSource : PPConnectionsSource <PPConnectionsLocationSource> {
    NSCache * _cache;
    NSObject<OS_dispatch_semaphore> * _init_sem;
    unsigned long long  _pasteboardNotificationState;
    id  _pasteboardObserver;
    NSOperationQueue * _pbQueue;
    NSLocale * _testLocale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)identifier;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_mostRecentPasteboardItem;
- (void)_setMostRecentPasteboardItem:(id)arg1;
- (id)addressPasteboardTextItemFromNotification:(bool)arg1;
- (id)cacheValueForKey:(id)arg1;
- (void)dealloc;
- (id)fetchedPasteboardItem;
- (id)init;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (void)refreshMostRecentPasteboardItemFromNotification:(bool)arg1 explanationSet:(id)arg2;
- (void)setCacheObject:(id)arg1 forKey:(id)arg2;
- (void)setTestLocale:(id)arg1;
- (id)supportedSemanticTags;
- (id)validUTTypes;

@end
