/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFSecCMSEncoder : MFBufferedDataConsumer {
    int  _SecCMSError;
    struct SecCmsEncoderStr { } * _encoder;
    struct SecCmsMessageStr { } * _message;
    NSMutableData * _singleShot;
}

@property (nonatomic, readonly) int lastSecCMSError;

- (void)_appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)initForEncryptionWithCompositionSpecification:(id)arg1 error:(id*)arg2;
- (id)initForSigningWithSender:(id)arg1 compositionSpecification:(id)arg2 error:(id*)arg3;
- (int)lastSecCMSError;

@end