/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRLoggingXPCProxy : NSProxy {
    id  _proxy;
}

@property (nonatomic, retain) id proxy;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithBlahBlahBlahProxy:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)proxy;
- (void)setProxy:(id)arg1;

@end
