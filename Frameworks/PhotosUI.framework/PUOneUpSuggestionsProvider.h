/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpSuggestionsProvider : NSObject

+ (id)defaultProviderWithAccessoryViewControllersManager:(id)arg1;

- (bool)canProvideSuggestionForAsset:(id)arg1;
- (id)requestSuggestionForAsset:(id)arg1 withResultHandler:(id /* block */)arg2;

@end
