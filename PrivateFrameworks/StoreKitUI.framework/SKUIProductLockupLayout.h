/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductLockupLayout : NSObject {
    long long  _bottomLeftLayoutStyle;
    NSMutableArray * _bottomLeftViewElements;
    NSMutableArray * _bottomRightViewElements;
    SKUIViewElementLayoutContext * _layoutContext;
    NSMutableArray * _middleLeftViewElements;
    SKUIViewElement * _productImageElement;
    NSMutableArray * _topLeftViewElements;
    NSMutableArray * _topRightViewElements;
}

@property (nonatomic, readonly) long long bottomLeftLayoutStyle;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_sizeForSegmentedControl:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })_sizeForVerticalViewElements:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })_sizeForViewElement:(id)arg1 width:(double)arg2;
- (long long)bottomLeftLayoutStyle;
- (double)bottomPaddingForViewElement:(id)arg1;
- (void)enumerateViewElementsForWidth:(double)arg1 usingBlock:(id /* block */)arg2;
- (bool)hasBottomRightElementWithRightAlignment;
- (id)initWithLockup:(id)arg1 width:(double)arg2 context:(id)arg3;
- (struct SKUIProductLockupLayoutSizing { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; })layoutWidthsForWidth:(double)arg1;
- (double)metadataWidthForWidth:(double)arg1;
- (struct SKUIProductLockupLayoutSizing { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; })sizingToFitWidth:(double)arg1;
- (double)topPaddingForViewElement:(id)arg1;
- (id)viewElementsForSection:(long long)arg1;

@end