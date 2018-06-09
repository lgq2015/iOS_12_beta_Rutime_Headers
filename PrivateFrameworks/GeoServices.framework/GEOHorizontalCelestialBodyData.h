/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOHorizontalCelestialBodyData : NSObject {
    double  _altitude;
    double  _azimuth;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double azimuth;

- (void)_calcuateAzimuthandAltitudeForCoordinate:(struct { double x1; double x2; })arg1 julianDay:(double)arg2 eclipticLongitude:(double)arg3 eclipticLatitude:(double)arg4 radius:(double)arg5;
- (double)altitude;
- (double)azimuth;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 date:(id)arg2 body:(long long)arg3;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(bool)arg4;

@end