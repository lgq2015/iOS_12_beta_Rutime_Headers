/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsWheelchairUsePickerController : FIUIHealthSettingsPickerController {
    id /* block */  _wheelchairUseUpdateHandler;
}

@property (nonatomic, copy) id /* block */ wheelchairUseUpdateHandler;

- (void).cxx_destruct;
- (long long)_wheelchairUseForRow:(long long)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)setWheelchairUse:(long long)arg1;
- (void)setWheelchairUseUpdateHandler:(id /* block */)arg1;
- (id /* block */)wheelchairUseUpdateHandler;

@end