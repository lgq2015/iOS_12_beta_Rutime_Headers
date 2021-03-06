/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAutoFillAssociatedDomainsManager : NSObject {
    NSMutableDictionary * _domainToDomainsWithAssociatedCredentials;
    NSArray * _domainsWithAssociatedCredentials;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic, copy) NSArray *domainsWithAssociatedCredentials;

- (void).cxx_destruct;
- (void)_updateDomainToDomainsWithAssociatedCredentials;
- (id)domainsWithAssociatedCredentials;
- (id)domainsWithAssociatedCredentialsForDomain:(id)arg1;
- (id)init;
- (id)initWithDomainsWithAssociatedCredentials:(id)arg1;
- (void)setDomainsWithAssociatedCredentials:(id)arg1;

@end
