/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyDOMQuoteSubparser : MFMessageBodySubparser {
    id /* block */  _foundDedentedAttributionRangeBlock;
    id /* block */  _foundTrailingEmptyQuoteRangeBlock;
    <MFMessageBodyElement_Private> * _lastUnindentedAttributionHint;
    <MFMessageBodyElement_Private> * _lastUnindentedElement;
    unsigned long long  _trailingEmptyQuoteLevel;
    DOMRange * _trailingEmptyQuoteRange;
    unsigned long long  _unindentedSiblingGap;
    NSMutableArray * _unindentedSiblingNodes;
}

- (void)_enumerateSurroundableRangesInRange:(id)arg1 withBlock:(id /* block */)arg2;
- (void)copyBlocks;
- (void)dealloc;
- (bool)doesRange:(id)arg1 containAnyElementWithTagName:(id)arg2;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)setFoundDedentedAttributionRangeBlock:(id /* block */)arg1;
- (void)setFoundTrailingEmptyQuoteRangeBlock:(id /* block */)arg1;

@end
