/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLConstantNoiseStrategy : NSObject <PMLNoiseStrategy> {
    float  _constantNoise;
    int  maxIterations;
}

@property (nonatomic) float constantNoise;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property int maxIterations;
@property (readonly) Class superclass;

- (void)addNoiseToDenseVector:(id)arg1;
- (void)addNoiseToFeatureMatrix:(id)arg1;
- (void)addNoiseToGradient:(id)arg1;
- (void)addNoiseToObjectiveFeatures:(id)arg1;
- (void)addNoiseToSparseMatrix:(id)arg1;
- (void)addNoiseToSparseVector:(id)arg1;
- (void)addNoiseToWeights:(id)arg1;
- (float)constantNoise;
- (id)init;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (int)maxIterations;
- (void)setConstantNoise:(float)arg1;
- (void)setMaxIterations:(int)arg1;
- (id)toPlistWithChunks:(id)arg1;

@end
