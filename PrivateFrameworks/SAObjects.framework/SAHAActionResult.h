/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAActionResult : SADomainObject

@property (nonatomic, retain) SAHAEntity *entity;
@property (nonatomic, copy) NSString *outcome;
@property (nonatomic, copy) NSString *resultAttribute;
@property (nonatomic, retain) SAHAAttributeValue *resultValue;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)actionResult;
+ (id)actionResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)entity;
- (id)groupIdentifier;
- (id)outcome;
- (id)resultAttribute;
- (id)resultValue;
- (void)setEntity:(id)arg1;
- (void)setOutcome:(id)arg1;
- (void)setResultAttribute:(id)arg1;
- (void)setResultValue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)shortDescription;

@end