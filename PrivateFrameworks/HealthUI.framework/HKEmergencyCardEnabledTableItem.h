/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem {
    UITableViewCell * _cell;
    UISwitch * _switch;
}

- (void).cxx_destruct;
- (id)_cell;
- (void)_switchSwitched:(id)arg1;
- (id)initInEditMode:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (id)titleForFooter;
- (id)titleForHeader;

@end