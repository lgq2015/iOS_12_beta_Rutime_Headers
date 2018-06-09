/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRLyricsEventProtobuf : PBCodable <NSCopying> {
    double  _endTime;
    struct { 
        unsigned int endTime : 1; 
        unsigned int startTime : 1; 
    }  _has;
    double  _startTime;
    _MRLyricsTokenProtobuf * _token;
}

@property (nonatomic) double endTime;
@property (nonatomic) bool hasEndTime;
@property (nonatomic) bool hasStartTime;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic) double startTime;
@property (nonatomic, retain) _MRLyricsTokenProtobuf *token;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endTime;
- (bool)hasEndTime;
- (bool)hasStartTime;
- (bool)hasToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setHasEndTime:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setToken:(id)arg1;
- (double)startTime;
- (id)token;
- (void)writeTo:(id)arg1;

@end