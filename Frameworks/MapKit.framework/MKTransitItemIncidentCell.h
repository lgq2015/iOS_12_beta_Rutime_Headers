/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitItemIncidentCell : MKCustomSeparatorTableViewCell {
    MKTransitIncidentItemCellBackgroundView * _backgroundView;
    NSLayoutConstraint * _bottomToBackgroundConstraint;
    NSLayoutConstraint * _bottomToIconImageConstraint;
    NSLayoutConstraint * _bottomToSummaryLabelConstraint;
    NSLayoutConstraint * _bottomToTitleLabelConstraint;
    NSLayoutConstraint * _bottomToUpdatedLabelConstraint;
    UIImageView * _incidentIconImageView;
    bool  _incidentIsBlocking;
    _MKUILabel * _lastUpdatedLabel;
    NSLayoutConstraint * _lastUpdatedToSummaryConstraint;
    UIButton * _moreDetailsButton;
    bool  _padBottom;
    bool  _showMoreDetailsButton;
    _MKUILabel * _summaryLabel;
    NSLayoutConstraint * _summaryToTitleConstraint;
    _MKUILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelToTopConstraint;
    NSLayoutConstraint * _titleToButtonConstraint;
    NSLayoutConstraint * _titleToTrailingConstraint;
}

@property (nonatomic, readonly) UIButton *moreDetailsButton;
@property (nonatomic) bool padBottom;
@property (nonatomic) long long position;
@property (getter=isShowingMoreDetailsButton, nonatomic) bool showMoreDetailsButton;

- (void).cxx_destruct;
- (id)_blockingImage;
- (void)_contentSizeCategoryDidChange;
- (id)_nonBlockingImage;
- (void)_updateBottomConstraints;
- (void)_updateConstraintValues;
- (void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(bool)arg3 inSiri:(bool)arg4;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isShowingMoreDetailsButton;
- (id)moreDetailsButton;
- (bool)padBottom;
- (long long)position;
- (void)setLeadingSeparatorInset:(double)arg1;
- (void)setPadBottom:(bool)arg1;
- (void)setPosition:(long long)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setShowMoreDetailsButton:(bool)arg1;
- (void)setTrailingSeparatorInset:(double)arg1;

@end