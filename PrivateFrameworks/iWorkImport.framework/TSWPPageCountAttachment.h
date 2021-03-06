/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPageCountAttachment : TSWPNumberAttachment

- (bool)changesWithPageCount;
- (int)elementKind;
- (void)saveToArchiver:(id)arg1;
- (bool)shouldArchiveStringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3;

@end
