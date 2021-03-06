/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchAvailableOSUpdatesResultObject : CATTaskResultObject {
    DMFOSUpdate * _update;
}

@property (nonatomic, readonly, copy) DMFOSUpdate *update;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdate:(id)arg1;
- (id)update;

@end
