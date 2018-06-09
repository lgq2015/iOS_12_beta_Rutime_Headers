/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUImageScrollView : UIScrollView

@property (nonatomic) <MUImageScrollViewDelegate> *delegate;

- (void)_centerContentIfNecessaryAdjustingContentOffset:(bool)arg1;
- (void)centerContentIgnoringInsets;

@end