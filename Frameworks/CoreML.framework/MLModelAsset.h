/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLModelAsset : NSObject {
    NSObject<MLModeling> * _asset;
    NSURL * _compiledURL;
    bool  _ranLoad;
}

@property (retain) NSObject<MLModeling> *asset;
@property (nonatomic, readonly) <MLClassifier> *classifier;
@property (readonly) NSURL *compiledURL;
@property (nonatomic, readonly) <MLModeling> *model;
@property bool ranLoad;
@property (nonatomic, readonly) <MLRegressor> *regressor;

+ (id)modelAssetWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;
+ (id)modelAssetWithSpecificationURL:(id)arg1 error:(id*)arg2;
+ (id)modelAssetWithURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)asset;
- (id)classifier;
- (id)classifierWithError:(id*)arg1;
- (id)compiledURL;
- (id)description;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)load:(id*)arg1;
- (id)model;
- (id)modelWithError:(id*)arg1;
- (bool)ranLoad;
- (id)regressor;
- (id)regressorWithError:(id*)arg1;
- (void)setAsset:(id)arg1;
- (void)setRanLoad:(bool)arg1;

@end
