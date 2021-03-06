/* made by EzioChiu.
 */

@protocol FCFeedTransformationItem <NSObject, FCFeedPersonalizingArticle>

@required

- (NSString *)articleID;
- (bool)canBePurchased;
- (NSString *)clusterID;
- (unsigned long long)contentType;
- (unsigned long long)feedHalfLifeMilliseconds;
- (NSString *)feedID;
- (double)globalUserFeedback;
- (bool)isExplicitContent;
- (bool)isFromBlockedStorefront;
- (bool)isPaid;
- (long long)minimumNewsVersion;
- (unsigned long long)order;
- (unsigned long long)publishDateMilliseconds;
- (long long)publisherArticleVersion;
- (NSString *)sourceChannelID;

@end
