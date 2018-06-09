/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKEvent : NSObject <NSSecureCoding> {
    unsigned long long  _airingType;
    NSString * _airingTypeString;
    NSString * _canonicalID;
    NSDate * _canonicalStartDate;
    NSString * _channelID;
    NSNumber * _cleanupTime;
    NSDictionary * _dictionary;
    NSDate * _endDate;
    NSString * _externalPlayableID;
    NSString * _externalServiceID;
    NSString * _legID;
    NSString * _serviceID;
    NSDate * _startDate;
}

@property (nonatomic, readonly) unsigned long long airingType;
@property (nonatomic, readonly) NSString *airingTypeString;
@property (nonatomic, readonly) NSString *canonicalID;
@property (nonatomic, readonly) NSDate *canonicalStartDate;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) NSNumber *cleanupTime;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *externalPlayableID;
@property (nonatomic, readonly) NSString *externalServiceID;
@property (nonatomic, readonly) NSString *legID;
@property (nonatomic, readonly) NSString *serviceID;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)airingType;
- (id)airingTypeString;
- (id)canonicalID;
- (id)canonicalStartDate;
- (id)channelID;
- (id)cleanupTime;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)externalPlayableID;
- (id)externalServiceID;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)legID;
- (id)serviceID;
- (id)startDate;

@end