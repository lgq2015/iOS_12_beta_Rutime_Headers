/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStorageAppHeaderCell : PSTableCell {
    UIImageView * _appIconView;
    UIImageView * _cloudIconView;
    NSMutableArray * _constraints;
    UIImage * _icon;
    UILabel * _infoLabel;
    bool  _infoLabelEnabled;
    bool  _isDemoted;
    UILabel * _titleLabel;
    UILabel * _vendorLabel;
}

+ (id)specifierForAppBundleURL:(id)arg1;
+ (id)specifierForAppIdentifier:(id)arg1;
+ (id)specifierForAppProxy:(id)arg1;
+ (id)specifierForStorageApp:(id)arg1;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)updateConstraints;

@end
