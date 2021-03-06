/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFLoggerBackendOSLog : PFLoggerBackendAdapter {
    NSMutableDictionary * _osLogs;
    NSString * _sender;
}

+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;

- (void).cxx_destruct;
- (void)_logFromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg1 subsystem:(id)arg2 type:(unsigned int)arg3 message:(const char *)arg4;
- (bool)allowsConcurrentAccess;
- (bool)formatsMessage;
- (id)initWithSender:(id)arg1;
- (void)logFromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char *)arg7;
- (bool)outputsToDebuggerConsole;

@end
