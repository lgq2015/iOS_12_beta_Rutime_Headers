/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFAssetAdjustments : NSObject <NSCopying> {
    NSDictionary * _propertyListDictionary;
}

@property (nonatomic, readonly) long long adjustmentBaseVersion;
@property (nonatomic, readonly) NSData *adjustmentData;
@property (nonatomic, readonly, copy) NSString *adjustmentFormatIdentifier;
@property (nonatomic, readonly, copy) NSString *adjustmentFormatVersion;
@property (nonatomic, readonly) unsigned int adjustmentRenderTypes;
@property (nonatomic, readonly, copy) NSString *editorBundleID;
@property (nonatomic, retain) NSDictionary *propertyListDictionary;

// Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats

+ (id)fingerPrintForData:(id)arg1 error:(id*)arg2;
+ (id)fingerprintWithAssetAdjustmentFingerprintData:(id)arg1;

- (void).cxx_destruct;
- (long long)adjustmentBaseVersion;
- (id)adjustmentData;
- (id)adjustmentFormatIdentifier;
- (id)adjustmentFormatVersion;
- (unsigned int)adjustmentRenderTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)editorBundleID;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 renderTypes:(unsigned int)arg6;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)propertyListDictionary;
- (void)setPropertyListDictionary:(id)arg1;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)phAdjustmentData;

@end