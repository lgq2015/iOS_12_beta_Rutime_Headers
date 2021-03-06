/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCSearchBar : UISearchBar {
    struct CGSize { 
        double width; 
        double height; 
    }  _customSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } customSize;

- (long long)_barMetricsForOrientation:(long long)arg1;
- (struct CGSize { double x1; double x2; })customSize;
- (void)setCustomSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
