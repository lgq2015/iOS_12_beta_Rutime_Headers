/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection {
    MPStoreOfferContentRating * _collectionContentRating;
    bool  _hasHiddenRestrictedContent;
    MPMediaItemCollection * _localCollection;
    MPMediaQuery * _localItemsQuery;
    long long  _preferredStoreOfferVariant;
    MPStoreCompletionOfferResponse * _storeOfferResponse;
    NSArray * _unmergedStoreMediaItems;
}

@property (nonatomic, readonly) bool isCollectionOfferPresentable;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSArray *itemsByRemovingLocalItems;
@property (nonatomic, readonly) NSArray *itemsByRemovingStoreOffers;

+ (id)albumOrderedChildItemIDsForLookupCollectionPropertyValues:(id)arg1;
+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1;
+ (id)defaultPropertyValues;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 mediaProperty:(id)arg2;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1;
+ (long long)offerPassTypeForLookupCollectionPropertyValues:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_checkIsUsableOffer;
- (bool)_hasRestrictedContent;
- (void)_loadLocalCollection;
- (id)_lookupOfferDictionaries;
- (bool)_offeredItemAlreadyExists;
- (id)buyOfferForVariant:(long long)arg1;
- (id)copyByOverlayingMediaItemsWithItemsQuery:(id)arg1 preferredStoreOfferVariant:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOfItemsByRemovingLocalItems;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDownloadableStoreOfferItemsForVariant:(long long)arg1;
- (bool)hasPurchasableStoreOfferItemsForVariant:(long long)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2;
- (id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2 offerMediaItems:(id)arg3 localItemsQuery:(id)arg4;
- (bool)isCheaperToPurchaseIndividualItems;
- (bool)isCollectionOfferPresentable;
- (bool)isDownloadable;
- (bool)isEqual:(id)arg1;
- (id)itemsByRemovingLocalItems;
- (id)itemsByRemovingStoreOffers;
- (id)mediaLibrary;
- (unsigned long long)persistentID;
- (long long)preferredStoreOfferVariant;
- (id)title;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end