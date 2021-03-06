/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloRecordingProxyToInitiator : CLIntersiloRecordingProxy {
    CLIntersiloRecordingProxy * _peer;
}

@property (nonatomic, readonly) CLIntersiloRecordingProxy *peer;

- (void).cxx_destruct;
- (id)initWithProxiedInterface:(id)arg1 delegateObject:(id)arg2 delegateSilo:(id)arg3 andUninitializedPeer:(id)arg4;
- (id)peer;

@end
