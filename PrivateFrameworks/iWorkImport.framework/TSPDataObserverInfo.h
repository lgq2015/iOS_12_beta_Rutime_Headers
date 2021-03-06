/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataObserverInfo : NSObject {
    id /* block */  _completionHandler;
    TSPData * _data;
    bool  _isInternalObserver;
    id  _observer;
    unsigned long long  _options;
}

@property (nonatomic, readonly) bool isInternalObserver;
@property (nonatomic, readonly) unsigned long long options;

- (void).cxx_destruct;
- (id)init;
- (id)initWithObserver:(id)arg1 data:(id)arg2 options:(unsigned long long)arg3 isInternalObserver:(bool)arg4 completionHandler:(id /* block */)arg5;
- (bool)isInternalObserver;
- (void)notifyWithStatus:(long long)arg1 info:(id)arg2;
- (unsigned long long)options;
- (bool)shouldClearObserverForStatus:(long long)arg1;
- (bool)shouldNotifyStatus:(long long)arg1;

@end
