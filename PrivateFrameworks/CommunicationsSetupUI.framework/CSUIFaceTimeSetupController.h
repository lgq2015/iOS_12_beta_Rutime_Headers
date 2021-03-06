/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CSUIFaceTimeSetupController : NSObject

+ (id)sharedInstance;

- (void)_handleFaceTimeEntitlementStatusChanged;
- (bool)cellularFaceTimeEnabled;
- (void)dealloc;
- (id)init;
- (void)setCellularFaceTimeEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;

@end
