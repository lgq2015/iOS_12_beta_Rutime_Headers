/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAppleMediaAccessoryAdvertisement : HMDMediaAccessoryAdvertisement {
    HMDDevice * _device;
}

@property (readonly) HMDDevice *device;

- (void).cxx_destruct;
- (id)description;
- (id)device;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 device:(id)arg4;
- (id)initWithOutputDevice:(id)arg1 device:(id)arg2;

@end
