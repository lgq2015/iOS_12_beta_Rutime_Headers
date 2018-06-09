/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpSearchIndexController : HLPRemoteDataController {
    HLPHelpBookController * _helpBookController;
    NSDictionary * _searchIndex;
}

@property (nonatomic, retain) HLPHelpBookController *helpBookController;
@property (nonatomic, retain) NSDictionary *searchIndex;

- (void).cxx_destruct;
- (id)getAllIdentifiersFromTree:(id)arg1 withMaxDepth:(int)arg2;
- (id)helpBookController;
- (id)mergeDictionary:(id)arg1 withDictionary:(id)arg2;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(id /* block */)arg1;
- (id)resultsWithSearchText:(id)arg1 localeCode:(id)arg2 searchTerms:(id*)arg3;
- (id)searchIndex;
- (id)searchTermsForSearchText:(id)arg1 localeCode:(id)arg2;
- (id)searchTree:(id)arg1 forQueryWord:(id)arg2 withMaxDepth:(int)arg3;
- (void)setHelpBookController:(id)arg1;
- (void)setSearchIndex:(id)arg1;

@end