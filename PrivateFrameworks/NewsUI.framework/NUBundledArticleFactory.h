/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUBundledArticleFactory : NSObject <NUArticleFactory> {
    FCArticleController * _articleController;
}

@property (nonatomic, readonly) FCArticleController *articleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)articleController;
- (id)createArticlesForArticleIDs:(id)arg1;
- (id)initWithArticleController:(id)arg1;

@end