/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIActivityViewController : UIActivityViewController {
    <SiriUIActivityViewControllerDelegate> * _delegate;
}

@property (nonatomic) <SiriUIActivityViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
