/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateTransit : PBCodable <NSCopying> {
    struct { 
        unsigned int transitNotAvailableAdvisoryShowing : 1; 
    }  _has;
    bool  _transitNotAvailableAdvisoryShowing;
}

@property (nonatomic) bool hasTransitNotAvailableAdvisoryShowing;
@property (nonatomic) bool transitNotAvailableAdvisoryShowing;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTransitNotAvailableAdvisoryShowing;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTransitNotAvailableAdvisoryShowing:(bool)arg1;
- (void)setTransitNotAvailableAdvisoryShowing:(bool)arg1;
- (bool)transitNotAvailableAdvisoryShowing;
- (void)writeTo:(id)arg1;

@end