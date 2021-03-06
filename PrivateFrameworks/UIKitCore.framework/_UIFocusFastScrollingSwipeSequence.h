/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusFastScrollingSwipeSequence : NSObject {
    long long  _consecutiveSwipeCount;
    unsigned long long  _headingLock;
    UIScrollView * _scrollView;
}

@property (nonatomic) long long consecutiveSwipeCount;
@property (nonatomic) unsigned long long headingLock;
@property (nonatomic) UIScrollView *scrollView;

- (void).cxx_destruct;
- (long long)consecutiveSwipeCount;
- (unsigned long long)headingLock;
- (id)scrollView;
- (void)setConsecutiveSwipeCount:(long long)arg1;
- (void)setHeadingLock:(unsigned long long)arg1;
- (void)setScrollView:(id)arg1;

@end
