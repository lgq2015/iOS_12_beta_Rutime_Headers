/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSendLyricsEventMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRLyricsEventProtobuf *event;

- (id)event;
- (id)initWithEvent:(id)arg1;
- (unsigned long long)type;

@end
