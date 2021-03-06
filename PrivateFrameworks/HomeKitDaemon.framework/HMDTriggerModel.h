/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDTriggerModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSNumber *active;
@property (nonatomic, retain) NSArray *currentActionSets;
@property (nonatomic, copy) NSDate *mostRecentFireDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) HMDUser *owner;
@property (nonatomic, retain) HMDDevice *owningDevice;

+ (id)properties;

- (id)createPayload;
- (id)dependentUUIDs;

@end
