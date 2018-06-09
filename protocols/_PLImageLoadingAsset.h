/* made by EzioChiu.
 */

@protocol _PLImageLoadingAsset <NSObject>

@required

- (double)aspectRatio;
- (NSURL *)assetsLibraryURL;
- (long long)cloudPlaceholderKind;
- (long long)cloudSharedAssetPlaceholderKind;
- (bool)complete;
- (NSString *)debugFilename;
- (double)duration;
- (unsigned long long)effectiveThumbnailIndex;
- (NSURL *)fileURLForFullsizeRenderImage;
- (NSURL *)fileURLForFullsizeRenderVideo;
- (void)generateLargeThumbnailFileIfNecessary;
- (bool)hasAdjustments;
- (bool)hasLegacyAdjustments;
- (struct CGSize { double x1; double x2; })imageSize;
- (bool)isCloudPhotoLibraryAsset;
- (bool)isCloudPlaceholder;
- (bool)isCloudSharedAsset;
- (bool)isInFlight;
- (bool)isJPEG;
- (bool)isLoopingVideo;
- (bool)isOriginalSRGB;
- (bool)isPartOfBurst;
- (bool)isPrimaryImageFormat;
- (bool)isRAW;
- (bool)isStreamedVideo;
- (bool)isTimelapsePlaceholder;
- (bool)isVideo;
- (short)kind;
- (short)kindSubtype;
- (unsigned long long)localResourcesState;
- (PLManagedAsset *)managedAssetForPhotoLibrary:(PLPhotoLibrary *)arg1;
- (NSManagedObjectID *)objectID;
- (int)orientation;
- (NSString *)originalFileName;
- (long long)originalImageOrientation;
- (struct CGSize { double x1; double x2; })originalImageSize;
- (NSString *)pathForAdjustmentDataFile;
- (NSString *)pathForAdjustmentFile;
- (NSString *)pathForFullsizeRenderImageFile;
- (NSString *)pathForLargeThumbnailFile;
- (NSString *)pathForMediumThumbnailFile;
- (NSString *)pathForNonAdjustedFullsizeImageFile;
- (NSString *)pathForOriginalFile;
- (NSString *)pathForPenultimateFullsizeRenderImageFile;
- (NSString *)pathForPenultimateFullsizeRenderVideoFile;
- (NSString *)pathForSRGBLargeThumbnailFile;
- (NSString *)pathForSubstandardFullsizeRenderImageFile;
- (NSString *)pathForVideoPreviewFile;
- (PLPhotoLibrary *)pl_photoLibrary;
- (short)savedAssetType;
- (NSString *)thumbnailIdentifier;
- (NSString *)uniformTypeIdentifier;
- (NSString *)uuid;

@end