/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECSpotlightReceiver : NSObject <SpotlightReceiver> {
    <_DECSpotlightReceiverDelegate> * _delegate;
    _DECServerResponder * _serverResponder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)addUserAction:(id)arg1 withItem:(id)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end
