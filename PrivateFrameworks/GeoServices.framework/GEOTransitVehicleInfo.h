/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitVehicleInfo : PBCodable <NSCopying> {
    GEOTransitVehicleTime * _arrivalTime;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _clusteredRouteLineArtworkIndexs;
    unsigned int  _departureFrequencyMax;
    unsigned int  _departureFrequencyMin;
    GEOTransitVehicleTime * _departureTime;
    struct { 
        unsigned int tripMuid : 1; 
        unsigned int departureFrequencyMax : 1; 
        unsigned int departureFrequencyMin : 1; 
        unsigned int lineIndex : 1; 
        unsigned int pickupDropoffType : 1; 
        unsigned int routeLineArtworkIndex : 1; 
    }  _has;
    unsigned int  _lineIndex;
    int  _pickupDropoffType;
    unsigned int  _routeLineArtworkIndex;
    unsigned long long  _tripMuid;
    NSString * _vehicleNumber;
}

@property (nonatomic, retain) GEOTransitVehicleTime *arrivalTime;
@property (nonatomic, readonly) unsigned int*clusteredRouteLineArtworkIndexs;
@property (nonatomic, readonly) unsigned long long clusteredRouteLineArtworkIndexsCount;
@property (nonatomic) unsigned int departureFrequencyMax;
@property (nonatomic) unsigned int departureFrequencyMin;
@property (nonatomic, retain) GEOTransitVehicleTime *departureTime;
@property (nonatomic, readonly) bool hasArrivalTime;
@property (nonatomic) bool hasDepartureFrequencyMax;
@property (nonatomic) bool hasDepartureFrequencyMin;
@property (nonatomic, readonly) bool hasDepartureTime;
@property (nonatomic) bool hasLineIndex;
@property (nonatomic) bool hasPickupDropoffType;
@property (nonatomic) bool hasRouteLineArtworkIndex;
@property (nonatomic) bool hasTripMuid;
@property (nonatomic, readonly) bool hasVehicleNumber;
@property (nonatomic) unsigned int lineIndex;
@property (nonatomic) int pickupDropoffType;
@property (nonatomic) unsigned int routeLineArtworkIndex;
@property (nonatomic) unsigned long long tripMuid;
@property (nonatomic, retain) NSString *vehicleNumber;

- (void).cxx_destruct;
- (int)StringAsPickupDropoffType:(id)arg1;
- (void)addClusteredRouteLineArtworkIndex:(unsigned int)arg1;
- (id)arrivalTime;
- (void)clearClusteredRouteLineArtworkIndexs;
- (unsigned int)clusteredRouteLineArtworkIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)clusteredRouteLineArtworkIndexs;
- (unsigned long long)clusteredRouteLineArtworkIndexsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)departureFrequencyMax;
- (unsigned int)departureFrequencyMin;
- (id)departureTime;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArrivalTime;
- (bool)hasDepartureFrequencyMax;
- (bool)hasDepartureFrequencyMin;
- (bool)hasDepartureTime;
- (bool)hasLineIndex;
- (bool)hasPickupDropoffType;
- (bool)hasRouteLineArtworkIndex;
- (bool)hasTripMuid;
- (bool)hasVehicleNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)lineIndex;
- (void)mergeFrom:(id)arg1;
- (int)pickupDropoffType;
- (id)pickupDropoffTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)routeLineArtworkIndex;
- (void)setArrivalTime:(id)arg1;
- (void)setClusteredRouteLineArtworkIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setDepartureFrequencyMax:(unsigned int)arg1;
- (void)setDepartureFrequencyMin:(unsigned int)arg1;
- (void)setDepartureTime:(id)arg1;
- (void)setHasDepartureFrequencyMax:(bool)arg1;
- (void)setHasDepartureFrequencyMin:(bool)arg1;
- (void)setHasLineIndex:(bool)arg1;
- (void)setHasPickupDropoffType:(bool)arg1;
- (void)setHasRouteLineArtworkIndex:(bool)arg1;
- (void)setHasTripMuid:(bool)arg1;
- (void)setLineIndex:(unsigned int)arg1;
- (void)setPickupDropoffType:(int)arg1;
- (void)setRouteLineArtworkIndex:(unsigned int)arg1;
- (void)setTripMuid:(unsigned long long)arg1;
- (void)setVehicleNumber:(id)arg1;
- (unsigned long long)tripMuid;
- (id)vehicleNumber;
- (void)writeTo:(id)arg1;

@end