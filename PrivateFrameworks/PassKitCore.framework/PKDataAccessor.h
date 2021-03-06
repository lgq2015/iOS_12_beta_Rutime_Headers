/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDataAccessor : NSObject {
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (nonatomic, readonly) NSData *archiveData;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSData *manifestHash;
@property (nonatomic, readonly) PKRemoteAssetManager *remoteAssetManager;
@property (nonatomic, readonly) bool remoteAssetsDownloaded;
@property (nonatomic, readonly) NSData *serializedFileWrapper;

- (void).cxx_destruct;
- (id)archiveData;
- (id)bundle;
- (id)content;
- (void)contentWithCompletion:(id /* block */)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (id)dictionary;
- (void)dictionaryWithCompletion:(id /* block */)arg1;
- (id)displayProfileOfType:(long long)arg1;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(id /* block */)arg3;
- (id)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(bool)arg3;
- (void)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(bool)arg5;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(bool)arg5 withCompletion:(id /* block */)arg6;
- (id)manifestHash;
- (void)noteShared;
- (id)remoteAssetManager;
- (bool)remoteAssetsDownloaded;
- (void)requestUpdateWithCompletion:(id /* block */)arg1;
- (id)resourceValueForKey:(id)arg1;
- (void)revocationStatusWithCompletion:(id /* block */)arg1;
- (id)serializedFileWrapper;
- (void)updateSettings:(unsigned long long)arg1;

@end
