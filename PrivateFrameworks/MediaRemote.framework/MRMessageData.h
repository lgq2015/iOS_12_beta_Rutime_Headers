/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMessageData : NSObject {
    NSData * _data;
    id /* block */  _dataBlock;
    MRProtocolMessage * _message;
    long long  _readPosition;
}

@property (nonatomic, readonly) bool canPurge;
@property (nonatomic, readonly) NSData *data;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly) MRProtocolMessage *message;
@property (nonatomic) long long readPosition;

- (void).cxx_destruct;
- (bool)canPurge;
- (id)data;
- (id)initWithMessage:(id)arg1 createDataBlock:(id /* block */)arg2;
- (bool)isFinished;
- (id)message;
- (long long)readPosition;
- (void)setReadPosition:(long long)arg1;

@end
