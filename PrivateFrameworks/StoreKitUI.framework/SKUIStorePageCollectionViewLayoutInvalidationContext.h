/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStorePageCollectionViewLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {
    bool  _invalidateItemPinningLayoutInformation;
}

@property (nonatomic) bool invalidateItemPinningLayoutInformation;

- (bool)invalidateItemPinningLayoutInformation;
- (void)setInvalidateItemPinningLayoutInformation:(bool)arg1;

@end
