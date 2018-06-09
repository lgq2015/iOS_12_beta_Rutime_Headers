/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDrawingVersionedDocument : TTVersionedDocument {
    ICDrawing * _drawing;
}

@property (nonatomic, retain) ICDrawing *drawing;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)drawing;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;
- (id)serializeCurrentVersion:(unsigned int*)arg1;
- (void)setDrawing:(id)arg1;

@end