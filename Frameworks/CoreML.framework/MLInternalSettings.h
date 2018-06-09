/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLInternalSettings : NSObject {
    bool  _isNeuralNetworkGPUPathForbidden;
    bool  _restrictNeuralNetworksToUseCPUOnly;
}

@property (nonatomic, readonly) bool isNeuralNetworkGPUPathForbidden;
@property bool restrictNeuralNetworksToUseCPUOnly;

+ (id)globalSettings;

- (id)init;
- (bool)isNeuralNetworkGPUPathForbidden;
- (bool)restrictNeuralNetworksToUseCPUOnly;
- (void)setRestrictNeuralNetworksToUseCPUOnly:(bool)arg1;

@end