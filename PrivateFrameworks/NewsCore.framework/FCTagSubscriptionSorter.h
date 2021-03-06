/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagSubscriptionSorter : NSObject {
    <FCTagRanking> * _tagRanker;
}

@property (nonatomic, readonly) <FCTagRanking> *tagRanker;

- (void).cxx_destruct;
- (id)initWithTagRanker:(id)arg1;
- (id)sortTagSubscriptions:(id)arg1;
- (id)tagRanker;

@end
