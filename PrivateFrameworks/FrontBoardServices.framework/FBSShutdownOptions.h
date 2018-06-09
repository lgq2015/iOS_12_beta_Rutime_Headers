/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSShutdownOptions : NSObject <BSXPCCoding, NSCopying> {
    NSString * _reason;
    long long  _rebootType;
    long long  _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic) long long rebootType;
@property (nonatomic) long long source;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithReason:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)reason;
- (long long)rebootType;
- (void)setRebootType:(long long)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end