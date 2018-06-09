/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARMotionSensor : NSObject <ARSensor> {
    ARAccelerometerData * _currentAccelerometerData;
    ARGyroscopeData * _currentGyroData;
    <ARSensorDelegate> * _delegate;
    double  _interval;
    CMMotionManager * _motionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interval;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accelerometerOutput:(const struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; double x2; }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)gyroscopeOutput:(const struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; double x2; }*)arg1;
- (id)initWithMotionManager:(id)arg1;
- (double)interval;
- (double)preferredInterval;
- (unsigned long long)providedDataTypes;
- (void)setDelegate:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)start;
- (void)stop;

@end