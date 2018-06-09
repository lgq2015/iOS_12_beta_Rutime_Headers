/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAggdLogHelper : NSObject

+ (id)sharedInstance;

- (void)logAddValueForScalarKey:(long long)arg1 forKey:(struct __CFString { }*)arg2;
- (void)logPushValueForDistributionKey:(double)arg1 forKey:(struct __CFString { }*)arg2;
- (void)logSetValueForScalarKey:(long long)arg1 forKey:(struct __CFString { }*)arg2;

@end