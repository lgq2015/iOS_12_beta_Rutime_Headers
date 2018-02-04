/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PMCachedBitmapObject : NSObject {
    struct shared_ptr<PCBitmap> { struct PCBitmap {} *x1; struct __shared_weak_count {} *x2; } * _bitmap;
}

- (struct shared_ptr<PCBitmap> { struct PCBitmap {} *x1; struct __shared_weak_count {} *x2; })bitmap;
- (void)dealloc;
- (id)initWithBitmap:(const struct shared_ptr<PCBitmap> { struct PCBitmap {} *x1; struct __shared_weak_count {} *x2; }*)arg1;

@end
