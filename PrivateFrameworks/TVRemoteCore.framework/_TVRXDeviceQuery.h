/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRXDeviceQuery : NSObject <_TVRCMediaRemoteDeviceQueryDelegate> {
    NSMutableDictionary * _aggregateDevices;
    <_TVRXDeviceQueryDelegate> * _delegate;
    bool  _isRunning;
    _TVRCMediaRemoteDeviceQuery * _mediaRemoteQuery;
}

@property (nonatomic, retain) NSMutableDictionary *aggregateDevices;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_TVRXDeviceQueryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRunning;
@property (nonatomic, retain) _TVRCMediaRemoteDeviceQuery *mediaRemoteQuery;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_findAggregateForIdentifier:(id)arg1 createIfNeeded:(bool)arg2;
- (void)_notifyDelegateDidUpdateDevices;
- (void)_reevaluateAggregates;
- (void)_startSearch;
- (void)_stopSearch;
- (id)aggregateDevices;
- (id)delegate;
- (id)devices;
- (id)init;
- (bool)isRunning;
- (void)mediaRemoteDeviceQuery:(id)arg1 addedTelevision:(id)arg2;
- (void)mediaRemoteDeviceQuery:(id)arg1 removedTelevision:(id)arg2;
- (id)mediaRemoteQuery;
- (void)setAggregateDevices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsRunning:(bool)arg1;
- (void)setMediaRemoteQuery:(id)arg1;
- (void)start;
- (void)stop;

@end