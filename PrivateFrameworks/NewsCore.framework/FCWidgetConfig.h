/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCWidgetConfig : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _configDictionary;
    NTPBWidgetConfig * _pbWidgetConfig;
}

@property (nonatomic, readonly) long long articleListBackgroundMinimumUpdateInterval;
@property (nonatomic, readonly) long long articleListForegroundMinimumUpdateInterval;
@property (nonatomic, readonly) long long backgroundMinimumUpdateInterval;
@property (nonatomic, copy) NSDictionary *configDictionary;
@property (nonatomic, readonly) long long forYouBackgroundMinimumUpdateInterval;
@property (nonatomic, readonly) long long forYouForegroundMinimumUpdateInterval;
@property (nonatomic, readonly) long long foregroundMinimumUpdateInterval;
@property (nonatomic, readonly) long long minimumArticleExposureDurationToBePreseen;
@property (nonatomic, readonly) unsigned int minimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic, readonly) double parsecPopulationCeiling;
@property (nonatomic, readonly) double parsecPopulationFloor;
@property (nonatomic, copy) NTPBWidgetConfig *pbWidgetConfig;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)articleListBackgroundMinimumUpdateInterval;
- (long long)articleListForegroundMinimumUpdateInterval;
- (long long)backgroundMinimumUpdateInterval;
- (id)configDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)forYouBackgroundMinimumUpdateInterval;
- (long long)forYouForegroundMinimumUpdateInterval;
- (long long)foregroundMinimumUpdateInterval;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithWidgetConfig:(id)arg1;
- (long long)minimumArticleExposureDurationToBePreseen;
- (unsigned int)minimumNumberOfTimesPreseenToBeSeen;
- (double)parsecPopulationCeiling;
- (double)parsecPopulationFloor;
- (id)pbWidgetConfig;
- (void)setConfigDictionary:(id)arg1;
- (void)setPbWidgetConfig:(id)arg1;

@end