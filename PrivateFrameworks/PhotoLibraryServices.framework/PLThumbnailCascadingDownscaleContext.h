/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbnailCascadingDownscaleContext : NSObject {
    struct _FigCascadeContext { } * _landscapeContext;
    NSLock * _lock;
    struct _FigCascadeContext { } * _portraitContext;
}

- (void)dealloc;
- (void)discardContexts;
- (bool)downscaleImageSurface:(struct __IOSurface { }*)arg1 destinationCount:(int)arg2 sizes:(struct { int x1; int x2; }*)arg3 cropModes:(int*)arg4 pixelFormat:(unsigned int)arg5 bytesPerRowAlignment:(int)arg6 destinationData:(id)arg7;
- (id)init;

@end