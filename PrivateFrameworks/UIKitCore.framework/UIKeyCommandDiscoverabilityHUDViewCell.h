/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyCommandDiscoverabilityHUDViewCell : UICollectionViewCell {
    NSArray * _constraints;
    bool  _constraintsForTwoColumns;
    UIKeyCommandDiscoverabilityHUDColumnView * _leftColumnView;
    UIKeyCommandDiscoverabilityHUDColumnView * _rightColumnView;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic) bool constraintsForTwoColumns;
@property (nonatomic, retain) UIKeyCommandDiscoverabilityHUDColumnView *leftColumnView;
@property (nonatomic, retain) UIKeyCommandDiscoverabilityHUDColumnView *rightColumnView;

- (void).cxx_destruct;
- (id)constraints;
- (bool)constraintsForTwoColumns;
- (id)leftColumnView;
- (id)rightColumnView;
- (void)setConstraints:(id)arg1;
- (void)setConstraintsForTwoColumns:(bool)arg1;
- (void)setLeftColumnView:(id)arg1;
- (void)setRightColumnView:(id)arg1;

@end
