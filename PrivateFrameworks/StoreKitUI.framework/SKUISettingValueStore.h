/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISettingValueStore : NSObject {
    NSMutableDictionary * _modifiedValues;
    NSObject<OS_dispatch_queue> * _mutexQueue;
    NSMutableDictionary * _originalValues;
}

- (void).cxx_destruct;
- (void)clearValueForKey:(id)arg1;
- (void)commitChanges;
- (void)discardChanges;
- (bool)hasChanges;
- (id)init;
- (id)modifiedKeys;
- (id)originalValueForKey:(id)arg1;
- (id)resolvedValueForKey:(id)arg1;
- (void)setModifiedValue:(id)arg1 forKey:(id)arg2;
- (void)setOriginalValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end