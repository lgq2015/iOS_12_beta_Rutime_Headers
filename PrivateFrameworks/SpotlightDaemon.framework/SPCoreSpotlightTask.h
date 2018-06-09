/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SPCoreSpotlightTask : NSObject {
    bool  _canceled;
    id /* block */  _completionBlock;
    bool  _finished;
    bool  _hasPausedResults;
    NSMutableArray * _jobs;
    CSSearchQueryContext * _queryContext;
    long long  _queryID;
    NSString * _queryString;
    SPQueryResultsQueue * _resultsQueue;
    id /* block */  _scheduleBlock;
    struct __SIQuery { } * _siQuery;
    double  _startTime;
    bool  _willAsyncStart;
}

@property bool canceled;
@property (readonly) NSString *clientBundleID;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) bool finished;
@property (nonatomic) bool hasPausedResults;
@property (nonatomic, retain) NSMutableArray *jobs;
@property (nonatomic, retain) CSSearchQueryContext *queryContext;
@property (nonatomic) long long queryID;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, retain) SPQueryResultsQueue *resultsQueue;
@property (nonatomic, copy) id /* block */ scheduleBlock;
@property (nonatomic) struct __SIQuery { }*siQuery;
@property (nonatomic) double startTime;
@property (nonatomic) bool willAsyncStart;

+ (id)_makeBundleQueryStringWithBundleIDs:(id)arg1;
+ (id)_makeQueryStringWithQueryString:(id)arg1 queryContext:(id)arg2;
+ (struct __SIQuery { }*)_makeSIQueryWithQueryString:(id)arg1 queryContext:(id)arg2;

- (void).cxx_destruct;
- (bool)addJob:(id)arg1;
- (void)cancel;
- (bool)canceled;
- (id)clientBundleID;
- (id /* block */)completionBlock;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (bool)finished;
- (bool)hasPausedResults;
- (id)initWithQueryString:(id)arg1 queryContext:(id)arg2;
- (id)jobs;
- (void)pauseResults;
- (id)queryContext;
- (long long)queryID;
- (id)queryString;
- (void)removeJob:(id)arg1;
- (id)resultsQueue;
- (void)resumeResults;
- (void)schedule;
- (id /* block */)scheduleBlock;
- (void)setCanceled:(bool)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setFinished:(bool)arg1;
- (void)setHasPausedResults:(bool)arg1;
- (void)setJobs:(id)arg1;
- (void)setQueryContext:(id)arg1;
- (void)setQueryID:(long long)arg1;
- (void)setQueryString:(id)arg1;
- (void)setResultsQueue:(id)arg1;
- (void)setScheduleBlock:(id /* block */)arg1;
- (void)setSiQuery:(struct __SIQuery { }*)arg1;
- (void)setStartTime:(double)arg1;
- (void)setWillAsyncStart:(bool)arg1;
- (struct __SIQuery { }*)siQuery;
- (void)start;
- (double)startTime;
- (bool)willAsyncStart;

@end