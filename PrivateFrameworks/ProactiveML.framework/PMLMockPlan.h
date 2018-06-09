/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLMockPlan : NSObject <PMLPlanProtocol> {
    bool  _didRun;
    bool  _isSynchronous;
    struct NSString { Class x1; } * _planId;
    bool  _returnValue;
    PMLTrainingStore * _store;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didRun;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSynchronous;
@property (nonatomic, readonly) NSString *planId;
@property (readonly) Class superclass;
@property unsigned long long version;

+ (void)clearLastDeserializedPlans;
+ (id)lastDeserializedPlanWithId:(struct NSString { Class x1; }*)arg1;
+ (id)lastDeserializedPlansMap;
+ (void)setLastDeserializedPlanWithId:(struct NSString { Class x1; }*)arg1 toPlan:(id)arg2;

- (void).cxx_destruct;
- (bool)didRun;
- (id)initWithPlanId:(struct NSString { Class x1; }*)arg1;
- (id)initWithPlanId:(struct NSString { Class x1; }*)arg1 store:(id)arg2;
- (id)initWithPlanId:(struct NSString { Class x1; }*)arg1 store:(id)arg2 version:(unsigned long long)arg3 returningAfterRunning:(bool)arg4 isSynchronous:(bool)arg5;
- (id)initWithPlanId:(struct NSString { Class x1; }*)arg1 version:(unsigned long long)arg2;
- (id)initWithPlanId:(struct NSString { Class x1; }*)arg1 version:(unsigned long long)arg2 returningAfterRunning:(bool)arg3;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithVersion:(unsigned long long)arg1;
- (bool)isSynchronous;
- (struct NSString { Class x1; }*)planId;
- (id)runWhile:(id /* block */)arg1 didFinish:(bool*)arg2;
- (void)setVersion:(unsigned long long)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (unsigned long long)version;

@end