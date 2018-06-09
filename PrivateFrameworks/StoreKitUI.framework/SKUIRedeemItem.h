/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemItem : SKUIItem <NSSecureCoding> {
    <SKUIArtworkProviding> * _artworks;
}

@property (nonatomic, retain) <SKUIArtworkProviding> *artworks;
@property (nonatomic) long long itemIdentifier;
@property (nonatomic) long long itemKind;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ageBandRange;
- (id)artworkURLForSize:(long long)arg1;
- (id)artworks;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)largestArtworkURL;
- (void)setArtworks:(id)arg1;

@end