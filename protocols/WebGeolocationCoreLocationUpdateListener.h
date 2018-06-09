/* made by EzioChiu.
 */

@protocol WebGeolocationCoreLocationUpdateListener

@required

- (void)errorOccurred:(NSString *)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (void)positionChanged:(struct GeolocationPosition { double x1; double x2; double x3; double x4; struct optional<double> { bool x_5_1_1; union constexpr_storage_t<double> { unsigned char x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct optional<double> { bool x_6_1_1; union constexpr_storage_t<double> { unsigned char x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct optional<double> { bool x_7_1_1; union constexpr_storage_t<double> { unsigned char x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct optional<double> { bool x_8_1_1; union constexpr_storage_t<double> { unsigned char x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct optional<double> { bool x_9_1_1; union constexpr_storage_t<double> { unsigned char x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1;
- (void)resetGeolocation;

@end