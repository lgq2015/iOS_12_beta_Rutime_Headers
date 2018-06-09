/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIPlatterSectionHeaderCollectionViewCell : SiriUIContentCollectionViewCell {
    SiriUIPlatterSectionHeaderView * _headerView;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;

+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 text:(id)arg2;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (id)text;
- (long long)textAlignment;

@end