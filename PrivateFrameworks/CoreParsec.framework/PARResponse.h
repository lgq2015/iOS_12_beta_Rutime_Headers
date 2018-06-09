/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARResponse : NSObject {
    NSArray * _corrections;
    GEOUserSessionEntity * _geoUserSessionEntity;
    NSString * _prefix;
    NSString * _query;
    NSArray * _rawResponse;
    NSDictionary * _rawSqf;
    PARReply * _reply;
    NSArray * _results;
    NSArray * _sections;
    NSDictionary * _serverFeatures;
    NSArray * _suggestions;
}

@property (nonatomic, readonly) NSArray *corrections;
@property (nonatomic, retain) GEOUserSessionEntity *geoUserSessionEntity;
@property (nonatomic, readonly) NSString *prefix;
@property (nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) NSArray *rawResponse;
@property (nonatomic, readonly) NSDictionary *rawSqf;
@property (nonatomic, readonly) PARReply *reply;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSDictionary *serverFeatures;
@property (nonatomic, readonly) NSArray *suggestions;

+ (id)responseFromJSON:(id)arg1 session:(id)arg2;
+ (id)responseFromReply:(id)arg1;

- (void).cxx_destruct;
- (id)corrections;
- (id)geoUserSessionEntity;
- (id)initWithReply:(id)arg1;
- (id)prefix;
- (id)query;
- (id)rawResponse;
- (id)rawSqf;
- (id)reply;
- (id)results;
- (id)sections;
- (id)serverFeatures;
- (void)setGeoUserSessionEntity:(id)arg1;
- (void)setResults:(id)arg1;
- (id)suggestions;

@end