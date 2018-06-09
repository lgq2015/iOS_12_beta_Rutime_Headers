/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentTemporalSnapshot : NSObject {
    double  __distance;
    NSMutableSet * __nodes;
    double  __range;
}

@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) NSMutableSet *nodes;
@property (nonatomic, readonly) double range;

- (void)dealloc;
- (double)distance;
- (id)initWithNodes:(id)arg1 inRange:(double)arg2;
- (id)nodes;
- (double)range;

@end