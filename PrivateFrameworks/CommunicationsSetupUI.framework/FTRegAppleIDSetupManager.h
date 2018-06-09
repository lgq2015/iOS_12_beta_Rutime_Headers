/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface FTRegAppleIDSetupManager : NSObject {
    NSArray * _candidateAliases;
    IDSAccountController * _faceTimeAccountController;
    id /* block */  _handler;
    IDSAccountController * _iMessageAccountController;
    NSArray * _selectedAliases;
    NSString * _selectionSummaryText;
    NSMutableDictionary * _setupOperations;
}

@property (nonatomic, copy) NSArray *candidateAliases;
@property (nonatomic, retain) IDSAccountController *faceTimeAccountController;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) IDSAccountController *iMessageAccountController;
@property (nonatomic, copy) NSArray *selectedAliases;
@property (nonatomic, copy) NSString *selectionSummaryText;
@property (nonatomic, retain) NSMutableDictionary *setupOperations;
@property (nonatomic, readonly) bool shouldShowAliasSelectionUI;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_aliasesForDictionary:(id)arg1;
- (id)_appleID;
- (void)_cleanup;
- (void)_notifyFailureWithError:(id)arg1;
- (void)_notifySuccess;
- (void)_notifySuccess:(bool)arg1 error:(id)arg2;
- (bool)_shouldAttemptAccountRegistration;
- (bool)_shouldShowAliasSelectionUI;
- (void)_updateCandidateAliases;
- (void)_updateSelectionSummaryText;
- (id)accountControllerForService:(id)arg1;
- (void)addSetupDictionary:(id)arg1 forService:(long long)arg2;
- (bool)aliasIsEnabled:(id)arg1;
- (bool)beginSetupWithCompletionHandler:(id /* block */)arg1;
- (id)candidateAliases;
- (id)faceTimeAccountController;
- (id /* block */)handler;
- (id)iMessageAccountController;
- (id)init;
- (id)phoneNumberDisplayString;
- (id)selectedAliases;
- (id)selectionSummaryText;
- (void)setCandidateAliases:(id)arg1;
- (void)setFaceTimeAccountController:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIMessageAccountController:(id)arg1;
- (void)setSelectedAliases:(id)arg1;
- (void)setSelectionSummaryText:(id)arg1;
- (void)setSetupOperations:(id)arg1;
- (id)setupOperations;
- (bool)shouldShowAliasSelectionUI;
- (bool)showsPhoneNumberDisplayString;

@end