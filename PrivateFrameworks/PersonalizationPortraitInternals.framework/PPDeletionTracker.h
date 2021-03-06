/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPDeletionTracker : _PASZonedObject {
    _PASLock * _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_ageOutDeletionsWithCurrentDate:(id)arg1 lockWitness:(id)arg2;
- (void)_prepAllocWithLockWitness:(id)arg1;
- (void)clearNamedEntityDeletions;
- (id)init;
- (id)namedEntitiesDeletedSinceDate:(id)arg1;
- (void)registerAddedNamedEntities:(id)arg1;
- (void)registerDeletedNamedEntities:(id)arg1;

@end
