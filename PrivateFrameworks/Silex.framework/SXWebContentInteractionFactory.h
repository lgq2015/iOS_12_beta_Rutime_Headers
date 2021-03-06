/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentInteractionFactory : NSObject <SXWebContentInteractionFactory> {
    <SXWebContentNavigationManager> * _navigationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXWebContentNavigationManager> *navigationManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithNavigationManager:(id)arg1;
- (id)interactionForDictionary:(id)arg1;
- (id)navigationManager;

@end
