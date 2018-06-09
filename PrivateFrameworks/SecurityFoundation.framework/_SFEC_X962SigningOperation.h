/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFEC_X962SigningOperation : NSObject <SFSigningOperation> {
    <SFDigestOperation> * _digestOperation;
    id  _x962SigningOperationInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) <SFDigestOperation> *digestOperation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) _SFECKeySpecifier *signingKeySpecifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)digestOperation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2;
- (void)setDigestOperation:(id)arg1;
- (void)setSigningKeySpecifier:(id)arg1;
- (id)sign:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (id)signingKeySpecifier;
- (id)verify:(id)arg1 withKey:(id)arg2 error:(id*)arg3;

@end