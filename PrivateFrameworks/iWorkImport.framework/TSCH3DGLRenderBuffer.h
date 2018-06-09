/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLRenderBuffer : NSObject <TSCH3DGLBindable> {
    unsigned int  mBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)bindInSession:(id)arg1;
- (void)deactivateInContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)destroyResourcesInContext:(id)arg1;
- (id)initWithGLBuffer:(unsigned int)arg1;
- (bool)valid;

@end