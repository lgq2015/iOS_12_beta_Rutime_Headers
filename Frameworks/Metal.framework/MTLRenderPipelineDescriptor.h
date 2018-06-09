/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying> {
    unsigned long long  _inputPrimitiveTopology;
}

@property (getter=isAlphaToCoverageEnabled, nonatomic) bool alphaToCoverageEnabled;
@property (getter=isAlphaToOneEnabled, nonatomic) bool alphaToOneEnabled;
@property (readonly) MTLRenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) unsigned long long depthAttachmentPixelFormat;
@property (readonly) MTLPipelineBufferDescriptorArray *fragmentBuffers;
@property (nonatomic, retain) <MTLFunction> *fragmentFunction;
@property (nonatomic) unsigned long long inputPrimitiveTopology;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long maxTessellationFactor;
@property (nonatomic) unsigned long long rasterSampleCount;
@property (getter=isRasterizationEnabled, nonatomic) bool rasterizationEnabled;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) unsigned long long stencilAttachmentPixelFormat;
@property (nonatomic) bool supportIndirectCommandBuffers;
@property (nonatomic) unsigned long long tessellationControlPointIndexType;
@property (nonatomic) unsigned long long tessellationFactorFormat;
@property (getter=isTessellationFactorScaleEnabled, nonatomic) bool tessellationFactorScaleEnabled;
@property (nonatomic) unsigned long long tessellationFactorStepFunction;
@property (nonatomic) unsigned long long tessellationOutputWindingOrder;
@property (nonatomic) unsigned long long tessellationPartitionMode;
@property (readonly) MTLPipelineBufferDescriptorArray *vertexBuffers;
@property (nonatomic, copy) MTLVertexDescriptor *vertexDescriptor;
@property (nonatomic, retain) <MTLFunction> *vertexFunction;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)inputPrimitiveTopology;
- (void)reset;
- (void)setInputPrimitiveTopology:(unsigned long long)arg1;

@end