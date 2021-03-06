/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASamplePowerstatsThreadData : PASampleThreadData {
    unsigned int  _powerstatsFlags;
}

- (bool)hasValidPowerstatsFlags;
- (id)initWithStackshotThread:(id)arg1 andLeafUserFrame:(id)arg2;
- (unsigned int)powerstatsFlags;

@end
