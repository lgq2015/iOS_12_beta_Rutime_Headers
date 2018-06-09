/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SASharedCache : NSObject <SAJSONSerialization, SASerializable> {
    NSArray * _binaryLoadInfos;
    unsigned long long  _slide;
    NSUUID * _uuid;
}

@property (retain) NSArray *binaryLoadInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long slide;
@property (readonly) Class superclass;
@property (readonly) unsigned long long textSegmentsEndAddress;
@property (readonly) unsigned long long textSegmentsStartAddress;
@property (readonly) NSUUID *uuid;

+ (void)_doDscSymDirsWork:(id /* block */)arg1;
+ (void)_doSharedCachesWork:(id /* block */)arg1;
+ (void)addDSCSymData:(id)arg1;
+ (void)addDscSymDir:(id)arg1;
+ (void)applyBinaryLoadInfos:(id)arg1 sharedCacheUUID:(id)arg2 slide:(unsigned long long)arg3;
+ (id)classDictionaryKey;
+ (void)clearCaches;
+ (id)currentSharedCache;
+ (id)dscSymDirs;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; unsigned short x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2;
+ (id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 binaryLoadInfos:(id)arg3;
+ (id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 findMappingsIfUnknown:(bool)arg3;

- (void).cxx_destruct;
- (void)_findSharedCacheMappings;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; unsigned short x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (id)binaryLoadInfos;
- (id)debugDescription;
- (id)initWithUUID:(id)arg1 slide:(unsigned long long)arg2;
- (bool)matchesUUID:(unsigned char)arg1 slide:(unsigned long long)arg2;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; unsigned short x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (void)setBinaryLoadInfos:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)slide;
- (unsigned long long)textSegmentsEndAddress;
- (unsigned long long)textSegmentsStartAddress;
- (id)uuid;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end