/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetID : NSObject <NSCopying> {
    NSData * _fileSignature;
    CKDPRecordIdentifier * _recordID;
    NSData * _referenceSignature;
    NSNumber * _size;
}

@property (nonatomic, readonly) NSData *fileSignature;
@property (nonatomic, readonly) CKDPRecordIdentifier *recordID;
@property (nonatomic, readonly) NSData *referenceSignature;
@property (nonatomic, readonly) NSNumber *size;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fileSignature;
- (unsigned long long)hash;
- (id)initWithRecordID:(id)arg1 fileSignature:(id)arg2 referenceSignature:(id)arg3 size:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)recordID;
- (id)referenceSignature;
- (id)size;

@end
