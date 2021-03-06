/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGadgetSpec : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _accessoryViewInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _interItemSpacing;
    double  _layoutReferenceWidth;
    long long  _layoutSizeClass;
    long long  _scrollDirection;
    bool  _shouldInsetAllContent;
}

@property (nonatomic, readonly) UIImage *accessoryImage;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } accessoryViewInset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) double interItemSpacing;
@property (nonatomic, readonly) long long layoutSizeClass;
@property (nonatomic, readonly) long long scrollDirection;
@property (nonatomic, readonly) bool shouldInsetAllContent;

+ (void)initialize;

- (id)accessoryImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })accessoryViewInset;
- (double)columnSpacingForColumnSpan:(long long)arg1;
- (double)columnWidthForColumnSpan:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)initWithTraitCollection:(id)arg1 scrollDirection:(long long)arg2;
- (double)interItemSpacing;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGadgetSpec:(id)arg1;
- (long long)layoutSizeClass;
- (long long)scrollDirection;
- (bool)shouldInsetAllContent;

@end
