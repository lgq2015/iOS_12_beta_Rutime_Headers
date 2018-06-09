/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBDictationDisplayView : UIKBKeyView {
    UIDictationView * _dictationView;
}

@property (nonatomic, retain) UIDictationView *dictationView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dictationView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)prepareForDisplay;
- (void)removeFromSuperview;
- (void)setDictationView:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)updateDictationColor;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;

@end