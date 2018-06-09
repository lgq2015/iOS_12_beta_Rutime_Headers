/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUTileInfo : NSObject {
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _contentRect;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _frameRect;
    long long  _index;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property (nonatomic, readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } contentRect;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } frameRect;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;

+ (id)tileInfoWithIndex:(long long)arg1 size:(struct { long long x1; long long x2; })arg2 frameRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3 contentRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg4;

- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })contentRect;
- (id)debugDescription;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })frameRect;
- (long long)index;
- (struct { long long x1; long long x2; })size;
- (id)translatedAndClippedRegion:(id)arg1;

@end