/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSearchForBillsIntent : INIntent <INSearchForBillsIntentExport>

@property (nonatomic, readonly, copy) INBillPayee *billPayee;
@property (nonatomic, readonly) long long billType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INDateComponentsRange *dueDateRange;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INDateComponentsRange *paymentDateRange;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)billPayee;
- (long long)billType;
- (id)domain;
- (id)dueDateRange;
- (id)initWithBillPayee:(id)arg1 paymentDateRange:(id)arg2 billType:(long long)arg3 status:(long long)arg4 dueDateRange:(id)arg5;
- (id)parametersByName;
- (id)paymentDateRange;
- (void)setBillPayee:(id)arg1;
- (void)setBillType:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setDueDateRange:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPaymentDateRange:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setVerb:(id)arg1;
- (long long)status;
- (id)verb;

@end