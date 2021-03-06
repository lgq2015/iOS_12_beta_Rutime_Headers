/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding> {
    NSDictionary * _modelSpecificInfo;
    _MRAVOutputDeviceDescriptorProtobuf * _protobuf;
    MRAVOutputDeviceSourceInfo * _sourceInfo;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MACAddress;
- (float)batteryLevel;
- (bool)canAccessAppleMusic;
- (bool)canAccessRemoteAssets;
- (bool)canAccessiCloudMusicLibrary;
- (bool)canFetchMediaDataFromSender;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (bool)canRelayCommunicationChannel;
- (id)descriptor;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareVersion;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (bool)hasBatteryLevel;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithSkeleton:(id)arg1;
- (bool)isAirPlayReceiverSessionActive;
- (bool)isDeviceGroupable;
- (bool)isGroupLeader;
- (bool)isGroupable;
- (bool)isLocalDevice;
- (bool)isProxyGroupPlayer;
- (bool)isRemoteControllable;
- (bool)isVolumeControlAvailable;
- (id)logicalDeviceID;
- (id)modelID;
- (id)modelSpecificInfo;
- (id)name;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (bool)requiresAuthorization;
- (id)sourceInfo;
- (bool)supportsBufferedAirPlay;
- (bool)supportsExternalScreen;
- (id)uid;
- (float)volume;

@end
