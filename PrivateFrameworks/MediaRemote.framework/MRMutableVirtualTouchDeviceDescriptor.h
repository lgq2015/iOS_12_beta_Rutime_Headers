/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMutableVirtualTouchDeviceDescriptor : MRVirtualTouchDeviceDescriptor

@property (getter=isAbsolute, nonatomic) bool absolute;
@property (getter=isIntegratedDisplay, nonatomic) bool integratedDisplay;
@property (nonatomic) union _MRHIDSize { struct { float x_1_1_1; float x_1_1_2; } x1; float x2[2]; } screenSize;

- (void)setAbsolute:(bool)arg1;
- (void)setIntegratedDisplay:(bool)arg1;
- (void)setScreenSize:(union _MRHIDSize { struct { float x_1_1_1; float x_1_1_2; } x1; float x2[2]; })arg1;

@end