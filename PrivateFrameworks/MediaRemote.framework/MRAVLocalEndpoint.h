/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVLocalEndpoint : MRAVConcreteEndpoint <MROutputContextDataSourceDelegate, NSSecureCoding> {
    MRAVOutputContext * _outputContext;
    MROutputContextController * _outputContextController;
    NSArray * _outputDevices;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSString * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *outputDevices;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_localizeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (void)_reloadOutputDevicesFromContext;
- (void)addOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id /* block */)arg3;
- (bool)canModifyGroupMembership;
- (long long)connectionType;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutputContext:(id)arg1;
- (id)initWithOutputContext:(id)arg1 wantsUpdates:(bool)arg2;
- (id)initWithOutputDevices:(id)arg1;
- (bool)isProxyGroupPlayer;
- (void)outputContextDataSource:(id)arg1 didAddOutputDevice:(id)arg2;
- (void)outputContextDataSource:(id)arg1 didRemoveOutputDevice:(id)arg2;
- (void)outputContextDataSource:(id)arg1 outputDevice:(id)arg2 didChangeVolume:(float)arg3;
- (void)outputContextDataSource:(id)arg1 outputDevice:(id)arg2 didChangeVolumeControlCapabilities:(unsigned int)arg3;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)outputDevices;
- (void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)removeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setOutputDevices:(id)arg1;
- (void)setOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)uniqueIdentifier;
- (void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;

@end