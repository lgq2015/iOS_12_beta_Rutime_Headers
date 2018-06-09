/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKEmergencyContactRelationshipPicker : HKTableViewController {
    <_HKEmergencyContactRelationshipPickerDelegate> * _delegate;
    NSArray * _labels;
    NSArray * _tokens;
}

@property (nonatomic) <_HKEmergencyContactRelationshipPickerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_cancelTapped:(id)arg1;
- (id)delegate;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end