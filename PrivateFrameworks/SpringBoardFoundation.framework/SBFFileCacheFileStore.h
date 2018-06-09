/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFFileCacheFileStore : NSObject <SBFFileCacheStore> {
    NSURL * _directoryURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *directoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)directoryURL;
- (id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2;
- (void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2;
- (void)fileCache:(id)arg1 storeFileWrapper:(id)arg2;
- (id)fileURLForFileNamed:(id)arg1;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1;
- (void)removeAllFileWrappersForFileCache:(id)arg1;

@end