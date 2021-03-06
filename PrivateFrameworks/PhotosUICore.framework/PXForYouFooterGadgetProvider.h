/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouFooterGadgetProvider : PXGadgetProvider {
    bool  _attemptedToGenerateGadgets;
    long long  _footerState;
}

@property (nonatomic) bool attemptedToGenerateGadgets;
@property (nonatomic) long long footerState;

- (bool)_didProcessContentOvernight;
- (void)_generateFooterGadget;
- (void)_handleFaceProgressCompletionWithCountDictionary:(id)arg1;
- (void)_handleSceneProgressCompletionWithCountDictionary:(id)arg1;
- (id)_peaceMemoryFetchOptions;
- (bool)attemptedToGenerateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (long long)footerState;
- (void)generateGadgets;
- (void)loadDataForGadgets;
- (void)setAttemptedToGenerateGadgets:(bool)arg1;
- (void)setFooterState:(long long)arg1;

@end
