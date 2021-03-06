/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice {
    GEOTrafficCamera * _trafficCamera;
}

@property (nonatomic, readonly) unsigned int cameraPriority;
@property (nonatomic, readonly) bool hasCameraPriority;
@property (nonatomic, readonly) bool hasSpeedLimitText;
@property (nonatomic, readonly) bool hasSpeedThreshold;
@property (nonatomic, readonly) unsigned int highlightDistance;
@property (nonatomic, readonly) NSString *speedLimitText;
@property (nonatomic, readonly) double speedThreshold;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (unsigned int)cameraPriority;
- (id)description;
- (id)detailFormatForLocation:(id)arg1;
- (bool)hasCameraPriority;
- (bool)hasSpeedLimitText;
- (bool)hasSpeedThreshold;
- (unsigned int)highlightDistance;
- (id)initWithEnrouteNotice:(id)arg1 trafficCamera:(id)arg2 onRoute:(id)arg3;
- (id)position;
- (id)speedLimitText;
- (double)speedThreshold;
- (id)titleFormatForLocation:(id)arg1;
- (int)type;

@end
