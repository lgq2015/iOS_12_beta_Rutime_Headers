/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenKeychainItem : NSObject {
    NSData * _accessControl;
    NSDictionary * _constraints;
    NSString * _label;
    id  _objectID;
    NSString * _tokenID;
}

@property (retain) NSData *accessControl;
@property (copy) NSDictionary *constraints;
@property (readonly, copy) NSData *encodedObjectID;
@property (readonly, copy) NSMutableDictionary *keychainAttributes;
@property (copy) NSString *label;
@property (readonly, copy) id objectID;
@property (retain) NSString *tokenID;

+ (id)accessControlForConstraints:(id)arg1 tokenID:(id)arg2 error:(id*)arg3;
+ (id)operationMap;

- (void).cxx_destruct;
- (id)accessControl;
- (id)constraints;
- (id)encodedObjectID;
- (id)initWithObjectID:(id)arg1;
- (id)keychainAttributes;
- (id)label;
- (id)objectID;
- (void)setAccessControl:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTokenID:(id)arg1;
- (id)tokenID;

@end