/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARDeviceOrientationSensor : NSObject <ARPassiveSensor> {
    ARDeviceOrientationData * _currentOrientationData;
    <ARSensorDelegate> * _delegate;
    NSOperationQueue * _errorQueueDeviceMotion;
    CMMotionManager * _motionManager;
    double  _previousCaptureEndingTimestamp;
    long long  _worldAlignment;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long worldAlignment;

- (void).cxx_destruct;
- (id)currentData;
- (void)dealloc;
- (id)delegate;
- (id)initWithMotionManager:(id)arg1 alignment:(long long)arg2;
- (unsigned long long)providedDataTypes;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (long long)worldAlignment;

@end