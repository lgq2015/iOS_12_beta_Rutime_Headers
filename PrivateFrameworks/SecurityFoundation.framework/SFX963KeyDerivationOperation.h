/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFX963KeyDerivationOperation : NSObject <SFKeyDerivingOperation> {
    id  _x963KeyDerivationOperationInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) <SFDigestOperation> *digestOperation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) <SFKeyDerivingOperation> *sharedSecretOperation;
@property (readonly) Class superclass;

+ (long long)keySource;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id*)arg3;
- (id)digestOperation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSharedSecretOperation:(id)arg1;
- (id)initWithSharedSecretOperation:(id)arg1 digestOperation:(id)arg2;
- (void)setDigestOperation:(id)arg1;
- (void)setSharedSecretOperation:(id)arg1;
- (id)sharedSecretOperation;

@end