/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNAnnouncementStrategyDelayCompressDrop : NSObject <MNAnnoucementStrategy> {
    double  _distance;
    NSArray * _events;
    MNGuidanceEventManager * _manager;
    MNAnnouncementPlan * _plan;
    double  _speed;
}

@property (nonatomic) double distance;
@property (nonatomic, retain) NSArray *events;
@property (nonatomic) MNGuidanceEventManager *manager;
@property (nonatomic, retain) MNAnnouncementPlan *plan;
@property (nonatomic) double speed;

- (void).cxx_destruct;
- (bool)_advanceToResolveConflict:(id)arg1;
- (double)_canAdvanceEvent:(id)arg1;
- (double)_canDelayEvent:(id)arg1;
- (bool)_compressToResolveConflict:(id)arg1;
- (bool)_delayToResolveConflict:(id)arg1;
- (void)_dropToResolveConflict:(id)arg1;
- (double)distance;
- (id)events;
- (id)initWithManager:(id)arg1;
- (id)manager;
- (id)nextEvent;
- (id)plan;
- (void)planForEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 previousEvent:(id)arg4 timeSinceLastEvent:(double)arg5;
- (void)setDistance:(double)arg1;
- (void)setEvents:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setPlan:(id)arg1;
- (void)setSpeed:(double)arg1;
- (double)speed;

@end