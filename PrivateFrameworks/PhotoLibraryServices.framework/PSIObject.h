/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIObject : NSObject <NSCopying> {
    NSMutableDictionary * _synonymsByOriginalWord;
    NSArray * _tokens;
    NSString * _uuid;
}

@property (nonatomic, readonly, retain) NSArray *tokens;
@property (setter=setUUID:, nonatomic, copy) NSString *uuid;

- (id)_initForCopy:(bool)arg1;
- (void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (void)addContentString:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4;
- (void)addIdentifier:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (void)addSynonym:(id)arg1 category:(short)arg2 originalContentString:(id)arg3;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateSynonymsForOriginalContentString:(id)arg1 handler:(id /* block */)arg2;
- (id)initForReverse;
- (id)initWithUUID:(id)arg1;
- (void)reverse;
- (void)setUUID:(id)arg1;
- (id)tokens;
- (id)uuid;

@end
