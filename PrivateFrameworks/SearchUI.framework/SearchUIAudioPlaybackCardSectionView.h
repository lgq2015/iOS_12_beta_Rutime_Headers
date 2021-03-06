/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAudioPlaybackCardSectionView : SearchUICardSectionView <NUIContainerStackViewDelegate, SearchUICardSectionViewUpdatable, SearchUISelectableTextViewDelegate> {
    SKUIPlayButton * _playButton;
}

@property (retain) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIPlayButton *playButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_playButtonPressed:(id)arg1;
- (void)_updateStateFromCardSection:(id)arg1 animated:(bool)arg2;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (id)playButton;
- (void)selectableTextView:(id)arg1 presentViewController:(id)arg2;
- (void)setPlayButton:(id)arg1;
- (id)setupContentView;
- (void)updateStateFromCardSection:(id)arg1;

@end
