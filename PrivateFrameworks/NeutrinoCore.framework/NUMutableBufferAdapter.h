/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUMutableBufferAdapter : NSObject <NUMutableBuffer> {
    NUPixelFormat * _format;
    void * _mutableBytes;
    long long  _rowBytes;
    struct { 
        long long width; 
        long long height; 
    }  _size;
    bool  _valid;
}

@property (nonatomic, readonly) const void*bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*mutableBytes;
@property (nonatomic, readonly) long long rowBytes;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (const void*)bytes;
- (const void*)bytesAtPoint:(struct { long long x1; long long x2; })arg1;
- (id)format;
- (id)init;
- (id)initWithMutableBuffer:(id)arg1;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2 rowBytes:(long long)arg3 mutableBytes:(void*)arg4;
- (void)invalidate;
- (void*)mutableBytes;
- (void*)mutableBytesAtPoint:(struct { long long x1; long long x2; })arg1;
- (id)newRenderDestination;
- (long long)rowBytes;
- (struct { long long x1; long long x2; })size;

@end