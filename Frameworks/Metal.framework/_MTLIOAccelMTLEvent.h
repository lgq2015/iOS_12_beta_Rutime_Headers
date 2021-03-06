/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLIOAccelMTLEvent : IOAccelMTLEvent <MTLEvent> {
    MTLIOAccelDevice<MTLDevice> * _device;
    NSString * _label;
    unsigned long long  _labelTraceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;

@end
