/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSDispatchSource : NSObject <BSInvalidatable> {
    int  _activated;
    id /* block */  _cancelHandler;
    id /* block */  _eventHandler;
    int  _invalidated;
    NSObject<OS_dispatch_source> * _source;
    struct dispatch_source_type_s { } * _type;
}

@property (nonatomic, copy) id /* block */ cancelHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)cancelHandler;
- (void)dealloc;
- (id /* block */)eventHandler;
- (id)initWithType:(struct dispatch_source_type_s { }*)arg1 handle:(unsigned long long)arg2 mask:(unsigned long long)arg3 queue:(id)arg4 configureSourceBlock:(id /* block */)arg5;
- (void)invalidate;
- (void)resume;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setEventHandler:(id /* block */)arg1;

@end