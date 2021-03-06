/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKServiceModeRequestController : NSObject {
    bool  _serviceModeRequested;
}

@property (nonatomic) bool serviceModeRequested;

+ (id)sharedServiceModeRequestController;

- (bool)serviceModeRequested;
- (void)setServiceModeRequested:(bool)arg1;

@end
