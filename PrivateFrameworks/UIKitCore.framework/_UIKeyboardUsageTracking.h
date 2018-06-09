/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyboardUsageTracking : NSObject

+ (void)appAutofillCredentialFromSafariUI;
+ (void)appAutofillDetectedDecrement;
+ (void)appAutofillDetectedIncrement;
+ (void)appAutofillExtraKeyTapped;
+ (void)appAutofillFilled;
+ (void)countKeystrokeForReachableKeyboardWithBias:(long long)arg1;
+ (void)countReachableKeyboardHandBiasChangeToBias:(long long)arg1;
+ (void)dualStringsKeyFlickUpCount;
+ (void)inputSwitcherSetPredictionPreference:(bool)arg1;
+ (void)keyboardExtensionCrashed;
+ (void)keyboardExtensionPrimaryLanguageChanged;
+ (void)keyboardExtensionsOnDevice;
+ (void)keyboardGestureOneFingerForcePan:(bool)arg1;
+ (void)keyboardGestureOneFingerForcePress:(bool)arg1 withPressCount:(int)arg2;
+ (void)keyboardGestureSelectedPredictiveInputCandidate;
+ (void)keyboardGestureSetPredictionPreference:(bool)arg1;
+ (void)keyboardGestureTwoFingerTap:(bool)arg1 withTapCount:(int)arg2;
+ (void)keyboardPerformanceFromTouchRelease:(double)arg1 until:(double)arg2;
+ (void)keyboardPerformanceFromTouchStart:(double)arg1 until:(double)arg2;
+ (void)keyboardReachabilityDistribution:(double)arg1;
+ (void)keyboardSetToInputMode:(id)arg1 fromPrevious:(id)arg2;
+ (void)keyboardTotalOnScreenTime:(double)arg1 orientation:(long long)arg2;
+ (void)normalPunctuationKeyCount;
+ (void)panAlternateKeyFlickDownCount;
+ (void)predictionViewState:(bool)arg1 forInputMode:(id)arg2;
+ (void)redoKeyCount;
+ (void)restAndTypeTriggered;
+ (void)selectedPredictiveInputCandidate:(id)arg1 isAutocorrection:(bool)arg2 index:(unsigned long long)arg3;
+ (void)showCharacterPreviewPreference:(bool)arg1;
+ (void)showLowercaseKeyplanePreference:(bool)arg1;
+ (void)singleStringKeyFlickUpCount;
+ (void)undoKeyCount;

@end