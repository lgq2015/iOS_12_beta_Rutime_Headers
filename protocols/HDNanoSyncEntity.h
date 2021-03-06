/* made by EzioChiu.
 */

@protocol HDNanoSyncEntity <HDSyncEntity>

@required

+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;

@optional

+ (bool)companionDidChangeForProfile:(HDProfile *)arg1 error:(id*)arg2;
+ (HDSQLitePredicate *)nanoSyncPredicateForSession:(HDNanoSyncSession *)arg1;
+ (bool)supportsSpeculativeNanoSyncChanges;

@end
