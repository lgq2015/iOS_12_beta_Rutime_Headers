/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFUuidData : NSData {
    unsigned char  _uuid;
}

@property (nonatomic, readonly) NSString *canonicalStringValue;
@property (nonatomic, readonly) NSData *dataValue;
@property (nonatomic, readonly) bool isNull;
@property (nonatomic, readonly) NSString *mercuryStringValue;

+ (id)generateUuidAsCanonicalString;
+ (id)generateUuidAsMercuryString;
+ (id)hostUuid;
+ (bool)isCanonicalUuidString:(id)arg1;
+ (bool)isMercuryBase64String:(id)arg1;
+ (bool)isMercuryUuidString:(id)arg1;
+ (bool)isSupportedUuidString:(id)arg1;
+ (id)nullUuid;
+ (id)randomUuid;
+ (id)uuidWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (id)uuidWithData:(id)arg1;
+ (id)uuidWithString:(id)arg1;

- (const void*)bytes;
- (id)canonicalStringValue;
- (Class)classForCoder;
- (id)dataValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initNull;
- (id)initRandom;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMercuryBase64String:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToData:(id)arg1;
- (bool)isNull;
- (unsigned long long)length;
- (id)mercuryStringValue;

@end