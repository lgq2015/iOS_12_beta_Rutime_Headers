/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSDevice : NSObject {
    int (* _copyAnswer;
}

@property (nonatomic) int (*copyAnswer;
@property (nonatomic, readonly) unsigned long long deviceType;
@property (getter=isRunningACustomerBuild, nonatomic, readonly) bool runningACustomerBuild;
@property (getter=isRunningAnInternalBuild, nonatomic, readonly) bool runningAnInternalBuild;

+ (unsigned long long)_deviceTypeWithCopyAnswer:(int (*)arg1;
+ (bool)_getMobileGestaltBoolean:(struct __CFString { }*)arg1 withCopyAnswer:(int (*)arg2;
+ (bool)_runningACustomerBuildWithCopyAnswer:(int (*)arg1;
+ (bool)_runningAnInternalBuildWithCopyAnswer:(int (*)arg1;
+ (id)currentDevice;

- (id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)arg1;
- (int (*)copyAnswer;
- (id)developerIdentityProviderDeletionConfirmationMessage;
- (unsigned long long)deviceType;
- (id)init;
- (bool)isRunningACustomerBuild;
- (bool)isRunningAnInternalBuild;
- (void)setCopyAnswer:(int (*)arg1;

@end
