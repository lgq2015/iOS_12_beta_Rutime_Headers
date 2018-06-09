/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUOverlayConfiguration : NSObject {
    NSRegularExpression * _bagKeyPattern;
    long long  _cornerRadius;
    bool  _shouldShowNavigationBar;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _transitionName;
    NSRegularExpression * _urlPattern;
}

@property (nonatomic, readonly) long long cornerRadius;
@property (nonatomic, readonly) bool shouldShowNavigationBar;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) NSString *transitionName;

- (long long)cornerRadius;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)matchesURL:(id)arg1;
- (bool)matchesURLBagKey:(id)arg1;
- (bool)shouldShowNavigationBar;
- (struct CGSize { double x1; double x2; })size;
- (id)transitionName;

@end