/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryTitleStyleCollectionViewCell : UICollectionViewCell {
    UILabel * _label;
    UIImageView * _posterImageView;
    MiroTitleSubtitleView * _titleSubtitleView;
}

@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UIImageView *posterImageView;
@property (nonatomic, retain) MiroTitleSubtitleView *titleSubtitleView;

- (void).cxx_destruct;
- (id)addPosterTextWithFontName:(id)arg1 titleText:(id)arg2 subtitleText:(id)arg3;
- (void)applyLayoutAttributes:(id)arg1;
- (id)label;
- (void)layoutSubviews;
- (id)posterImageView;
- (void)removePosterText;
- (void)setLabel:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setPosterImageView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitleSubtitleView:(id)arg1;
- (id)titleSubtitleView;

@end