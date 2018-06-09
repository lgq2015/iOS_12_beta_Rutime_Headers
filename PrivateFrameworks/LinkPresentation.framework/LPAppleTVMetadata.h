/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPAppleTVMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor> {
    LPImage * _artwork;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) LPImage *artwork;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artwork;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end