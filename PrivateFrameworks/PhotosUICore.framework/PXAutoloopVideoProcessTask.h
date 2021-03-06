/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAutoloopVideoProcessTask : PXAutoloopVideoTask {
    PXAutoloopVideoRecipe * _outputRecipe;
    bool  _shouldExtractGateFeatures;
}

@property (retain) PXAutoloopVideoRecipe *outputRecipe;
@property (nonatomic) bool shouldExtractGateFeatures;

- (void).cxx_destruct;
- (id)outputRecipe;
- (void)performTaskWithInput:(id)arg1;
- (void)setOutputRecipe:(id)arg1;
- (void)setShouldExtractGateFeatures:(bool)arg1;
- (bool)shouldExtractGateFeatures;

@end
