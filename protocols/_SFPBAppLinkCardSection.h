/* made by EzioChiu.
 */

@protocol _SFPBAppLinkCardSection <NSObject>

@required

- (void)addAppLinks:(_SFPBAppLink *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (NSArray *)appLinks;
- (_SFPBAppLink *)appLinksAtIndex:(unsigned long long)arg1;
- (unsigned long long)appLinksCount;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearAppLinks;
- (void)clearPunchoutOptions;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setAppLinks:(NSArray *)arg1;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;
- (NSString *)type;

@end