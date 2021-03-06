/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICDeviceBrowser : NSObject {
    id  _privateData;
}

@property (getter=isBrowsing, readonly) bool browsing;
@property <ICDeviceBrowserDelegate> *delegate;
@property (readonly) NSArray *devices;

- (void)dealloc;
- (id)delegate;
- (id)devices;
- (id)init;
- (id)internalDevices;
- (bool)isBrowsing;
- (void)setDelegate:(id)arg1;
- (int)start;
- (void)stop;

@end
