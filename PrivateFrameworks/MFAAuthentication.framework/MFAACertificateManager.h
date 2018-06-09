/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication
 */

@interface MFAACertificateManager : NSObject {
    NSUserDefaults * _userDefaults;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSUserDefaults *userDefaults;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)anchorCertificatesForTypes:(int)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (int)_validateCertificate:(struct __SecCertificate { }*)arg1 realtime:(bool)arg2 error:(id*)arg3;
- (id)init;
- (void)requestMetadataForCertificate:(id)arg1 requestedLocale:(id)arg2 requestInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setUserDefaults:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)userDefaults;
- (void)validateCertificate:(id)arg1 realtime:(bool)arg2 completionHandler:(id /* block */)arg3;
- (int)validateCertificate:(id)arg1 realtime:(bool)arg2 error:(id*)arg3;
- (id)xpcConnection;

@end