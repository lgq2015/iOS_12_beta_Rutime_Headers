/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKRestrictionsUtilities : NSObject <NSCacheDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_purgableRatingsDictionary;
+ (id)_ratingDictionaryForDomain:(id)arg1 countryCode:(id)arg2;
+ (id)orderedRankingsInDomain:(id)arg1 countryCode:(id)arg2;
+ (id)rankingForRestrictionRating:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3;
+ (id)ratingForRestrictionRanking:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3;

- (void)cache:(id)arg1 willEvictObject:(id)arg2;

@end