/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRSendCommandResultMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRSendCommandResultMessageProtobuf * _protobuf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int errorCode;
@property (nonatomic, readonly) NSArray *handlerReturnStatuses;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) Class superclass;

+ (id)messageWithErrorCode:(unsigned int)arg1 handlerReturnStatuses:(id)arg2 originIdentifier:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithErrorCode:(unsigned int)arg1 handlerReturnStatuses:(id)arg2 originIdentifier:(id)arg3;
- (unsigned int)errorCode;
- (id)handlerReturnStatuses;
- (id)initWithProtobufData:(id)arg1;
- (id)originIdentifier;
- (id)protobufData;
- (id)serializationDate;

@end
