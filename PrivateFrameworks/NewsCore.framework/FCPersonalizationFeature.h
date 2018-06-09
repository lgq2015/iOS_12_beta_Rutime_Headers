/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPersonalizationFeature : NSObject <NSCopying> {
    NSString * _fc_description;
    NSString * _personalizationIdentifier;
    NSString * _tagID;
}

@property (nonatomic, readonly) NSString *fc_description;
@property (nonatomic, retain) NSString *personalizationIdentifier;
@property (nonatomic, retain) NSString *tagID;

+ (id)featureForFreeValuedIdentifier:(id)arg1;
+ (id)featureForIdentifier:(id)arg1;
+ (id)featureForIdentifier:(id)arg1 allowFreeValued:(bool)arg2;
+ (id)featureFromTagID:(id)arg1;
+ (id)featureObserver;
+ (id)featuresFromHeadline:(id)arg1;
+ (id)featuresFromPersonalizingArticle:(id)arg1;
+ (id)featuresFromTag:(id)arg1;
+ (id)featuresFromTagIDs:(id)arg1;
+ (id)featuresFromTodayPersonalizationEvent:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fc_description;
- (id)fr_description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)personalizationIdentifier;
- (void)setPersonalizationIdentifier:(id)arg1;
- (void)setTagID:(id)arg1;
- (id)tagID;

@end