/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMDocumentMapper : CMMapper <CMMapperRoot> {
    CMArchiveManager * mArchiver;
    NSString * mFileName;
    WDDocument * wDom;
}

@property (retain) NSString *fileName;

- (void).cxx_destruct;
- (id)archiver;
- (id)blipAtIndex:(unsigned int)arg1;
- (double)bottomMargin;
- (struct CGSize { double x1; double x2; })contentSizeForDevice;
- (void)dealloc;
- (int)defaultTabWidth;
- (id)documentTitle;
- (id)fileName;
- (bool)hasSessionBreakAtIndex:(unsigned long long)arg1;
- (double)headerMargin;
- (id)initWithWDom:(id)arg1 archiver:(id)arg2;
- (double)leftMargin;
- (void)mapDefaultCssStylesAt:(id)arg1;
- (void)mapWithState:(id)arg1;
- (struct CGSize { double x1; double x2; })pageSizeForDevice;
- (double)rightMargin;
- (void)setFileName:(id)arg1;
- (id)styleMatrix;
- (double)topMargin;

@end