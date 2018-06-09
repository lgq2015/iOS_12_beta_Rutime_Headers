/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECQueryItem : _DECItem {
    NSString * _abGroupIdentifier;
    NSString * _contactIdentifier;
    NSString * _queryText;
    NSSet * _reasonCodes;
    NSSet * _reasons;
}

@property (nonatomic, retain) NSString *abGroupIdentifier;
@property (nonatomic, retain) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *queryText;
@property (nonatomic, readonly) NSSet *reasonCodes;
@property (nonatomic, readonly) NSSet *reasons;

+ (unsigned long long)category;
+ (id)createFromSearchResult:(id)arg1;
+ (bool)isSearchFoundationCompliant;
+ (id)queryWithText:(id)arg1 reasons:(id)arg2 reasonCodes:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToDECQueryItem:(id)arg1;
- (id)abGroupIdentifier;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 reasons:(id)arg2 reasonCodes:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)queryText;
- (id)reasonCodes;
- (id)reasons;
- (void)setAbGroupIdentifier:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (id)toSearchResult;

@end