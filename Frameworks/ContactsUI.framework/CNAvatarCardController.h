/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarCardController : NSObject <CNAvatarCardControllerOrbTransitionDelegate, CNAvatarCardViewControllerDelegate, UIPreviewInteractionDelegatePrivate> {
    NSArray * _actionCategories;
    bool  _actionsNeedRefresh;
    UIAlertController * _alertController;
    CNAvatarView * _avatarView;
    bool  _bypassActionValidation;
    NSArray * _cardControllerConstraints;
    CNAvatarCardViewController * _cardViewController;
    NSArray * _contacts;
    <CNAvatarCardControllerDelegate> * _delegate;
    CNContactOrbHeaderView * _headerView;
    UIView * _highlightView;
    long long  _presentationResult;
    UIPreviewInteraction * _previewInteraction;
    UIGestureRecognizer * _rolloverGestureRecognizer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
    UITapGestureRecognizer * _tapGestureRecognizer;
    bool  _visible;
}

@property (nonatomic, copy) NSArray *actionCategories;
@property (nonatomic) bool actionsNeedRefresh;
@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic) CNAvatarView *avatarView;
@property (nonatomic) bool bypassActionValidation;
@property (nonatomic, retain) NSArray *cardControllerConstraints;
@property (nonatomic, retain) CNAvatarCardViewController *cardViewController;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAvatarCardControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNContactOrbHeaderView *headerView;
@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long presentationResult;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, retain) UIPreviewInteraction *previewInteraction;
@property (nonatomic, retain) UIGestureRecognizer *rolloverGestureRecognizer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (getter=isVisible, nonatomic, readonly) bool visible;

+ (bool)avatarCardEnabled;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(bool)arg1;
+ (bool)showsWithTapAndHold;

- (void).cxx_destruct;
- (id)_previewInteraction:(id)arg1 viewControllerPresentationForPresentingViewController:(id)arg2;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (bool)_previewInteractionShouldFinishTransitionToPreview:(id)arg1;
- (void)_setupAlertController;
- (void)_setupCardViewControllerWithContacts:(id)arg1;
- (void)_setupForCardControllerPresentation;
- (void)_updateCard;
- (void)_updateHeaderViewFrame;
- (id)actionCategories;
- (bool)actionsNeedRefresh;
- (id)alertController;
- (id)avatarView;
- (bool)bypassActionValidation;
- (id)cardControllerConstraints;
- (id)cardViewController;
- (id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (void)cardViewControllerDidDismiss:(id)arg1;
- (void)cardViewControllerWillDismiss:(id)arg1;
- (void)configurePreviewInteraction;
- (id)contact;
- (id)contacts;
- (id)delegate;
- (void)dismissAnimated:(bool)arg1;
- (void)dismissAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)headerView;
- (id)highlightView;
- (bool)isVisible;
- (id)message;
- (id)name;
- (void)orbTransitionDidEndTransition:(id)arg1;
- (void)orbTransitionDidPrepareTransition:(id)arg1 withContainerView:(id)arg2;
- (id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1;
- (void)presentAnimated:(bool)arg1;
- (void)presentAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (long long)presentationResult;
- (id)presentingViewController;
- (id)previewInteraction;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (id)rolloverGestureRecognizer;
- (void)setActionCategories:(id)arg1;
- (void)setActionsNeedRefresh:(bool)arg1;
- (void)setAlertController:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setBypassActionValidation:(bool)arg1;
- (void)setCardControllerConstraints:(id)arg1;
- (void)setCardViewController:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPresentationResult:(long long)arg1;
- (void)setPreviewInteraction:(id)arg1;
- (void)setRolloverGestureRecognizer:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)showContact;
- (void)showContact:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (id)tapGestureRecognizer;

@end