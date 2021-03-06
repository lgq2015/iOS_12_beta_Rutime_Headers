/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageExportFormatGeneric : NUImageExportFormat {
    NSString * _fileType;
    NSDictionary * _options;
    int  _renderFormat;
}

@property (copy) NSString *fileType;
@property (copy) NSDictionary *options;
@property int renderFormat;

- (void).cxx_destruct;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fileType;
- (id)initWithFileType:(id)arg1;
- (id)options;
- (int)renderFormat;
- (void)setFileType:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setRenderFormat:(int)arg1;

@end
