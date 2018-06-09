/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableTextSource : SXTextSource {
    unsigned long long  _defaultTextAlignment;
    SXFormattedText * _formattedText;
    struct { 
        unsigned long long rowIndex; 
        unsigned long long columnIndex; 
    }  _indexPath;
}

@property (nonatomic) unsigned long long defaultTextAlignment;
@property (nonatomic, readonly) SXFormattedText *formattedText;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; } indexPath;

- (void).cxx_destruct;
- (void)applyStylingOnTextTangierStorage:(id)arg1;
- (unsigned long long)defaultTextAlignment;
- (id)formattedText;
- (struct { unsigned long long x1; unsigned long long x2; })indexPath;
- (id)initWithFormattedText:(id)arg1 indexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2 actionProvider:(id)arg3 dataSource:(id)arg4;
- (void)setDefaultTextAlignment:(unsigned long long)arg1;

@end