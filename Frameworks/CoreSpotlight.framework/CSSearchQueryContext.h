/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchQueryContext : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _bundleIDs;
    NSString * _clientBundleID;
    NSArray * _completionAttributes;
    long long  _completionResultCount;
    NSString * _completionString;
    NSArray * _disableBundles;
    long long  _dominantRankingQueryCount;
    long long  _dominatedRankingQueryCount;
    NSArray * _fetchAttributes;
    NSString * _filterQuery;
    unsigned char  _flags;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _fuzzyMask;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _fuzzyMatch;
    NSString * _keyboardLanguage;
    NSArray * _markedTextArray;
    long long  _maxCount;
    NSArray * _preferredLanguages;
    NSArray * _protectionClasses;
    long long  _queryID;
    NSArray * _rankingQueries;
    int  _rankingType;
    long long  _strongRankingQueryCount;
    NSString * _userQuery;
}

@property (nonatomic) bool attribute;
@property (nonatomic, retain) NSArray *bundleIDs;
@property (nonatomic, retain) NSString *clientBundleID;
@property (nonatomic, retain) NSArray *completionAttributes;
@property (nonatomic) long long completionResultCount;
@property (nonatomic, retain) NSString *completionString;
@property (nonatomic) bool counting;
@property (nonatomic, retain) NSArray *disableBundles;
@property (nonatomic) long long dominantRankingQueryCount;
@property (nonatomic) long long dominatedRankingQueryCount;
@property (nonatomic, retain) NSArray *fetchAttributes;
@property (nonatomic, retain) NSString *filterQuery;
@property (nonatomic) unsigned char flags;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*fuzzyMask;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*fuzzyMatch;
@property (nonatomic) bool grouped;
@property (nonatomic) bool internal;
@property (nonatomic, retain) NSString *keyboardLanguage;
@property (nonatomic) bool live;
@property (nonatomic) bool lowPriority;
@property (nonatomic, retain) NSArray *markedTextArray;
@property (nonatomic) long long maxCount;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, retain) NSArray *preferredLanguages;
@property (nonatomic, retain) NSArray *protectionClasses;
@property (nonatomic) long long queryID;
@property (nonatomic, retain) NSArray *rankingQueries;
@property (nonatomic) int rankingType;
@property (nonatomic) long long strongRankingQueryCount;
@property (nonatomic, retain) NSString *userQuery;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)attribute;
- (id)bundleIDs;
- (id)clientBundleID;
- (id)completionAttributes;
- (long long)completionResultCount;
- (id)completionString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)counting;
- (id)debugDescription;
- (id)description;
- (id)disableBundles;
- (long long)dominantRankingQueryCount;
- (long long)dominatedRankingQueryCount;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchAttributes;
- (id)filterQuery;
- (unsigned char)flags;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)fuzzyMask;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)fuzzyMatch;
- (bool)grouped;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)internal;
- (id)keyboardLanguage;
- (bool)live;
- (bool)lowPriority;
- (id)markedTextArray;
- (long long)maxCount;
- (id)options;
- (id)preferredLanguages;
- (id)protectionClasses;
- (long long)queryID;
- (id)rankingQueries;
- (int)rankingType;
- (void)setAttribute:(bool)arg1;
- (void)setBundleIDs:(id)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setCompletionAttributes:(id)arg1;
- (void)setCompletionResultCount:(long long)arg1;
- (void)setCompletionString:(id)arg1;
- (void)setCounting:(bool)arg1;
- (void)setDisableBundles:(id)arg1;
- (void)setDominantRankingQueryCount:(long long)arg1;
- (void)setDominatedRankingQueryCount:(long long)arg1;
- (void)setFetchAttributes:(id)arg1;
- (void)setFilterQuery:(id)arg1;
- (void)setFlags:(unsigned char)arg1;
- (void)setFuzzyMask:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setFuzzyMatch:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setGrouped:(bool)arg1;
- (void)setInternal:(bool)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setLive:(bool)arg1;
- (void)setLowPriority:(bool)arg1;
- (void)setMarkedTextArray:(id)arg1;
- (void)setMaxCount:(long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setProtectionClasses:(id)arg1;
- (void)setQueryID:(long long)arg1;
- (void)setRankingQueries:(id)arg1;
- (void)setRankingType:(int)arg1;
- (void)setStrongRankingQueryCount:(long long)arg1;
- (void)setUserQuery:(id)arg1;
- (long long)strongRankingQueryCount;
- (id)userQuery;
- (id)xpc_dictionary;

@end