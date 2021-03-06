/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRDeviceInfoMessage : MRProtocolMessage {
    MRSupportedProtocolMessages * _supportedProtocolMessages;
}

@property (nonatomic, readonly) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, readonly) MRSupportedProtocolMessages *supportedProtocolMessages;

- (void).cxx_destruct;
- (unsigned long long)_lastSupportedMessageType;
- (unsigned long long)_lastSupportedMessageTypeBeforeSupportedMessagesWereAddedToDeviceInfo;
- (id)deviceInfo;
- (unsigned long long)encryptionType;
- (id)initWithDeviceInfo:(id)arg1;
- (id)supportedProtocolMessages;
- (unsigned long long)type;

@end
