/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIToneController : PSViewController <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate> {
    TKTonePickerViewController * _tonePickerViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) TKTonePickerViewController *tonePickerViewController;

- (void).cxx_destruct;
- (void)_insertTonePickerView;
- (void)_updateReloadSpecifierInParentController;
- (void)dealloc;
- (void)setSpecifier:(id)arg1;
- (void)setTonePickerViewController:(id)arg1;
- (id)tonePickerViewController;
- (void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (void)viewDidLoad;

@end
