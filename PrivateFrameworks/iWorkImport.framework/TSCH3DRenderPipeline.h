/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRenderPipeline : NSObject {
    TSCH3DRenderProcessor * mProcessor;
    TSCH3DSession * mSession;
}

@property (nonatomic, readonly) TSCH3DGLContext *context;
@property (nonatomic, retain) TSCH3DRenderProcessor *processor;
@property (nonatomic, readonly) TSCH3DSession *session;

+ (id)clipRectForTargetSize:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 intermediateSize:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
+ (id)pipelineWithProcessor:(id)arg1 session:(id)arg2;

- (id)context;
- (void)dealloc;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;
- (id)processor;
- (id)session;
- (void)setProcessor:(id)arg1;

@end