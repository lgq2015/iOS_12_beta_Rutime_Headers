/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying> {
    struct { 
        unsigned int userActionEventTarget : 1; 
    }  _has;
    NSString * _userActionEventKey;
    int  _userActionEventTarget;
    NSString * _userActionEventValue;
}

@property (nonatomic, readonly) bool hasUserActionEventKey;
@property (nonatomic) bool hasUserActionEventTarget;
@property (nonatomic, readonly) bool hasUserActionEventValue;
@property (nonatomic, retain) NSString *userActionEventKey;
@property (nonatomic) int userActionEventTarget;
@property (nonatomic, retain) NSString *userActionEventValue;

- (void).cxx_destruct;
- (int)StringAsUserActionEventTarget:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUserActionEventKey;
- (bool)hasUserActionEventTarget;
- (bool)hasUserActionEventValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasUserActionEventTarget:(bool)arg1;
- (void)setUserActionEventKey:(id)arg1;
- (void)setUserActionEventTarget:(int)arg1;
- (void)setUserActionEventValue:(id)arg1;
- (id)userActionEventKey;
- (int)userActionEventTarget;
- (id)userActionEventTargetAsString:(int)arg1;
- (id)userActionEventValue;
- (void)writeTo:(id)arg1;

@end
