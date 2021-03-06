/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncUrgencyTracker : NSObject {
    NSMutableDictionary * _urgencies;
    unsigned long long  _urgency;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)ageUrgencies;
- (unsigned long long)currentUrgency;
- (void)recomputeUrgency;
- (void)updateUrgency:(unsigned long long)arg1 forClient:(id)arg2;
- (unsigned long long)urgencyForClient:(id)arg1;

@end
