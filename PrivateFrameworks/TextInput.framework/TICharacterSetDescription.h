/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TICharacterSetDescription : NSObject <NSCopying, NSSecureCoding> {
    long long  _baseIdentifier;
    NSCharacterSet * _characterSet;
    NSString * _charactersAddedToBase;
    bool  _inverted;
}

@property (nonatomic, readonly) long long baseIdentifier;
@property (nonatomic, readonly) NSCharacterSet *characterSet;
@property (nonatomic, copy) NSString *charactersAddedToBase;
@property (nonatomic, readonly) bool inverted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (long long)baseIdentifier;
- (id)characterSet;
- (id)charactersAddedToBase;
- (void)clearCachedCharacterSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBase:(long long)arg1 additionalCharacters:(id)arg2 inverted:(bool)arg3;
- (id)initWithBaseCharacterSet:(long long)arg1;
- (id)initWithCharactersInString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)inverted;
- (id)invertedSetDescription;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newCharacterSetFromDescription;
- (void)setCharactersAddedToBase:(id)arg1;

@end