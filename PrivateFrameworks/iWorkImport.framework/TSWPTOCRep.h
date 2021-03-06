/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCRep : TSWPShapeRep

+ (id)TOCReferenceNameWithParagraphIndex:(unsigned long long)arg1;

- (bool)canMakePathEditable;
- (unsigned long long)charIndexAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)hyperlinkRegions;
- (unsigned long long)i_indexOfHitTOCEntryAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)i_paragraphStyleAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)paragraphStylesBetweenCharIndex:(unsigned long long)arg1 andCharIndex:(unsigned long long)arg2;
- (bool)shouldCreateKnobs;
- (bool)shouldShowKnobs;
- (void)showTableOfContentsEditingCollaborationHUDAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)tocInfo;

@end
