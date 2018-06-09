/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOrganDonationRegisterViewController : UITableViewController <HKOrganDonationConnectionManagerDelegate, HKOrganDonationRegistrantDelegate, HKSimpleDataEntryItemToolbarDelegate> {
    UIFont * _bodyFont;
    NSString * _completionButtonTitle;
    HKOrganDonationConnectionManager * _connectionManager;
    UIButton * _continueButton;
    NSArray * _dataEntryItems;
    UIView * _footerView;
    UIView * _headerView;
    HKHealthStore * _healthStore;
    bool  _isLoading;
    bool  _isUpdate;
    UIActivityIndicatorView * _loadingIndicator;
    UIBarButtonItem * _loadingIndicatorBarButtonItem;
    _HKMedicalIDData * _medicalIDData;
    UIBarButtonItem * _nextButton;
    HKOrganDonationRegistrant * _registrant;
    id /* block */  _registrationCompletionHandler;
    UIBarButtonItem * _updateBarButtonItem;
}

@property (nonatomic, retain) NSString *completionButtonTitle;
@property (nonatomic, retain) NSArray *dataEntryItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _HKMedicalIDData *medicalIDData;
@property (nonatomic, retain) UIBarButtonItem *nextButton;
@property (nonatomic, retain) HKOrganDonationRegistrant *registrant;
@property (nonatomic, copy) id /* block */ registrationCompletionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createTableFooterView;
- (id)_createTableHeaderView;
- (void)_handleAppWillEnterForegroundNotification:(id)arg1;
- (void)_handleResponse:(id)arg1 status:(long long)arg2;
- (void)_headerTapped:(id)arg1;
- (void)_loadRegistrantInformationIfAvailableAndSetupRegisterView;
- (bool)_registrantIsUnderAge;
- (void)_reloadRegistrantInformationFromServer;
- (void)_setupRegisterViewWithDefaultDemographicsInformation;
- (void)_setupRegisterViewWithRegistrant:(id)arg1;
- (void)_setupRegisterViewWithRegistrant:(id)arg1 demographicsInformation:(id)arg2;
- (void)_toggleLoadingStatusIsLoading:(bool)arg1;
- (void)_toggleNextButtonEnabledState;
- (void)cancelButtonTapped:(id)arg1;
- (id)completionButtonTitle;
- (void)dataEntryItemDonePressed:(id)arg1;
- (void)dataEntryItemNextPressed:(id)arg1;
- (void)dataEntryItemPrevPressed:(id)arg1;
- (id)dataEntryItems;
- (void)dealloc;
- (void)focusItemAtIndex:(long long)arg1;
- (id)init;
- (id)medicalIDData;
- (id)nextButton;
- (void)nextButtonTapped:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)organDonationConnectionManagerDidRemoveCredential:(id)arg1;
- (void)organDonationConnectionManagerDidStoreCredential:(id)arg1;
- (void)organDonationRegistrantDidUpdateValue:(id)arg1;
- (id)registrant;
- (id /* block */)registrationCompletionHandler;
- (void)setCompletionButtonTitle:(id)arg1;
- (void)setDataEntryItems:(id)arg1;
- (void)setMedicalIDData:(id)arg1;
- (void)setNextButton:(id)arg1;
- (void)setRegistrant:(id)arg1;
- (void)setRegistrationCompletionHandler:(id /* block */)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end