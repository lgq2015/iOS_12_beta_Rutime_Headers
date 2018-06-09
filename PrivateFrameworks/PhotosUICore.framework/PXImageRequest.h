/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXImageRequest : NSObject {
    <PXDisplayAsset> * _asset;
    bool  _canceled;
    NSError * _error;
    bool  _gotFullQualityImage;
    UIImage * _image;
    <PXUIImageProvider> * _mediaProvider;
    PHImageRequestOptions * _options;
    long long  _requestID;
    bool  _resultIsInCloud;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool gotFullQualityImage;
@property (nonatomic) UIImage *image;
@property (nonatomic, readonly) <PXUIImageProvider> *mediaProvider;
@property (nonatomic, readonly) PHImageRequestOptions *options;
@property (nonatomic) long long requestID;
@property (nonatomic) bool resultIsInCloud;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (id)asset;
- (void)cancel;
- (id)description;
- (id)error;
- (bool)gotFullQualityImage;
- (id)image;
- (id)initWithMediaProvider:(id)arg1 asset:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 options:(id)arg4;
- (bool)isCanceled;
- (id)mediaProvider;
- (id)options;
- (void)performWithResultHandler:(id /* block */)arg1;
- (long long)requestID;
- (bool)resultIsInCloud;
- (void)setError:(id)arg1;
- (void)setGotFullQualityImage:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setRequestID:(long long)arg1;
- (void)setResultIsInCloud:(bool)arg1;
- (struct CGSize { double x1; double x2; })targetSize;

@end