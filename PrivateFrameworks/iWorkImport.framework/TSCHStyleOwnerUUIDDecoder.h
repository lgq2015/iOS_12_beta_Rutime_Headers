/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleOwnerUUIDDecoder : NSObject {
    unsigned long long  mIndex;
    unsigned char  mUUID;
}

+ (id)UUIDDecoderWithUUID:(id)arg1;

- (unsigned char)decodeByte;
- (unsigned long long)decodeNSUIntegerFromUInt64;
- (unsigned long long)decodeUInt64;
- (void)endDecode;
- (id)initWithUUID:(id)arg1;
- (bool)p_hasSpaceToDecodeNumberOfBytes:(unsigned long long)arg1;

@end
