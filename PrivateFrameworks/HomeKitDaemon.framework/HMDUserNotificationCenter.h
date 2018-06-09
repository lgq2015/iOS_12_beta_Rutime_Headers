/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserNotificationCenter : HMFObject <NSSecureCoding, UNUserNotificationCenterDelegate> {
    HMDHomeManager * _homeManager;
    NSMutableDictionary * _notificationRequests;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, retain) NSMutableDictionary *notificationRequests;
@property (readonly) Class superclass;
@property (nonatomic, retain) UNUserNotificationCenter *userNotificationCenter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_getActionCombinationCategory:(id)arg1;
- (void)_removeRequestWithIdentifier:(id)arg1;
- (void)_removeRequestWithIdentifiersFromNotificationCenter:(id)arg1;
- (void)_showNotification:(id)arg1;
- (void)configureHomeManager:(id)arg1;
- (void)cullBulletinsToCount:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)homeManager;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)insertRequestWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 requestIdentifier:(id)arg4 bulletinType:(unsigned long long)arg5 actionURL:(id)arg6 bulletinContext:(struct NSDictionary { Class x1; }*)arg7 actionContext:(struct NSDictionary { Class x1; }*)arg8;
- (id)notificationRequests;
- (void)registerNotificationCategories;
- (void)removeRequestWithIdentifier:(id)arg1;
- (void)setBadgeNumber:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setNotificationRequests:(id)arg1;
- (void)setUserNotificationCenter:(id)arg1;
- (id)sortDescriptors;
- (id)sortedRequestsByDate;
- (void)updateNotification:(id)arg1 content:(id)arg2;
- (id)userNotificationCenter;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end