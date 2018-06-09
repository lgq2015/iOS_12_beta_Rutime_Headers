/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPXPCRecorder : _DPDataRecorder {
    _DPDaemonConnection * _connection;
}

@property (nonatomic, readonly) _DPDaemonConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (void)handleReturn:(bool)arg1 forSelector:(id)arg2 key:(id)arg3 values:(id)arg4 error:(id)arg5;
- (id)init;
- (id)initWithKey:(id)arg1;
- (void)recordBitValues:(id)arg1;
- (void)recordNumbers:(id)arg1;
- (void)recordStrings:(id)arg1;
- (void)recordWords:(id)arg1;

@end