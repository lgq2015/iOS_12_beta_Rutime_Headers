/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILockupMetadataView : UIView {
    UILabel * _artistNameLabel;
    UILabel * _categoryLabel;
    SKUIClientContext * _clientContext;
    SKUIBadgeLabel * _editorialBadgeLabel;
    UILabel * _itemCountLabel;
    UILabel * _itemOfferLabel;
    long long  _numberOfUserRatings;
    UILabel * _releaseDateLabel;
    UIColor * _textColor;
    UIColor * _titleColor;
    UILabel * _titleLabel;
    float  _userRating;
    UIImageView * _userRatingImageView;
    UILabel * _userRatingLabel;
    unsigned long long  _visibleFields;
}

@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSString *categoryString;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, copy) NSString *editorialBadgeString;
@property (nonatomic, copy) NSString *itemCountString;
@property (nonatomic, copy) NSString *itemOfferString;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic, readonly) UIColor *primaryTextColor;
@property (nonatomic, copy) NSString *releaseDateString;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) float userRating;
@property (nonatomic) unsigned long long visibleFields;

+ (double)maximumHeightWithVisibleFields:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_decimalNumberFormatter;
- (id)_newDefaultLabel;
- (void)_reloadUserRatingViews;
- (id)artistName;
- (id)categoryString;
- (id)clientContext;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)editorialBadgeString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemCountString;
- (id)itemOfferString;
- (long long)numberOfUserRatings;
- (id)primaryTextColor;
- (id)releaseDateString;
- (void)setArtistName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCategoryString:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setEditorialBadgeString:(id)arg1;
- (void)setItemCountString:(id)arg1;
- (void)setItemOfferString:(id)arg1;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)setReleaseDateString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserRating:(float)arg1;
- (void)setVisibleFields:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (float)userRating;
- (unsigned long long)visibleFields;

@end