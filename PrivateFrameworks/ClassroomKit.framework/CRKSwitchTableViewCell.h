/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKSwitchTableViewCell : UITableViewCell {
    <CRKSwitchTableViewCellDelegate> * _delegate;
    UISwitch * _switchControl;
}

@property (nonatomic) <CRKSwitchTableViewCellDelegate> *delegate;
@property (nonatomic, readonly) UISwitch *switchControl;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)switchControl;
- (void)switchControlDidChangeValue:(id)arg1;

@end
