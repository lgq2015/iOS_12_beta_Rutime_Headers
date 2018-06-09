/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIExploreTemplateElement : SKUIViewElement {
    bool  _usesSplits;
}

@property (nonatomic, readonly) NSArray *childViewElements;
@property (nonatomic, readonly) SKUIViewElement *leftSplit;
@property (nonatomic, readonly) SKUINavigationBarViewElement *navigationBarElement;
@property (nonatomic, readonly) SKUIViewElement *rightSplit;
@property (nonatomic, readonly) bool usesSplits;

- (void)_getLeftSplit:(id*)arg1 rightSplit:(id*)arg2;
- (id)childViewElements;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)leftSplit;
- (id)navigationBarElement;
- (id)rightSplit;
- (bool)usesSplits;

@end