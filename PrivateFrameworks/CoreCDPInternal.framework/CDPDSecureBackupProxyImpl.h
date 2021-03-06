/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_secureBackup;
- (id)accountInfoWithInfo:(id)arg1 error:(id*)arg2;
- (void)cacheRecoveryKey:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)disableWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)disableWithInfo:(id)arg1 error:(id*)arg2;
- (void)enableWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)enableWithInfo:(id)arg1 error:(id*)arg2;
- (void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(id /* block */)arg2;
- (void)recoverWithInfo:(id)arg1 completionBlockWithResults:(id /* block */)arg2;
- (id)recoverWithInfo:(id)arg1 error:(id*)arg2;
- (void)uncacheAllSecrets;

@end
