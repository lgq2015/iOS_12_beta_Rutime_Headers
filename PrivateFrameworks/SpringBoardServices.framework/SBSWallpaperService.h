/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSWallpaperService : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    SBSWallpaperClient * _client;
    bool  _wasInvalidated;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidate;

@end
