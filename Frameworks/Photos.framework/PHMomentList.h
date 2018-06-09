/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMomentList : PHCollectionList {
    short  _generationType;
    short  _granularityLevel;
    NSDate * _representativeDate;
    NSData * _reverseLocationData;
    bool  _reverseLocationDataContainsLocation;
    bool  _reverseLocationDataIsValid;
    int  _sortIndex;
}

@property (nonatomic, readonly) short generationType;
@property (nonatomic, readonly) short granularityLevel;
@property (nonatomic, readonly) NSDate *representativeDate;
@property (nonatomic, readonly) int sortIndex;

+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (void)_decodeTitlesIfNeeded;
- (Class)changeRequestClass;
- (bool)collectionHasFixedOrder;
- (long long)collectionListType;
- (id)description;
- (short)generationType;
- (short)granularityLevel;
- (bool)hasLocalizedTitle;
- (bool)hasLocationInfo;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isMeaningful;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)representativeDate;
- (int)sortIndex;

@end