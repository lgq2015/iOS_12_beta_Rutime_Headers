/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXRelationships : NSObject {
    unsigned long long  mNextId;
    NSString * mPath;
    NSMutableDictionary * mRelationshipMap;
    NSMutableArray * mRelationships;
}

- (id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3;
- (id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 external:(bool)arg4;
- (void)dealloc;
- (id)idForKey:(id)arg1;
- (id)initWithPath:(id)arg1;
- (bool)isEmpty;
- (id)path;
- (id)targetForKey:(id)arg1;
- (void)writeRelationshipsToFilename:(id)arg1 stream:(id)arg2;

@end