/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPStreamingVideoMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    NSString * _MIMEType;
    bool  _cancelled;
    LPLinkMetadata * _metadata;
    LPVideoResolver * _resolver;
    AVAssetImageGenerator * _videoImageGenerator;
}

+ (id)specializedMetadataProviderForResourceWithMIMEType:(id)arg1 URL:(id)arg2;

- (void).cxx_destruct;
- (void)cancel;
- (void)done;
- (void)fail;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2;
- (void)start;

@end