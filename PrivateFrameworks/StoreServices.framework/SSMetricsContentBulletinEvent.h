/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsContentBulletinEvent : SSMetricsBaseEvent {
    bool  _explicitEnabled;
    bool  _notificationsEnabled;
}

@property (nonatomic) bool explicitEnabled;
@property (nonatomic) bool notificationsEnabled;

- (id)_displayCriteria;
- (bool)clientExplicitEnabled;
- (bool)clientNotificationsEnabled;
- (bool)explicitEnabled;
- (id)initWithBulletinMetricsDictionary:(id)arg1;
- (bool)notificationsEnabled;
- (void)setExplicitEnabled:(bool)arg1;
- (void)setNotificationsEnabled:(bool)arg1;

@end
