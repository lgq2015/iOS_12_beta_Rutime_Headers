/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySettingMergeStrategy : HMFObject {
    NSNumber * _conflictValue;
    long long  _strategy;
}

@property (nonatomic, readonly) NSNumber *conflictValue;
@property (nonatomic, readonly) long long strategy;

- (void).cxx_destruct;
- (id)conflictValue;
- (id)initWithMergeStrategy:(id)arg1;
- (long long)strategy;

@end
