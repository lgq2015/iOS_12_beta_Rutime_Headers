/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

@interface NUGLLayer : CAEAGLLayer {
    NUGLRenderbuffer * _buffer;
    NUGLContext * _context;
}

- (void).cxx_destruct;
- (void)_drawInBuffer:(id)arg1 context:(id)arg2;
- (void)display;
- (void)draw:(id)arg1;
- (id)init;
- (void)reset:(id)arg1;

@end
