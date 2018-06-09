/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRProtocolMessage : NSObject {
    MRProtocolClientConnection * _clientConnection;
    NSError * _error;
    NSString * _identifier;
    bool  _isReply;
    MSVMultiCallback * _messagePurgedCallbacks;
    MSVMultiCallback * _messageSentCallbacks;
    NSData * _protobufData;
    bool  _replied;
    unsigned long long  _timestamp;
    PBCodable * _underlyingCodableMessage;
}

@property (nonatomic) MRProtocolClientConnection *clientConnection;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long encryptionType;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isReply;
@property (nonatomic, readonly) MSVMultiCallback *messagePurgedCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *messageSentCallbacks;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) NSData *protobufData;
@property (nonatomic, readonly) bool shouldLog;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, retain) PBCodable *underlyingCodableMessage;

+ (unsigned long long)currentProtocolVersion;
+ (id)protocolMessageWithProtobufData:(id)arg1;

- (void).cxx_destruct;
- (id)clientConnection;
- (void)dealloc;
- (id)description;
- (unsigned long long)encryptionType;
- (id)error;
- (id)identifier;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (bool)isReply;
- (id)messagePurgedCallbacks;
- (id)messageSentCallbacks;
- (unsigned long long)priority;
- (id)protobufData;
- (bool)reply;
- (bool)replyWithMessage:(id)arg1;
- (void)setClientConnection:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsReply:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnderlyingCodableMessage:(id)arg1;
- (bool)shouldLog;
- (unsigned long long)timestamp;
- (unsigned long long)type;
- (id)underlyingCodableMessage;

@end