/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDParsecNoDataViewController : UIViewController {
    NSURL * _altURL;
    UIView * _container;
    UILabel * _errorLabel;
    bool  _inPlatter;
    NSString * _reason;
    NSString * _searchWebQuery;
}

@property (retain) NSURL *altURL;
@property (nonatomic) bool inPlatter;
@property (nonatomic, retain) NSString *reason;
@property (retain) NSString *searchWebQuery;

- (void).cxx_destruct;
- (id)altURL;
- (bool)inPlatter;
- (void)loadView;
- (void)manageDictionaries:(id)arg1;
- (id)manageDictionariesURL;
- (id)reason;
- (void)searchWeb:(id)arg1;
- (id)searchWebQuery;
- (void)setAltURL:(id)arg1;
- (void)setInPlatter:(bool)arg1;
- (void)setReason:(id)arg1;
- (void)setSearchWebQuery:(id)arg1;

@end
