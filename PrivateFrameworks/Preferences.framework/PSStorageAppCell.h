/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStorageAppCell : PSTableCell {
    NSMutableArray * _constraints;
    UIImage * _icon;
    UIImageView * _iconView;
    UILabel * _infoLabel;
    long long  _size;
    UILabel * _sizeLabel;
    UILabel * _titleLabel;
}

+ (id)specifierForAppBundleURL:(id)arg1;
+ (id)specifierForAppIdentifier:(id)arg1;
+ (id)specifierForAppProxy:(id)arg1;
+ (id)specifierForStorageApp:(id)arg1;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)lastSizeStringForAppID:(id)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setLastSizeString:(id)arg1 forAppID:(id)arg2;
- (void)updateConstraints;

@end
