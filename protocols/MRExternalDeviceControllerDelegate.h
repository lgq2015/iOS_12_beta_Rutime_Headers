/* made by EzioChiu.
 */

@protocol MRExternalDeviceControllerDelegate <NSObject>

@optional

- (void)externalDeviceController:(MRExternalDeviceController *)arg1 didDiscoverDevice:(MRTransportExternalDevice *)arg2;
- (void)externalDeviceController:(MRExternalDeviceController *)arg1 didRemoveDevice:(MRTransportExternalDevice *)arg2;

@end