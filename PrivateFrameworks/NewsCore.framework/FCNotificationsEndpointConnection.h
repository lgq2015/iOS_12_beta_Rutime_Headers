/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNotificationsEndpointConnection : FCEndpointConnection {
    NSString * _deviceOSVersion;
    NSString * _deviceType;
    FCFileCoordinatedNotificationDropbox * _fileCoordinatedNotificationDropbox;
}

@property (nonatomic, copy) NSString *deviceOSVersion;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, retain) FCFileCoordinatedNotificationDropbox *fileCoordinatedNotificationDropbox;

- (void).cxx_destruct;
- (id)_deviceInfoWithDeviceToken:(id)arg1;
- (id)_notificationDataInDropbox;
- (id)_notificationEntityWithChannelIDs:(id)arg1 isPaid:(bool)arg2;
- (id)_pushNotifySubscriptionRequestWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5;
- (void)_sendNotificationsSubscriptionRequest:(id)arg1 pathComponent:(id)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)_updateNotificationDropboxDataWithBaseURL:(id)arg1 notificationUserID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (id)deviceOSVersion;
- (id)deviceType;
- (id)fileCoordinatedNotificationDropbox;
- (id)initWithBaseURLString:(id)arg1;
- (id)initWithConfigurationManager:(id)arg1;
- (void)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(id /* block */)arg7;
- (void)registerDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)setDeviceOSVersion:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setFileCoordinatedNotificationDropbox:(id)arg1;
- (void)subscribeNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(id /* block */)arg7;
- (void)unregisterDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)unsubscribeNotificationsForChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 callbackQueue:(id)arg5 completion:(id /* block */)arg6;

@end
