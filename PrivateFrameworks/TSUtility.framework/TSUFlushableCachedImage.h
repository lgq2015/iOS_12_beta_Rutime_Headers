/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUFlushableCachedImage : TSUFlushableObject {
    id  _delegate;
    SEL  _delegateCreateImageSelector;
    struct CGImage { } * _image;
}

- (void)dealloc;
- (bool)hasFlushableContent;
- (id)initWithDelegate:(id)arg1 createImageSelector:(SEL)arg2;
- (struct CGImage { }*)newImage;
- (void)unload;

@end
