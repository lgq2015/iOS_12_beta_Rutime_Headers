/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRefreshNotificationsForChannelsCommand : FCCommand {
    NSArray * _channelIDs;
    NSString * _deviceToken;
    NSArray * _paidChannelIDs;
    NSString * _storefrontID;
    NSString * _userID;
}

@property (nonatomic, copy) NSArray *channelIDs;
@property (nonatomic, copy) NSString *deviceToken;
@property (nonatomic, copy) NSArray *paidChannelIDs;
@property (nonatomic, copy) NSString *storefrontID;
@property (nonatomic, copy) NSString *userID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channelIDs;
- (id)deviceToken;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)paidChannelIDs;
- (void)setChannelIDs:(id)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)setPaidChannelIDs:(id)arg1;
- (void)setStorefrontID:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)storefrontID;
- (id)userID;

@end