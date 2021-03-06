/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFFlowCommand : SACFAbstractClientCommand

@property (nonatomic, copy) NSDictionary *jsDialogScripts;

+ (id)flowCommand;
+ (id)flowCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)jsDialogScripts;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setJsDialogScripts:(id)arg1;

@end
