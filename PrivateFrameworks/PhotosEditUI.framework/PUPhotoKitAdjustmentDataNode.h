/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoKitAdjustmentDataNode : PXRunNode {
    PHAdjustmentData * _adjustmentData;
    PHAsset * _asset;
    int  _requestID;
}

@property (nonatomic, readonly) PHAdjustmentData *adjustmentData;
@property (nonatomic, readonly) PHAsset *asset;

- (void).cxx_destruct;
- (void)_handleDidLoadAdjustmentData:(id)arg1 error:(id)arg2;
- (id)adjustmentData;
- (id)asset;
- (void)didCancel;
- (id)initWithAsset:(id)arg1;
- (void)run;

@end
