/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLRegressorResult : NSObject {
    <MLFeatureProvider> * _additionalFeatures;
    MLMultiArray * _predictedValue;
}

@property (readonly) <MLFeatureProvider> *additionalFeatures;
@property (readonly) MLMultiArray *predictedValue;

+ (id)resultWithValue:(id)arg1;
+ (id)resultWithValue:(id)arg1 additionalFeatures:(id)arg2;

- (void).cxx_destruct;
- (id)additionalFeatures;
- (id)asFeatureDictionaryWithPredictedValueDescription:(id)arg1;
- (id)initWithValue:(id)arg1 additionalFeatures:(id)arg2;
- (id)predictedValue;

@end