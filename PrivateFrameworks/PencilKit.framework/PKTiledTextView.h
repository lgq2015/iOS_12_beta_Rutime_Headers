/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKTiledTextView : PKTiledView {
    PKAttachmentView * _standInEndAttachmentView;
    UIButton * _tapToRadarButton;
}

@property (nonatomic, retain) PKAttachmentView *standInEndAttachmentView;
@property (nonatomic, retain) UIButton *tapToRadarButton;

- (void).cxx_destruct;
- (void)_layoutSubviews;
- (void)_setupTapToRadarButton;
- (void)_tapToRadarButtonTapped:(id)arg1;
- (void)appendPath:(id)arg1 attachmentString:(id)arg2;
- (bool)canAddStroke;
- (void)canvasViewDidEndStroke:(id)arg1;
- (void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfEndAttachment;
- (bool)hasEndAttachment;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initInScrollView:(id)arg1;
- (bool)insertAttachmentIfInBlankSpace:(struct CGPoint { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (id)saveTempData:(id)arg1 name:(id)arg2;
- (void)setLinedPaper:(id)arg1;
- (void)setStandInEndAttachmentView:(id)arg1;
- (void)setTapToRadarButton:(id)arg1;
- (id)standInAttachmentView;
- (id)standInEndAttachmentView;
- (id)tapToRadarButton;
- (void)textDidBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)updateEndAttachment;

@end