/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLCountersCommandBuffer : MTLToolsCommandBuffer {
    MTLCountersTraceCommandBuffer * _traceBuffer;
}

@property (nonatomic, readonly) MTLCountersTraceCommandBuffer *traceBuffer;

- (id)blitCommandEncoder;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id)computeCommandEncoderWithParallelExecution;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledComputeCommandEncoderWithParallelExecutionWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (id)traceBuffer;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
