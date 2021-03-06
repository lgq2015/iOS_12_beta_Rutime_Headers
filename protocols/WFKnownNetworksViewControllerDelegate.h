/* made by EzioChiu.
 */

@protocol WFKnownNetworksViewControllerDelegate <NSObject>

@required

- (NSDate *)getDateAddedForNetwork:(NSString *)arg1;
- (NSDate *)getDateLastJoinedForNetwork:(NSString *)arg1;
- (NSArray *)getGeoTagsForNetwork:(NSString *)arg1;
- (NSArray *)getKnownNetworksList;
- (NSString *)getPasswordForNetwork:(NSString *)arg1;
- (NSDictionary *)getScoreForNetwork:(NSString *)arg1;
- (NSString *)getSecurityTypeStringForNetwork:(NSString *)arg1;
- (bool)isNetworkBlacklisted:(NSString *)arg1;
- (bool)isNetworkHidden:(NSString *)arg1;
- (void)removeKnownNetworkWithSsid:(NSString *)arg1;

@end
