/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolDebuggerCallFrame : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *callFrameId;
@property (nonatomic, copy) NSString *functionName;
@property (nonatomic) bool isTailDeleted;
@property (nonatomic, retain) RWIProtocolDebuggerLocation *location;
@property (nonatomic, copy) NSArray *scopeChain;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *thisObject;

- (id)callFrameId;
- (id)functionName;
- (id)initWithCallFrameId:(id)arg1 functionName:(id)arg2 location:(id)arg3 scopeChain:(id)arg4 thisObject:(id)arg5 isTailDeleted:(bool)arg6;
- (bool)isTailDeleted;
- (id)location;
- (id)scopeChain;
- (void)setCallFrameId:(id)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setIsTailDeleted:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setScopeChain:(id)arg1;
- (void)setThisObject:(id)arg1;
- (id)thisObject;

@end