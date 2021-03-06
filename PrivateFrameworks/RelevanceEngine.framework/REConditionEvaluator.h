/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REConditionEvaluator : NSObject {
    RECondition * _condition;
    unsigned long long  _mode;
}

@property (nonatomic, readonly) RECondition *condition;
@property (nonatomic, readonly) unsigned long long mode;

- (void).cxx_destruct;
- (bool)acceptsFeatureMap:(id)arg1;
- (bool)compareFeatureMap:(id)arg1 toFeatureMap:(id)arg2;
- (id)condition;
- (id)initWithCondition:(id)arg1;
- (unsigned long long)mode;

@end
