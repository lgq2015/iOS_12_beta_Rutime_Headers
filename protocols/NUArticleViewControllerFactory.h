/* made by EzioChiu.
 */

@protocol NUArticleViewControllerFactory <NSObject>

@required

- (NUArticleExcerptViewController *)createArticleExcerptViewControllerWithArticle:(FCArticle *)arg1 traits:(NUArticleExcerptTraits *)arg2;
- (NUArticleViewController *)createArticleViewControllerWithArticle:(FCArticle *)arg1;
- (NUArticleWebViewController *)createArticleWebViewControllerWithArticle:(FCArticle *)arg1;
- (NSHashTable *)loadingListeners;

@end