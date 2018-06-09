/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYDeletedObject : NSObject <SYChange> {
    NSString * _sequencer;
    NSString * _syncId;
}

@property (nonatomic, readonly) long long changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *syncId;

- (void).cxx_destruct;
- (long long)changeType;
- (id)initWithObjectID:(id)arg1 sequencer:(id)arg2;
- (id)initWithSyncId:(id)arg1;
- (id)objectIdentifier;
- (id)sequencer;
- (void)setSyncId:(id)arg1;
- (id)syncId;

@end