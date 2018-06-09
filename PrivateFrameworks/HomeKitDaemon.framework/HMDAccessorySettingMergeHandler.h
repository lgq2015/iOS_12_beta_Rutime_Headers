/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySettingMergeHandler : NSObject

+ (bool)_extractMinMaxStep:(id)arg1 minConstraint:(id*)arg2 maxConstraint:(id*)arg3 stepConstraint:(id*)arg4 first:(id)arg5;
+ (bool)_isNumber:(id)arg1 betweenStart:(id)arg2 andEnd:(id)arg3 first:(id)arg4;
+ (id)_mergeFirst:(id)arg1 second:(id)arg2 mergedConstraints:(id)arg3 mergeStrategy:(id)arg4;
+ (id)_mergeRangeConstaintsFirst:(id)arg1 second:(id)arg2;
+ (id)_mergeValidValueConstaintsFirst:(id)arg1 second:(id)arg2;
+ (bool)mergeFirst:(id)arg1 second:(id)arg2 mergeStrategy:(id)arg3;

@end