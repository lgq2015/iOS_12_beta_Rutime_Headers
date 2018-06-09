/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDialog : NSObject <SSXPCCoding> {
    bool  _allowDuplicates;
    SSAuthenticationContext * _authenticationContext;
    bool  _authorizationIsForced;
    NSArray * _buttons;
    long long  _defaultButtonIndex;
    bool  _dismissOnHomeButton;
    bool  _dismissOnLock;
    NSString * _displayCountKey;
    bool  _displaysOnLockscreen;
    bool  _expectsResponse;
    bool  _groupsTextFields;
    long long  _kind;
    NSLock * _lock;
    long long  _maxDisplayCount;
    NSString * _message;
    bool  _noDefaultButton;
    bool  _oneButtonPerLine;
    SSPaymentSheet * _paymentSheet;
    bool  _shouldDismissAfterUnlock;
    bool  _shouldDisplayAsTopMost;
    bool  _shouldPendInSetupIfNotAllowed;
    NSArray * _textFields;
    NSString * _title;
    NSString * _touchIDContinueToken;
    long long  _unlockActionButtonIndex;
    NSMutableDictionary * _userInfo;
    struct __CFDictionary { } * _userNotificationValues;
}

@property bool allowDuplicates;
@property (copy) SSAuthenticationContext *authenticationContext;
@property bool authorizationIsForced;
@property (retain) NSArray *buttons;
@property (readonly, copy) NSString *debugDescription;
@property long long defaultButtonIndex;
@property (readonly, copy) NSString *description;
@property bool dismissOnHomeButton;
@property bool dismissOnLock;
@property (copy) NSString *displayCountKey;
@property (getter=isDisplayable, readonly) bool displayable;
@property bool displaysOnLockscreen;
@property bool expectsResponse;
@property bool groupsTextFields;
@property (readonly) unsigned long long hash;
@property long long kind;
@property long long maximumDisplayCount;
@property (retain) NSString *message;
@property bool noDefaultButton;
@property bool oneButtonPerLine;
@property (readonly) SSPaymentSheet *paymentSheet;
@property bool shouldDismissAfterUnlock;
@property bool shouldDisplayAsTopMost;
@property bool shouldPendInSetupIfNotAllowed;
@property (readonly) Class superclass;
@property (retain) NSArray *textFields;
@property (retain) NSString *title;
@property (copy) NSString *touchIDContinueToken;
@property long long unlockActionButtonIndex;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

+ (long long)displayCountForKey:(id)arg1;

- (void).cxx_destruct;
- (long long)_kindForString:(id)arg1;
- (bool)allowDuplicates;
- (id)authenticationContext;
- (bool)authorizationIsForced;
- (id)buttons;
- (id)buyParams;
- (id)copyUserNotification;
- (void*)copyValueForCFUserNotificationKey:(struct __CFString { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (long long)defaultButtonIndex;
- (bool)dismissOnHomeButton;
- (bool)dismissOnLock;
- (id)displayCountKey;
- (bool)displaysOnLockscreen;
- (bool)expectsResponse;
- (bool)groupsTextFields;
- (void)incrementDisplayCount;
- (id)init;
- (id)initWithAuthenticationChallege:(id)arg1;
- (id)initWithDialogDictionary:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithOfferDeviceError:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isDisplayable;
- (bool)isEqual:(id)arg1;
- (long long)kind;
- (long long)maximumDisplayCount;
- (id)message;
- (bool)noDefaultButton;
- (bool)oneButtonPerLine;
- (id)paymentSheet;
- (void)setAllowDuplicates:(bool)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setAuthorizationIsForced:(bool)arg1;
- (void)setButtons:(id)arg1;
- (void)setButtonsWithTitles:(id)arg1;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)setDismissOnHomeButton:(bool)arg1;
- (void)setDismissOnLock:(bool)arg1;
- (void)setDisplayCountKey:(id)arg1;
- (void)setDisplaysOnLockscreen:(bool)arg1;
- (void)setExpectsResponse:(bool)arg1;
- (void)setGroupsTextFields:(bool)arg1;
- (void)setKind:(long long)arg1;
- (void)setMaximumDisplayCount:(long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setNoDefaultButton:(bool)arg1;
- (void)setOneButtonPerLine:(bool)arg1;
- (void)setShouldDismissAfterUnlock:(bool)arg1;
- (void)setShouldDisplayAsTopMost:(bool)arg1;
- (void)setShouldPendInSetupIfNotAllowed:(bool)arg1;
- (void)setTextFields:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTouchIDContinueToken:(id)arg1;
- (void)setUnlockActionButtonIndex:(long long)arg1;
- (void)setValue:(void*)arg1 forCFUserNotificationKey:(struct __CFString { }*)arg2;
- (void)setValue:(id)arg1 forUserInfoKey:(id)arg2;
- (bool)shouldDismissAfterUnlock;
- (bool)shouldDisplayAsTopMost;
- (bool)shouldPendInSetupIfNotAllowed;
- (id)textFields;
- (id)title;
- (id)touchIDContinueToken;
- (long long)unlockActionButtonIndex;
- (id)valueForUserInfoKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

+ (id)ITunesStoreNotAvailableDialog;

@end