/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASVDialogNode : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;

+ (id)dialogNode;
+ (id)dialogNodeWithDictionary:(id)arg1 context:(id)arg2;

- (id)children;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setChildren:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end