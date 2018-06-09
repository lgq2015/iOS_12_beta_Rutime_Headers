/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
 */

@interface FKPerson : NSObject <NSCopying, NSSecureCoding> {
    NSString * _abDatabaseUID;
    NSString * _abRecordGUID;
    int  _abRecordID;
    NSSet * _allValues;
    NSNumber * _emailAddressCount;
    bool  _hasUnreadMessages;
    NSString * _initials;
    NSMutableDictionary * _metadata;
    NSString * _name;
    bool  _needsSave;
    NSNumber * _phoneNumberCount;
    NSString * _preferredReplyAs;
    NSString * _primaryDestination;
}

@property (nonatomic, readonly) bool hasUnreadMessages;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic) bool needsSave;
@property (nonatomic, retain) NSString *preferredReplyAs;

+ (id)_allEmailValuesForRecord:(void*)arg1;
+ (id)_allEmailValuesInSet:(id)arg1;
+ (id)_allPhoneValuesForRecord:(void*)arg1;
+ (id)_allPhoneValuesInSet:(id)arg1;
+ (int)addValue:(void*)arg1 withLabel:(struct __CFString { }*)arg2 toPerson:(void*)arg3 property:(int)arg4;
+ (id)allValuesForPerson:(void*)arg1;
+ (id)preferredNameForPerson:(void*)arg1;
+ (id)sharedMetadataQueue;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)_allValuesMatchScore:(id)arg1;
- (void*)_bestRecordMatchFromDictionary:(id)arg1 addressBook:(void*)arg2;
- (id)_metadataDictionary;
- (void)_postChangeNotification;
- (void)_reconcile:(void*)arg1 canPostChangeNotification:(bool)arg2 shouldLogUpdates:(bool)arg3;
- (id)_recordMatchDictionaryFromCFArray:(struct __CFArray { }*)arg1 followLinks:(bool)arg2 addressBook:(void*)arg3;
- (void)_setABRecordGUID:(id)arg1;
- (bool)_updateFromDictionaryRepresentation:(id)arg1 shouldLogUpdates:(bool)arg2;
- (id)abDatabaseUID;
- (id)abRecordGUID;
- (void)addMetadataEntriesFromDictionary:(id)arg1;
- (id)allValues;
- (unsigned long long)allValuesCount;
- (void*)copyABPersonWithAddressBook:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasName;
- (bool)hasUnreadMessages;
- (id)init;
- (id)initWithABRecordGUID:(id)arg1 addressBook:(void*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinations:(id)arg1 addressBook:(void*)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2;
- (id)initWithFavorite:(id)arg1 addressBook:(void*)arg2;
- (id)initials;
- (bool)isEqualToDictionaryRepresentation:(id)arg1;
- (bool)isLikePerson:(id)arg1;
- (id)metadata;
- (id)metadataValueForKey:(id)arg1;
- (bool)needsSave;
- (id)preferredReplyAs;
- (id)primaryDestination;
- (void)refreshWithAddressBook:(void*)arg1;
- (void)removeAllMetadataValues;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setNeedsSave:(bool)arg1;
- (void)setPreferredReplyAs:(id)arg1;
- (bool)updateFromDictionaryRepresentation:(id)arg1;

@end