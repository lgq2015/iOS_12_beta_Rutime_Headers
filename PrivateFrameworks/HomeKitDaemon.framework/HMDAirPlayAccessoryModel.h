/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAirPlayAccessoryModel : HMDMediaAccessoryModel

@property (nonatomic, retain) NSNumber *minimumUserPriviledge;
@property (nonatomic, retain) HMFPairingIdentity *pairingIdentity;
@property (nonatomic, retain) NSString *password;

+ (id)properties;

@end
