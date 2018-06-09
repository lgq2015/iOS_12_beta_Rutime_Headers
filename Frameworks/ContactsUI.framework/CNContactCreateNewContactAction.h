/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactCreateNewContactAction : CNContactAction <CNContactViewControllerDelegate> {
    CNContact * _createdContact;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) CNContact *createdContact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)createdContact;
- (void)performActionWithSender:(id)arg1;
- (id)presentingViewController;
- (void)setCreatedContact:(id)arg1;
- (void)setPresentingViewController:(id)arg1;

@end