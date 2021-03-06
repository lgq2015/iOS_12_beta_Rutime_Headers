/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REContentRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REUpNextMLModelManagerObserver> {
    REMLSentimentAnalyzer * _sentimentAnalyzer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_features;
+ (Class)_relevanceProviderClass;

- (void).cxx_destruct;
- (void)_closeDataStoresAndObserveChanges;
- (void)_openDataStoresAndObserveChanges;
- (bool)_suppportsPortarit;
- (bool)_suppportsSentimentAnalysis;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (void)modelManagerDidUpdateModel:(id)arg1;
- (void)predictorDidUpdate:(id)arg1;

@end
