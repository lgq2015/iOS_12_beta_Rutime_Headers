/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDPlayableContentTableViewCell : UITableViewCell {
    UIActivityIndicatorView * _activityIndicatorView;
    UIImage * _artwork;
    UIImageView * _artworkImageView;
    bool  _container;
    bool  _currentlyPlaying;
    UIImageView * _explicitItemView;
    double  _playbackProgress;
    UIView * _playbackProgressView;
    bool  _shouldShowPlaybackProgress;
    bool  _showActivityIndicator;
    bool  _showCloud;
    bool  _showExplicit;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, retain) UIImage *artwork;
@property (nonatomic, retain) UIImageView *artworkImageView;
@property (nonatomic) bool container;
@property (nonatomic) bool currentlyPlaying;
@property (nonatomic, retain) UIImageView *explicitItemView;
@property (nonatomic) double playbackProgress;
@property (nonatomic, retain) UIView *playbackProgressView;
@property (nonatomic) bool shouldShowPlaybackProgress;
@property (nonatomic) bool showActivityIndicator;
@property (getter=isShowCloud, nonatomic) bool showCloud;
@property (getter=isShowExplicit, nonatomic) bool showExplicit;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_setCloudAccessoryView:(bool)arg1;
- (id)activityIndicatorView;
- (id)artwork;
- (id)artworkImageView;
- (bool)container;
- (bool)currentlyPlaying;
- (id)explicitItemView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isShowCloud;
- (bool)isShowExplicit;
- (void)layoutSubviews;
- (double)playbackProgress;
- (id)playbackProgressView;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setArtworkImageView:(id)arg1;
- (void)setContainer:(bool)arg1;
- (void)setCurrentlyPlaying:(bool)arg1;
- (void)setExplicitItemView:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setPlaybackProgress:(double)arg1;
- (void)setPlaybackProgressView:(id)arg1;
- (void)setShouldShowPlaybackProgress:(bool)arg1;
- (void)setShowActivityIndicator:(bool)arg1;
- (void)setShowCloud:(bool)arg1;
- (void)setShowExplicit:(bool)arg1;
- (bool)shouldShowPlaybackProgress;
- (bool)showActivityIndicator;

@end