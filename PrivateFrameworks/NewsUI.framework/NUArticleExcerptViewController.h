/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleExcerptViewController : UIViewController <NULoadable> {
    FCArticle * _article;
    NUArticleExcerptView * _excerptView;
    <NULoadingDelegate> * _loadingDelegate;
    NUArticleExcerptTraits * _traits;
}

@property (nonatomic, readonly) FCArticle *article;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUArticleExcerptView *excerptView;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NULoadingDelegate> *loadingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NUArticleExcerptTraits *traits;

- (void).cxx_destruct;
- (id)article;
- (id)excerptView;
- (id)initWithArticle:(id)arg1 traits:(id)arg2;
- (void)loadExcerptFromArticle:(id)arg1 completion:(id /* block */)arg2;
- (void)loadHeadlineImageFromArticle:(id)arg1 completion:(id /* block */)arg2;
- (id)loadingDelegate;
- (void)setLoadingDelegate:(id)arg1;
- (void)setTraits:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traits;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end