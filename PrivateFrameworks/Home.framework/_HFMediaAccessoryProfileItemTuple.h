/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface _HFMediaAccessoryProfileItemTuple : NSObject <NAIdentifiable> {
    HMAccessorySettingGroup * _accessoryGroup;
    HFAccessorySettingsEntity * _accessoryGroupEntity;
    HMAccessorySetting * _accessorySetting;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    HMAccessorySelectionSettingItem * _optionItem;
    HFItem * _outputItem;
}

@property (nonatomic, readonly) HMAccessorySettingGroup *accessoryGroup;
@property (nonatomic, readonly) HFAccessorySettingsEntity *accessoryGroupEntity;
@property (nonatomic, readonly) HMAccessorySetting *accessorySetting;
@property (nonatomic, readonly) NSString *cacheKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) HMAccessorySelectionSettingItem *optionItem;
@property (nonatomic, readonly) HFItem *outputItem;
@property (readonly) Class superclass;

+ (bool)_walkSettingsTreeForReflectedSettingWithinContainer:(id)arg1 accessoryGroup:(id)arg2;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)accessoryGroup;
- (id)accessoryGroupEntity;
- (id)accessorySetting;
- (id)cacheKey;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMediaProfileContainer:(id)arg1 accessoryGroupEntity:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 group:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 setting:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 setting:(id)arg2 optionItem:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isValidForContainer;
- (id)keyPath;
- (id)mediaProfileContainer;
- (id)optionItem;
- (id)outputItem;

@end