/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentSuggestedEventInfo : EKPersistentObject

@property (nonatomic) unsigned long long changedFields;
@property (nonatomic) bool changesAcknowledged;
@property (nonatomic, copy) NSString *opaqueKey;
@property (nonatomic) EKPersistentEvent *owner;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSString *uniqueKey;

+ (id)relations;
+ (id)suggestedEventInfoWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2;

- (unsigned long long)changedFields;
- (bool)changesAcknowledged;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)entityType;
- (id)opaqueKey;
- (id)owner;
- (void)setChangedFields:(unsigned long long)arg1;
- (void)setChangesAcknowledged:(bool)arg1;
- (void)setOpaqueKey:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUniqueKey:(id)arg1;
- (id)timestamp;
- (id)uniqueKey;

@end
