/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLocationSeriesSyncEntity : HDSampleSyncEntity <HDNanoSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_baseDataObjectPredicate;
+ (id)_objectWithCodable:(id)arg1;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (bool)supportsSpeculativeNanoSyncChanges;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;

@end
