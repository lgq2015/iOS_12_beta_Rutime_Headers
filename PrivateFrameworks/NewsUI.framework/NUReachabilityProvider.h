/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUReachabilityProvider : NSObject <FCNetworkReachabilityObserving, SXReachabilityProvider> {
    FCNetworkReachability * _networkReachability;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FCNetworkReachability *networkReachability;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addReachabilityObserver:(id)arg1;
- (id)initWithNetworkReachability:(id)arg1;
- (bool)isNetworkReachable;
- (id)networkReachability;
- (void)networkReachabilityDidChange:(id)arg1;
- (id)observers;
- (void)removeReachabilityObserver:(id)arg1;

@end