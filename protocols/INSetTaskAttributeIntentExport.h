/* made by EzioChiu.
 */

@protocol INSetTaskAttributeIntentExport <NSObject, JSExport>

@required

- (id)init;
- (void)setSpatialEventTrigger:(INSpatialEventTrigger *)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTargetTask:(INTask *)arg1;
- (void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1;
- (INSpatialEventTrigger *)spatialEventTrigger;
- (long long)status;
- (INTask *)targetTask;
- (INTemporalEventTrigger *)temporalEventTrigger;

@end
