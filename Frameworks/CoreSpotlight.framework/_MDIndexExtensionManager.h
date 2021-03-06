/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface _MDIndexExtensionManager : NSObject <CSIndexExtensionDelegate> {
    _MDIndexExtensionLoader * _extensionLoader;
    NSCondition * _extensionsCondition;
    NSDictionary * _indexExtensionsByBundleID;
    bool  _isUnderMemoryPressure;
    NSObject<OS_dispatch_source> * _memoryStatusSource;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _MDIndexExtensionLoader *extensionLoader;
@property (nonatomic, retain) NSCondition *extensionsCondition;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *indexExtensionsByBundleID;
@property bool isUnderMemoryPressure;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *memoryStatusSource;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notifyQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_didRetryJobWithBundleID:(id)arg1;
- (void)_didUpdateMemoryStatus:(unsigned long long)arg1;
- (void)_filterExtensionsWithBlock:(id /* block */)arg1;
- (void)_notifyForLoadedExtensions;
- (void)_performJob:(id)arg1 extensions:(id)arg2 count:(unsigned long long)arg3 throttle:(id)arg4 perExtensionCompletionHandler:(id /* block */)arg5;
- (void)_performJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)_willRunJobWithBundleID:(id)arg1;
- (id)allExtensionsWithBlock:(id /* block */)arg1;
- (id)anyExtensionWithBlock:(id /* block */)arg1;
- (void)buildExtensionsCache;
- (void)dealloc;
- (id)extensionLoader;
- (id)extensions;
- (id)extensionsCondition;
- (id)fetchFileProviderBundleMap;
- (void)findExtensionsWithCompletionBlock:(id /* block */)arg1;
- (id)indexExtensionsByBundleID;
- (void)indexRequestsPerformDataJob:(id)arg1 forBundle:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)indexRequestsPerformJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)indexRequestsPerformJob:(id)arg1 forBundle:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)indexRequestsPerformJob:(id)arg1 perExtensionCompletionHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (bool)isUnderMemoryPressure;
- (void)loadExtensions;
- (void)loadExtensionsSynchronously;
- (id)memoryStatusSource;
- (id)notifyQueue;
- (id)queue;
- (void)setExtensionLoader:(id)arg1;
- (void)setExtensionsCondition:(id)arg1;
- (void)setIndexExtensionsByBundleID:(id)arg1;
- (void)setIsUnderMemoryPressure:(bool)arg1;
- (void)setMemoryStatusSource:(id)arg1;
- (void)setNotifyQueue:(id)arg1;
- (void)setQueue:(id)arg1;

@end
