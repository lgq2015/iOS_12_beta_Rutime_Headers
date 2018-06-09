/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMDeclarationTransactionRecord : NSManagedObject

@property (nonatomic, copy) NSString *currentHash;
@property (nonatomic, retain) NSString *organizationIdentifier;
@property (nonatomic, copy) NSString *previousHash;
@property (nonatomic, copy) NSDate *timestamp;

+ (id)fetchRequestForDeclarationTransactionRecordsBelongingToOrganizationWithIdentifier:(id)arg1;

@end