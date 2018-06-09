/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRVoiceInputDevice : PBCodable <NSCopying> {
    _MRVoiceInputDeviceDescriptorProtobuf * _descriptor;
    unsigned int  _deviceID;
    struct { 
        unsigned int deviceID : 1; 
        unsigned int recordingState : 1; 
    }  _has;
    int  _recordingState;
}

@property (nonatomic, retain) _MRVoiceInputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic) unsigned int deviceID;
@property (nonatomic, readonly) bool hasDescriptor;
@property (nonatomic) bool hasDeviceID;
@property (nonatomic) bool hasRecordingState;
@property (nonatomic) int recordingState;

- (void).cxx_destruct;
- (int)StringAsRecordingState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptor;
- (unsigned int)deviceID;
- (id)dictionaryRepresentation;
- (bool)hasDescriptor;
- (bool)hasDeviceID;
- (bool)hasRecordingState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)recordingState;
- (id)recordingStateAsString:(int)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setDeviceID:(unsigned int)arg1;
- (void)setHasDeviceID:(bool)arg1;
- (void)setHasRecordingState:(bool)arg1;
- (void)setRecordingState:(int)arg1;
- (void)writeTo:(id)arg1;

@end