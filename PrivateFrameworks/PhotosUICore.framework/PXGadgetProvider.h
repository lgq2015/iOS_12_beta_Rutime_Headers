/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGadgetProvider : NSObject <PXGadgetDelegate, PXMutableGadgetProvider> {
    <PXGadgetProviderDelegate> * _delegate;
    NSArray * _gadgets;
    bool  _invalidGadgets;
    bool  _isPerformingChanges;
    <PXGadgetDelegate> * _nextGadgetResponder;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy) NSArray *gadgets;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalidGadgets;
@property (nonatomic) bool isPerformingChanges;
@property (nonatomic) <PXGadgetDelegate> *nextGadgetResponder;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateIfNeeded;
- (void)addGadgets:(id)arg1;
- (id)delegate;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)gadget:(id)arg1 animateChanges:(id /* block */)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (bool)gadget:(id)arg1 transitionToViewController:(struct NSObject { Class x1; }*)arg2 animated:(bool)arg3;
- (struct NSObject { Class x1; }*)gadgetViewControllerHostingGadget:(id)arg1;
- (id)gadgets;
- (void)generateGadgets;
- (id)gridPresentation;
- (id)init;
- (void)insertGadgets:(id)arg1 atIndexes:(id)arg2;
- (bool)invalidGadgets;
- (bool)isPerformingChanges;
- (void)loadDataForGadgets;
- (id)nextGadgetResponder;
- (id)oneUpPresentation;
- (void)performChanges:(id /* block */)arg1;
- (void)removeAllGadgets;
- (void)removeGadgets:(id)arg1;
- (void)removeGadgetsAtIndexes:(id)arg1;
- (bool)scrollGadgetToVisible:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGadgets:(id)arg1;
- (void)setInvalidGadgets:(bool)arg1;
- (void)setIsPerformingChanges:(bool)arg1;
- (void)setNextGadgetResponder:(id)arg1;

@end
