/* made by EzioChiu.
 */

@protocol MiroBlueprintEditStyleProtocol <NSObject>

@required

- (NSArray *)allowedCropTreatments;
- (NSArray *)burstStyleNames;
- (bool)centerOnFrame;
- (bool)defaultCameraMotionIsPan;
- (NSArray *)expandedMultiUpTransitionDictionaries;
- (bool)extremeZoomAllowed;
- (double)hardCutPercentage;
- (NSDictionary *)healingEditTransitionDictionary;
- (bool)healingTransitionsAllowed;
- (double)kenBurnsAnyStillPercentage;
- (double)maxZoomLevel;
- (NSArray *)multiUpTransitionDictionaries;
- (NSArray *)multiUpTransitionsAsDictionaries;
- (NSString *)sequentialNUpEffect;
- (bool)sweepingPansAllowed;
- (NSArray *)transitionsAsDictionaries;

@end
