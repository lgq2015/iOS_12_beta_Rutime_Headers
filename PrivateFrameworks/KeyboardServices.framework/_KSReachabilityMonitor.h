/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSReachabilityMonitor : NSObject {
    bool  _isInternetReachable;
    NSObject<OS_dispatch_queue> * _queue;
    struct __SCNetworkReachability { } * _reachabilityRef;
}

+ (void)startMonitoring;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)queryInitialState;
- (void)reachabilityDidChange:(bool)arg1;

@end
