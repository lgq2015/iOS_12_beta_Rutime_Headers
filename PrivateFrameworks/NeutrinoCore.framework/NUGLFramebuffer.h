/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLFramebuffer : NUGLObject {
    NSMutableDictionary * _attachments;
}

- (void).cxx_destruct;
- (void)attach:(id)arg1 to:(unsigned int)arg2;
- (void)bind:(unsigned int)arg1 context:(id)arg2;
- (void)delete;
- (void)detach:(id)arg1 from:(unsigned int)arg2;
- (void)generate:(id)arg1;
- (id)init;
- (void)read:(id)arg1 block:(id /* block */)arg2;
- (void)removeAllAttachments;
- (void)unbind:(unsigned int)arg1 context:(id)arg2;
- (void)useWithTarget:(unsigned int)arg1 context:(id)arg2 block:(id /* block */)arg3;
- (void)write:(id)arg1 block:(id /* block */)arg2;

@end