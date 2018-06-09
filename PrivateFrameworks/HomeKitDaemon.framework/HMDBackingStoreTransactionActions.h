/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreTransactionActions : HMDBackingStoreTransactionOptions {
    HMDBackingStore * _backingStore;
    bool  _changed;
    bool  _local;
    bool  _saveToAssistant;
    bool  _saveToSharedUserAccount;
}

@property (nonatomic, readonly) HMDBackingStore *backingStore;
@property (nonatomic, readonly) bool changed;
@property (nonatomic, readonly) bool local;
@property (nonatomic, readonly) bool saveToAssistant;
@property (nonatomic, readonly) bool saveToSharedUserAccount;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)backingStore;
- (bool)changed;
- (id)description;
- (id)initWithBackingStore:(id)arg1 options:(id)arg2;
- (bool)local;
- (id)logIdentifier;
- (void)markChanged;
- (void)markLocalChanged;
- (void)markSaveToAssistant;
- (void)markSaveToSharedUserAccount;
- (bool)saveToAssistant;
- (bool)saveToSharedUserAccount;

@end