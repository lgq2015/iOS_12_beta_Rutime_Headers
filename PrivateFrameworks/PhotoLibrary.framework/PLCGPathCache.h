/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCGPathCache : NSObject {
    struct __CFDictionary { } * _pathCache;
}

+ (id)sharedPathCache;

- (void)dealloc;
- (id)init;
- (struct CGPath { }*)pathForKey:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPath:(struct CGPath { }*)arg1 forKey:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end