/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsDataSource : NSObject <UITableViewDataSource> {
    FIUIHealthSettingsTableViewCell * _biologicalSexCell;
    FIUIHealthSettingsTableViewCell * _birthDateCell;
    FIUIHealthSettingsBirthDatePickerController * _birthDatePickerController;
    FIUIHealthSettingsTableViewCell * _heightCell;
    FIUIHealthSettingsHeightPickerController * _heightPickerController;
    FIActivitySettingsController * _preEditSettingsController;
    FIActivitySettingsController * _settingsController;
    FIUIHealthSettingsSexPickerController * _sexPickerController;
    bool  _showWheelchair;
    FIUIHealthSettingsTableViewCell * _weightCell;
    FIUIHealthSettingsWeightPickerController * _weightPickerController;
    FIUIHealthSettingsTableViewCell * _wheelchairUseCell;
    FIUIHealthSettingsWheelchairUsePickerController * _wheelchairUsePickerController;
}

@property (nonatomic, retain) FIUIHealthSettingsBirthDatePickerController *birthDatePickerController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FIActivitySettingsController *editedSettingsController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FIUIHealthSettingsHeightPickerController *heightPickerController;
@property (nonatomic, retain) FIActivitySettingsController *settingsController;
@property (nonatomic, retain) FIUIHealthSettingsSexPickerController *sexPickerController;
@property (readonly) Class superclass;
@property (nonatomic, retain) FIUIHealthSettingsWeightPickerController *weightPickerController;
@property (nonatomic, retain) FIUIHealthSettingsWheelchairUsePickerController *wheelchairUsePickerController;

- (void).cxx_destruct;
- (void)_updateBiologicalSexCell;
- (void)_updateBirthDateCell;
- (void)_updateCells;
- (void)_updateHeightCell;
- (void)_updateWeightCell;
- (void)_updateWheelchairUseCell;
- (id)biologicalSexCell;
- (id)birthDateCell;
- (id)birthDatePickerController;
- (void)cellDidBecomeFirstResponder:(id)arg1;
- (void)cellDidResignFirstResponder:(id)arg1;
- (id)editedSettingsController;
- (void)endEditingAndDiscardChanges:(bool)arg1;
- (id)heightCell;
- (id)heightPickerController;
- (id)initWithActivitySettingsController:(id)arg1 showWheelchair:(bool)arg2;
- (void)setBirthDatePickerController:(id)arg1;
- (void)setHeightPickerController:(id)arg1;
- (void)setSettingsController:(id)arg1;
- (void)setSexPickerController:(id)arg1;
- (void)setWeightPickerController:(id)arg1;
- (void)setWheelchairUsePickerController:(id)arg1;
- (id)settingsController;
- (id)sexPickerController;
- (void)startEditing;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)weightCell;
- (id)weightPickerController;
- (id)wheelchairUseCell;
- (id)wheelchairUsePickerController;

@end