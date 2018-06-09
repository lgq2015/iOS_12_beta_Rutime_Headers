/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPHyperlinkSelection : TSKSelection {
    TSWPHyperlinkField * _hyperlinkField;
    <TSWPHyperlinkHostRepProtocol> * _hyperlinkRep;
    bool  _openInEditMode;
}

@property (nonatomic, readonly) TSWPHyperlinkField *hyperlinkField;
@property (nonatomic, readonly) <TSWPHyperlinkHostRepProtocol> *hyperlinkRep;
@property (nonatomic) bool openInEditMode;

+ (Class)archivedSelectionClass;
+ (id)selectionWithHyperlinkField:(id)arg1 rep:(id)arg2;

- (void).cxx_destruct;
- (id)hyperlinkField;
- (id)hyperlinkRep;
- (id)initWithHyperlinkField:(id)arg1 rep:(id)arg2;
- (bool)openInEditMode;
- (void)setOpenInEditMode:(bool)arg1;

@end