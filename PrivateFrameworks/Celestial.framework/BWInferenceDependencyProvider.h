/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceDependencyProvider : NSObject {
    NSSet * _consumedVideoAttachedMediaKeys;
    NSMapTable * _dependenciesByInputVideoRequirements;
    NSMapTable * _dependenciesByOutputVideoRequirements;
    NSDictionary * _providedVideoRequirementsByAttachedMediaKey;
}

@property (nonatomic, readonly, copy) NSArray *allInputVideoDependencies;
@property (nonatomic, readonly, copy) NSArray *allOutputVideoDependencies;
@property (nonatomic, retain) NSSet *consumedVideoAttachedMediaKeys;
@property (nonatomic, readonly) NSMapTable *dependenciesByInputVideoRequirements;
@property (nonatomic, readonly) NSMapTable *dependenciesByOutputVideoRequirements;
@property (nonatomic, retain) NSDictionary *providedVideoRequirementsByAttachedMediaKey;

- (id)allInputVideoDependencies;
- (id)allOutputVideoDependencies;
- (id)consumedVideoAttachedMediaKeys;
- (void)dealloc;
- (id)dependenciesByInputVideoRequirements;
- (id)dependenciesByOutputVideoRequirements;
- (id)dependenciesForInputVideoRequirement:(id)arg1;
- (id)dependenciesForOutputVideoRequirement:(id)arg1;
- (id)description;
- (id)init;
- (id)providedVideoRequirementsByAttachedMediaKey;
- (void)setConsumedVideoAttachedMediaKeys:(id)arg1;
- (void)setProvidedVideoRequirementsByAttachedMediaKey:(id)arg1;

@end
