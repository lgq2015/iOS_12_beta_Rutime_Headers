/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAnalyticsWriter : NSObject {
    NSString * _analyticsDirectory;
    struct __SecCertificate { } * _certificate;
    HDProfile * _profile;
}

+ (id)_payloadIdentifierForBugType:(id)arg1;

- (void).cxx_destruct;
- (id)URLForAnalyticsFileWithName:(id)arg1;
- (bool)_cleanAnalyticsDirectory:(id)arg1 error:(id*)arg2;
- (bool)_createAnalyticsDirectory:(id)arg1 error:(id*)arg2;
- (bool)_loadCertificateWithError:(id*)arg1;
- (id)analyticsFilePathsWithError:(id*)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (bool)submitJSONAnalyticsData:(id)arg1 bugType:(id)arg2 error:(id*)arg3;

@end
