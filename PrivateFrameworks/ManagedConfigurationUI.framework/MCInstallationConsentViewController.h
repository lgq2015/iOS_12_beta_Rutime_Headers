/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCInstallationConsentViewController : UITableViewController <PSStateRestoration> {
    <MCInstallationConsentDelegate> * _consentDelegate;
    MCProfile * _profile;
    bool  _showInstall;
}

@property (nonatomic) <MCInstallationConsentDelegate> *consentDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MCProfile *profile;
@property (nonatomic) bool showInstall;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelInstallProfile;
- (void)_installProfile;
- (void)_setup;
- (bool)canBeShownFromSuspendedState;
- (id)consentDelegate;
- (void)didReceiveMemoryWarning;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)profile;
- (void)setConsentDelegate:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setShowInstall:(bool)arg1;
- (bool)showInstall;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end