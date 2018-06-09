/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNSOperatingSystemVersion : NSObject {
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _versionStruct;
}

@property struct { long long x1; long long x2; long long x3; } versionStruct;

+ (id)unknownVersion;
+ (id)versionWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3;

- (void)setVersionStruct:(struct { long long x1; long long x2; long long x3; })arg1;
- (struct { long long x1; long long x2; long long x3; })versionStruct;

@end