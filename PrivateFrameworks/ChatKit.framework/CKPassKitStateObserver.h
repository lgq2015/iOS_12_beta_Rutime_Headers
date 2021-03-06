/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPassKitStateObserver : NSObject {
    bool  _iTunesStoreDialogPresented;
    bool  _passKitUIPresented;
}

@property (nonatomic) bool iTunesStoreDialogPresented;
@property (nonatomic) bool passKitUIPresented;

+ (id)sharedInstance;

- (void)_iTunesStoreDialogDidDismiss;
- (void)_iTunesStoreDialogWillDisplay;
- (void)_passKitUIDismissed;
- (void)_passKitUIPresented;
- (void)dealloc;
- (id)description;
- (bool)iTunesStoreDialogPresented;
- (id)init;
- (bool)passKitUIPresented;
- (void)prepareForResume;
- (void)setITunesStoreDialogPresented:(bool)arg1;
- (void)setPassKitUIPresented:(bool)arg1;

@end
