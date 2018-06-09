/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchBarAppearanceStorage : NSObject {
    NSMutableDictionary * iconImages;
    UIImage * scopeBarBackgroundImage;
    NSMutableDictionary * searchFieldBackgroundImages;
    NSValue * searchFieldPositionAdjustment;
    UIImage * separatorImage;
}

@property (nonatomic, retain) UIImage *scopeBarBackgroundImage;
@property (nonatomic, retain) NSValue *searchFieldPositionAdjustment;
@property (nonatomic, retain) UIImage *separatorImage;

- (void).cxx_destruct;
- (id)imageForIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)scopeBarBackgroundImage;
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;
- (id)searchFieldPositionAdjustment;
- (id)separatorImage;
- (void)setImage:(id)arg1 forIcon:(long long)arg2 state:(unsigned long long)arg3;
- (void)setScopeBarBackgroundImage:(id)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSearchFieldPositionAdjustment:(id)arg1;
- (void)setSeparatorImage:(id)arg1;

@end