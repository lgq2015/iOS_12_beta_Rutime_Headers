/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICFontCacheKey : NSObject <NSCopying> {
    UIFontDescriptor * _fontDescriptor;
    NSString * _fontName;
    double  _pointSize;
    int  _traits;
}

@property (nonatomic, readonly) UIFontDescriptor *fontDescriptor;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) int traits;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fontDescriptor;
- (id)fontName;
- (unsigned long long)hash;
- (id)initWithFont:(struct UIFont { Class x1; }*)arg1;
- (bool)isEqual:(id)arg1;
- (double)pointSize;
- (int)traits;

@end
