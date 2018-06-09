/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailNotesCell : EKEventDetailCell {
    bool  _isTruncatingNotes;
    <EKEventDetailNotesCellDelegate> * _noteDelegate;
    UILabel * _notesTitleView;
    UITextView * _notesView;
}

@property (nonatomic, readonly) bool isTruncatingNotes;
@property (nonatomic) <EKEventDetailNotesCellDelegate> *noteDelegate;

- (void).cxx_destruct;
- (double)_layoutForWidth:(double)arg1;
- (id)_notesTitleView;
- (id)_notesView;
- (bool)isTruncatingNotes;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (id)noteDelegate;
- (void)setIsTruncatingNotes:(bool)arg1;
- (void)setNoteDelegate:(id)arg1;
- (bool)update;

@end