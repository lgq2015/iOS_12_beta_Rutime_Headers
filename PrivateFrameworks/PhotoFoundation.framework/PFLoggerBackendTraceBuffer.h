/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFLoggerBackendTraceBuffer : PFLoggerBackendAdapter {
    NSDictionary * _traceBuffers;
}

@property (retain) NSDictionary *traceBuffers;

+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;

- (void).cxx_destruct;
- (bool)allowsConcurrentAccess;
- (id)init;
- (void)logFromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char *)arg7;
- (void)setTraceBuffers:(id)arg1;
- (id)traceBuffers;

@end
