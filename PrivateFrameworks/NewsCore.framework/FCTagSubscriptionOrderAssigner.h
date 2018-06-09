/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagSubscriptionOrderAssigner : NSObject {
    long long  _initialOrder;
    long long  _orderSpacing;
}

@property (nonatomic, readonly) long long initialOrder;
@property (nonatomic, readonly) long long orderSpacing;

- (id)_assignOrderToSubscriptions:(id)arg1 inClosedRangeWithPreviousValue:(long long)arg2 nextValue:(long long)arg3;
- (id)_assignOrderToSubscriptions:(id)arg1 inOpenEndRangeWithPreviousValue:(long long)arg2;
- (id)_assignOrderToSubscriptions:(id)arg1 inOpenStartRangeWithNextValue:(long long)arg2;
- (id)_assignOrderToSubscriptions:(id)arg1 withInitialOrder:(long long)arg2 orderSpacing:(long long)arg3;
- (id)_assignOrderToSubscriptionsInOpenRange:(id)arg1;
- (id)assignOrderToTagSubscriptions:(id)arg1;
- (id)init;
- (id)initWithInitialOrder:(long long)arg1 orderSpacing:(long long)arg2;
- (long long)initialOrder;
- (long long)orderSpacing;

@end