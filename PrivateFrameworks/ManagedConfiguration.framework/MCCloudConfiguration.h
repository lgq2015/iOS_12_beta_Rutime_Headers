/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCloudConfiguration : NSObject {
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSDictionary * _memberQueueDetails;
    NSDictionary * _memberQueueSetAsideDetails;
}

@property (nonatomic, copy) NSDictionary *details;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) NSDictionary *memberQueueDetails;
@property (nonatomic, retain) NSDictionary *memberQueueSetAsideDetails;
@property (nonatomic, copy) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)details;
- (id)diagnosticsUploadURL;
- (id)init;
- (bool)isAwaitingConfiguration;
- (bool)isProvisionallyEnrolled;
- (bool)isSupervised;
- (bool)isTeslaEnrolled;
- (id)language;
- (id)languageScript;
- (id)memberQueue;
- (id)memberQueueDetails;
- (id)memberQueueSetAsideDetails;
- (id)provisionalEnrollmentExpirationDate;
- (void)refreshDetailsFromDisk;
- (id)region;
- (id)setAsideDetails;
- (void)setDetails:(id)arg1;
- (void)setMemberQueue:(id)arg1;
- (void)setMemberQueueDetails:(id)arg1;
- (void)setMemberQueueSetAsideDetails:(id)arg1;
- (void)setSetAsideDetails:(id)arg1;
- (id)tvProviderUserToken;
- (int)userMode;

@end
