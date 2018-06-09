/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDFollowUpNotifier : NSObject <DEDNotifier, DEDSecureArchiving, NSSecureCoding> {
    NSString * _bugSessionIdentifier;
    DEDNotifierConfiguration * _config;
    FLFollowUpController * _followUpController;
    NSObject<OS_os_log> * _log;
}

@property (retain) NSString *bugSessionIdentifier;
@property DEDNotifierConfiguration *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) FLFollowUpController *followUpController;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bugSessionIdentifier;
- (void)cancelNotification;
- (id)config;
- (void)encodeWithCoder:(id)arg1;
- (id)followUpController;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (id)log;
- (void)scheduleNotification;
- (void)setBugSessionIdentifier:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setFollowUpController:(id)arg1;
- (void)setLog:(id)arg1;

@end