/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface VoiceChatSessionBeaconState : NSObject {
    struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } * lastReceivedBeacon;
    bool  needsSend;
    unsigned int  receivedState;
    unsigned int  sentState;
    unsigned int  typeToSend;
}

@property (nonatomic) bool needsSend;
@property (nonatomic) unsigned int receivedState;
@property (nonatomic) unsigned int sentState;
@property (nonatomic) unsigned int typeToSend;

- (void)dealloc;
- (id)init;
- (struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)lastReceivedBeacon;
- (bool)needsSend;
- (unsigned int)receivedState;
- (unsigned int)sentState;
- (void)setLastReceivedBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (void)setNeedsSend:(bool)arg1;
- (void)setReceivedState:(unsigned int)arg1;
- (void)setSentState:(unsigned int)arg1;
- (void)setTypeToSend:(unsigned int)arg1;
- (unsigned int)typeToSend;

@end