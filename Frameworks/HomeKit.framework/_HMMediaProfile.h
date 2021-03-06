/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMMediaProfile : _HMAccessoryProfile {
    <_HMMediaProfileDelegate> * _delegate;
    HMMediaSession * _mediaSession;
    NSString * _routeUID;
}

@property <_HMMediaProfileDelegate> *delegate;
@property (retain) HMMediaSession *mediaSession;
@property (readonly) NSString *routeUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_notifyDelegateOfUpdatedMediaSession:(id)arg1;
- (void)configureWithAccessory:(id)arg1 home:(id)arg2 context:(id)arg3;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mediaSession;
- (id)routeUID;
- (void)setDelegate:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)setRouteUID:(id)arg1;

@end
