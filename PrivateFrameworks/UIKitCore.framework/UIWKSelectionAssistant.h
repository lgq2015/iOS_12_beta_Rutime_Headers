/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWKSelectionAssistant : UIWebSelectionAssistant {
    _UITextServiceSession * _definitionSession;
    _UITextServiceSession * _learnSession;
    _UITextServiceSession * _lookupSession;
    _UITextServiceSession * _shareSession;
}

@property (nonatomic, readonly) UILongPressGestureRecognizer *selectionLongPressRecognizer;

- (id)asyncSelectionView;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)initializeSelectionView;
- (id)interactionView;
- (void)lookup:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)lookup:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)selectionChanged;
- (void)selectionChangedWithGestureAt:(struct CGPoint { double x1; double x2; })arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)selectionChangedWithGestureAt:(struct CGPoint { double x1; double x2; })arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4;
- (void)selectionChangedWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionFrame;
- (id)selectionLongPressRecognizer;
- (bool)shouldAllowSelectionGestures:(bool)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(bool)arg3;
- (bool)shouldHandleSingleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)showDictionaryFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)showSelectionCommands;
- (void)showShareSheetFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end