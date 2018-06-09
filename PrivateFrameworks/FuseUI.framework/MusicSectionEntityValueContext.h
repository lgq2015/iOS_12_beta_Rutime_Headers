/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSectionEntityValueContext : MusicEntityValueContext {
    NSString * _localizedTitle;
    bool  _wantsLocalizedTitle;
}

@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) bool wantsLocalizedTitle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)localizedTitle;
- (void)resetOutputValues;
- (void)setLocalizedTitle:(id)arg1;
- (void)setWantsLocalizedTitle:(bool)arg1;
- (bool)wantsLocalizedTitle;

@end