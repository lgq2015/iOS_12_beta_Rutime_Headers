/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportSubsystemCategoryFilter : NSObject <SignpostPredicateProducer> {
    NSMutableDictionary * _subsystemsDict;
}

@property (nonatomic, readonly) unsigned long long _compoundPredicateType;
@property (nonatomic, readonly) bool _wantsNotSubsystem;
@property (nonatomic, readonly) NSPredicate *predicateEquivalent;
@property (nonatomic, readonly) NSMutableDictionary *subsystemsDict;

- (void).cxx_destruct;
- (unsigned long long)_compoundPredicateType;
- (id)_initWithEntries:(id)arg1;
- (id)_predicateEquivalentWithIsSimplified:(bool)arg1;
- (id)_subpredicatesForSubsystemsWithIsSimplified:(bool)arg1;
- (bool)_wantsNotSubsystem;
- (void)addEntry:(id)arg1;
- (void)addSubsystem:(id)arg1 category:(id)arg2;
- (id)liveStreamingPredicate;
- (bool)matchesSubsystem:(id)arg1 category:(id)arg2;
- (bool)passesSubsystem:(id)arg1 category:(id)arg2;
- (id)predicateEquivalent;
- (id)subsystemsDict;

@end