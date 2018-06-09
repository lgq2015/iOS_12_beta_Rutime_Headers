/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSeekCommandEvent : MPRemoteCommandEvent {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (unsigned long long)type;

@end