/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUServiceIconPickerItemManager : HFItemManager {
    HFServiceBuilder * _serviceBuilder;
}

@property (nonatomic, readonly) HFServiceBuilder *serviceBuilder;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (id)_serviceType;
- (id)initWithServiceBuilder:(id)arg1 delegate:(id)arg2;
- (id)serviceBuilder;

@end
