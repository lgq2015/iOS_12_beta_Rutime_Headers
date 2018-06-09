/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactInlineActionsViewController : UIViewController <CNActionsViewProtocol, CNContactActionsControllerDelegate, CNUIObjectViewController, CNUIUserActionListConsumer> {
    NSArray * _actionItems;
    CNUIUserActionListDataSource * _actionListDataSource;
    double  _actionTypesInterspace;
    CNContactActionsController * _actionsController;
    <CNCustomPresentation> * _actionsControllerPresentation;
    CNActionsView * _actionsView;
    CNContact * _contact;
    NSDictionary * _defaultActionPerType;
    <CNContactInlineActionsViewControllerDelegate> * _delegate;
    bool  _displaysTitles;
    bool  _displaysUnavailableActionTypes;
    <CNSchedulerProvider> * _schedulerProvider;
    NSArray * _supportedActionTypes;
    NSArray * _tokens;
    long long  _viewStyle;
    <CNUIObjectViewControllerDelegate> * objectViewControllerDelegate;
}

@property (nonatomic, copy) NSArray *actionItems;
@property (nonatomic, retain) CNUIUserActionListDataSource *actionListDataSource;
@property (nonatomic) double actionTypesInterspace;
@property (nonatomic, retain) CNContactActionsController *actionsController;
@property (nonatomic, retain) <CNCustomPresentation> *actionsControllerPresentation;
@property (nonatomic) CNActionsView *actionsView;
@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDictionary *defaultActionPerType;
@property (nonatomic) <CNContactInlineActionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displaysTitles;
@property (nonatomic) bool displaysUnavailableActionTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CNUIObjectViewControllerDelegate> *objectViewControllerDelegate;
@property (nonatomic, retain) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedActionTypes;
@property (nonatomic, readonly) double throttleDelay;
@property (nonatomic, copy) NSArray *tokens;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic) long long viewStyle;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)actionItems;
- (id)actionListDataSource;
- (double)actionTypesInterspace;
- (id)actionsController;
- (id)actionsControllerPresentation;
- (id)actionsView;
- (id)allModelsObservable;
- (id)contact;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (void)dealloc;
- (id)defaultActionPerType;
- (id)delegate;
- (void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(bool)arg3;
- (void)discoverAvailableActionTypes;
- (void)displayActionForType:(id)arg1 withDefaultAction:(id)arg2 enabled:(bool)arg3;
- (void)displayAdditionalActionItems:(id)arg1;
- (void)displayAllSupportedTypesDisabled;
- (bool)displaysTitles;
- (bool)displaysUnavailableActionTypes;
- (id)existingActionItemForType:(id)arg1;
- (id)initWithActionListDataSource:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)makeActionItemForType:(id)arg1;
- (id)objectViewControllerDelegate;
- (void)performAction:(id)arg1;
- (void)processModels:(id)arg1;
- (void)removeActionForType:(id)arg1;
- (void)removeVisibleActionItems:(id)arg1;
- (void)reset;
- (id)schedulerProvider;
- (void)setActionItems:(id)arg1;
- (void)setActionListDataSource:(id)arg1;
- (void)setActionTypesInterspace:(double)arg1;
- (void)setActionsController:(id)arg1;
- (void)setActionsControllerPresentation:(id)arg1;
- (void)setActionsView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDefaultActionPerType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysTitles:(bool)arg1;
- (void)setDisplaysUnavailableActionTypes:(bool)arg1;
- (void)setObjectViewControllerDelegate:(id)arg1;
- (void)setSchedulerProvider:(id)arg1;
- (void)setSupportedActionTypes:(id)arg1;
- (void)setTokens:(id)arg1;
- (void)setViewStyle:(long long)arg1;
- (void)showDisambiguationFromSourceView:(id)arg1 actionType:(id)arg2;
- (id)supportedActionTypes;
- (double)throttleDelay;
- (id)tokens;
- (void)updateActionItem:(id)arg1 withDefaultAction:(id)arg2;
- (void)updateDesiredTitleFontSizeIfNeeded;
- (void)updateVisibleActionItems:(id)arg1;
- (void)viewDidLoad;
- (long long)viewStyle;

@end