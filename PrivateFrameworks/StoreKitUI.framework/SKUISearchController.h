/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISearchController : UISearchController {
    NSMutableString * _paddingString;
    SKUISearchBar * _searchBar;
    UILabel * _suffixLabel;
}

@property (nonatomic) <SKUISearchControllerDelegate> *delegate;
@property (nonatomic, readonly) SKUISearchBar *searchBar;

- (void).cxx_destruct;
- (void)_setSuffix:(id)arg1;
- (id)searchBar;
- (void)setActive:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end