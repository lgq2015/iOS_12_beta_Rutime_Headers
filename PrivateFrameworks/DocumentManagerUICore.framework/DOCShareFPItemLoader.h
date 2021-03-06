/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCShareFPItemLoader : NSObject <DOCShareFPItemLoader> {
    <DOCShareFPItemLoaderDelegate> * _delegate;
    bool  _didFailToLoad;
    bool  _didTimeOut;
    NSArray * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DOCShareFPItemLoaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) bool loadDidTimeOut;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithURLs:(id)arg1;
- (id)items;
- (bool)loadDidTimeOut;
- (void)notifyDelegate;
- (void)setDelegate:(id)arg1;
- (void)startLoadingItemsForURLs:(id)arg1;

@end
