/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCMapper : NSObject {
    OCCancel * mCancel;
    OITSUTemporaryDirectory * mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (void)cancel;
- (void)dealloc;
- (id)init;
- (bool)isCancelled;
- (void)quit;
- (void)setup;
- (void)teardown;
- (id)temporaryDirectoryPath;

@end