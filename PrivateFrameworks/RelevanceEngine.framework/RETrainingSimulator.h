/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RETrainingSimulator : NSObject <RETrainingSimulationClientDelegate> {
    RETrainingSimulationClient * _client;
    NSString * _relevanceEngineName;
    NSString * _targetProcessName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *relevanceEngineName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *targetProcessName;

- (void).cxx_destruct;
- (id)allElementIdentifiers;
- (id)allElements;
- (id)availableRelevanceEngines;
- (void)createElementFromDescription:(id)arg1;
- (id)initWithTargetProcess:(id)arg1 relevanceEngine:(id)arg2;
- (bool)performCommand:(id)arg1 withOptions:(id)arg2;
- (id)relevanceEngineName;
- (id)storedDiagnosticLogsPath;
- (id)targetProcessName;
- (void)trainingSimulationClientWasInterrupted:(id)arg1;
- (void)trainingSimulationClientWasInvalidated:(id)arg1;

@end