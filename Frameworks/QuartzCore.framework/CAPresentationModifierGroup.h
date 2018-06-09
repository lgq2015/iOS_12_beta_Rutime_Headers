/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAPresentationModifierGroup : NSObject {
    unsigned long long  _capacity;
    unsigned long long  _count;
    void * _shmem;
}

@property (readonly) unsigned long long capacity;
@property (readonly) unsigned long long count;

+ (id)groupWithCapacity:(unsigned long long)arg1;

- (unsigned long long)capacity;
- (unsigned long long)count;
- (void)dealloc;
- (void)flush;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)markWritten:(unsigned long long)arg1;
- (unsigned long long)nextSlot;
- (void)resetBitMask;
- (struct Shmem { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned long long x3; void *x4; unsigned int x5; struct Atomic { struct { int x_1_2_1; } x_6_1_1; } x6; int (*x7)(); void *x8; }*)shmem;

@end