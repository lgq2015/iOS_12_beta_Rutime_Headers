/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIHandwritingCandidate : TIKeyboardCandidateSingle {
    unsigned long long  _completionUniqueID;
    unsigned long long  _uniqueID;
}

@property (nonatomic, readonly) unsigned long long completionUniqueID;
@property (nonatomic, readonly) unsigned long long uniqueID;

+ (bool)supportsSecureCoding;
+ (int)type;

- (unsigned long long)completionUniqueID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 uniqueID:(unsigned long long)arg3 completionUniqueID:(unsigned long long)arg4;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCompletionCandidate;
- (bool)isInlineCompletionCandidate;
- (unsigned long long)uniqueID;

@end