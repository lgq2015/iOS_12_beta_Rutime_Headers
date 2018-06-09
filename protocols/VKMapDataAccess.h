/* made by EzioChiu.
 */

@protocol VKMapDataAccess <NSObject>

@required

- (double)displayZoomLevel;
- (double)fovAdjustment;
- (struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; })groundCoordinateForScreenPixel:(const struct Matrix<double, 2, 1> { double x1[2]; }*)arg1 cameraFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg2;
- (double)heightAtCoordinate:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg1;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)projectionMatrix;
- (struct RigidTransform<double> { struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_1_1_1; double x_1_1_2; } x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2; })rigidTransformForFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; })rotateCameraFrameAboutCoordinate:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1 coordinate:(struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; })arg2 deltaAngle:(double)arg3;
- (struct Matrix<double, 2, 1> { double x1[2]; })screenPixelForCoordinate:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg1 cameraFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg2;
- (void)setCameraFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1;
- (struct Matrix<double, 4, 4> { double x1[16]; })worldViewProjectionMatrix:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1;

@end