/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXPeopleSuggester : PEXContactSuggester {
    id /* block */  _mockBlock;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (id)_makeDuetPeopleSuggester;
- (void)_processPeopleSuggestions:(id)arg1 favorites:(id)arg2 doRetry:(bool)arg3;
- (void)_refreshPeopleSuggestionsAndRetryIfNoResults:(bool)arg1;
- (void)clearCaches;
- (void)clearCachesWithoutRefreshing;
- (id)init;
- (id)initWithMock:(id /* block */)arg1;
- (void)refreshMockPeopleSuggestions;
- (void)waitForData;

@end
