/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAlmanacRiseTransitSet : NSObject {
    unsigned long long  _firstEventType;
    double  _julianDay;
    unsigned long long  _lastEventType;
    struct CAARiseTransitSetDetails { 
        bool bRiseValid; 
        double Rise; 
        bool bTransitValid; 
        bool bTransitAboveHorizon; 
        double Transit; 
        bool bSetValid; 
        double Set; 
    }  _riseTransitSet;
    NSDate * _sunrise;
    NSDate * _sunset;
    NSDate * _transit;
}

@property (nonatomic, readonly) NSDate *firstEventDate;
@property (nonatomic, readonly) unsigned long long firstEventType;
@property (nonatomic, readonly) double julianDay;
@property (nonatomic, readonly) NSDate *lastEventDate;
@property (nonatomic, readonly) unsigned long long lastEventType;
@property (nonatomic, readonly) struct CAARiseTransitSetDetails { bool x1; double x2; bool x3; bool x4; double x5; bool x6; double x7; } riseTransitSet;
@property (nonatomic, readonly) NSDate *sunrise;
@property (nonatomic, readonly) NSDate *sunset;
@property (nonatomic, readonly) NSDate *transit;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_calculateFirstAndLastEvents;
- (id)_dateFromOffset:(double)arg1 ofJulianEphemerisDay:(double)arg2;
- (long long)compareToDate:(id)arg1;
- (id)firstEventDate;
- (unsigned long long)firstEventType;
- (id)initWithJulianEphemerisDay:(double)arg1 riseTransitSet:(struct CAARiseTransitSetDetails { bool x1; double x2; bool x3; bool x4; double x5; bool x6; double x7; })arg2;
- (bool)isCompatibleWith:(id)arg1;
- (double)julianDay;
- (id)lastEventDate;
- (unsigned long long)lastEventType;
- (struct CAARiseTransitSetDetails { bool x1; double x2; bool x3; bool x4; double x5; bool x6; double x7; })riseTransitSet;
- (id)sunrise;
- (id)sunset;
- (id)transit;

@end