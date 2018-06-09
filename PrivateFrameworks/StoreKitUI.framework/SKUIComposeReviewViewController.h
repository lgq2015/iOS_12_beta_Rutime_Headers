/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIComposeReviewViewController : SUNavigationController <SKUIComposeReviewFormDelegate, UITextFieldDelegate> {
    bool  _edit;
    SKUIComposeReviewFormViewController * _formViewController;
    NSString * _nickname;
    UIAlertAction * _nicknameOKAction;
    bool  _nicknameShouldResetOnError;
    SUPlaceholderViewController * _placeholderViewController;
    SKUIWriteAReviewTemplateViewElement * _templateViewElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIComposeReviewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEdit, nonatomic) bool edit;
@property (nonatomic, readonly, copy) SKUIReviewMetadata *editedReviewMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKUIWriteAReviewTemplateViewElement *templateViewElement;

+ (bool)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (void)_attemptReviewSubmission;
- (void)_cancelAction:(id)arg1;
- (void)_finishLoadWithOutput:(id)arg1 error:(id)arg2;
- (void)_loadReviewWithURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_promptForNickname;
- (void)_sendDidCancel;
- (void)_sendDidSubmit;
- (void)_setNickname:(id)arg1;
- (void)_setNicknameShouldResetOnError:(bool)arg1;
- (void)composeReviewFormDidCancel:(id)arg1;
- (void)composeReviewFormDidSubmit:(id)arg1;
- (void)dealloc;
- (id)editedReviewMetadata;
- (id)init;
- (bool)isEdit;
- (void)loadReviewWithURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (long long)preferredStatusBarStyle;
- (void)setEdit:(bool)arg1;
- (void)setRating:(float)arg1;
- (void)setTemplateViewElement:(id)arg1;
- (void)submitReview;
- (id)templateViewElement;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;

@end