/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPassSyncChange : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _changeType;
    NSUUID * _changeUUID;
    NSData * _passData;
    NSData * _reconciledStateHash;
    NPKPassSyncStateItem * _syncStateItem;
    NSString * _uniqueID;
}

@property (nonatomic) unsigned long long changeType;
@property (nonatomic, retain) NSUUID *changeUUID;
@property (nonatomic, retain) NSData *passData;
@property (nonatomic, retain) NSData *reconciledStateHash;
@property (nonatomic, retain) NPKPassSyncStateItem *syncStateItem;
@property (nonatomic, retain) NSString *uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)changeType;
- (id)changeUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithChangeUUID:(id)arg1 reconciledStateHash:(id)arg2 changeType:(unsigned long long)arg3 uniqueID:(id)arg4 syncStateItem:(id)arg5 passData:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtoPassSyncChange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChange:(id)arg1;
- (id)passData;
- (id)protoPassSyncChange;
- (id)reconciledStateHash;
- (void)setChangeType:(unsigned long long)arg1;
- (void)setChangeUUID:(id)arg1;
- (void)setPassData:(id)arg1;
- (void)setReconciledStateHash:(id)arg1;
- (void)setSyncStateItem:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)syncStateItem;
- (id)uniqueID;

@end