/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistentHistoryTransactionModifiers : NSObject {
    int  _changeSource;
    bool  _syncChangeMarker;
}

@property (nonatomic) int changeSource;
@property (nonatomic, readonly) bool isSyncable;
@property (nonatomic) bool syncChangeMarker;

+ (id)transactionAuthorFromChangeSource:(int)arg1 syncChangeMarker:(bool)arg2;
+ (id)transactionModifiersFromTransactionAuthor:(id)arg1;

- (id)_descriptionWithBuilder:(id)arg1;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (int)changeSource;
- (id)description;
- (id)encodeAsTransactionAuthor;
- (id)init;
- (id)initWithChangeSource:(int)arg1 syncChangeMarker:(bool)arg2;
- (bool)isSyncable;
- (void)setChangeSource:(int)arg1;
- (void)setSyncChangeMarker:(bool)arg1;
- (bool)syncChangeMarker;
- (bool)updateFromTransactionAuthor:(id)arg1;

@end