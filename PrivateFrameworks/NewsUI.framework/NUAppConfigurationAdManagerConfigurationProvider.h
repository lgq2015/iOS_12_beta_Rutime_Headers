/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUAppConfigurationAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider> {
    <FCNewsAppConfigurationManager> * _appConfigurationManager;
}

@property (nonatomic, readonly) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appConfigurationManager;
- (void)fetchConfigurationWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithAppConfigurationManager:(id)arg1;

@end
