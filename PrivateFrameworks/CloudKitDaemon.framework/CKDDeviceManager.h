/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDeviceManager : NSObject {
    NSMutableDictionary * _deviceIDs;
    NSString * _deviceIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *deviceIDs;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_lookupKeyForContext:(id)arg1;
- (void)_saveDeviceIdentifier:(id)arg1 forContext:(id)arg2;
- (id)_savedDeviceIdentifierForContext:(id)arg1;
- (id)_serviceForContext:(id)arg1;
- (id)deviceIDs;
- (id)deviceIdentifier;
- (void)fetchDeviceIdentifierForContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (id)queue;
- (void)setDeviceIDs:(id)arg1;
- (void)setQueue:(id)arg1;

@end