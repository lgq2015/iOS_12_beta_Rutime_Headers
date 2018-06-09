/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKThreadsafeImageCache : GKThreadsafeCache <GKScreenConfigurationListener>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)greatestScreenScaleDidChange:(double)arg1;
- (id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2;

@end