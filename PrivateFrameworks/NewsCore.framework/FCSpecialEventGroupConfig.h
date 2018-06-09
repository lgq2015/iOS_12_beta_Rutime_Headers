/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSpecialEventGroupConfig : FCGroupConfig {
    NSArray * _breakingNewsArticleIDs;
    NSArray * _specialEventArticleIDs;
    NSArray * _specialEventItems;
    NSDictionary * _specialEventsArticleMetadataByArticleID;
}

@property (nonatomic, retain) NSArray *breakingNewsArticleIDs;
@property (nonatomic, readonly) NSString *groupMicaAnimationFileURLString;
@property (nonatomic, readonly) NSString *groupMicaAnimationFileURLStringiPad;
@property (nonatomic, retain) NSArray *specialEventArticleIDs;
@property (nonatomic, retain) NSArray *specialEventItems;
@property (nonatomic, readonly) NSDictionary *specialEventsArticleMetadataByArticleID;

- (void).cxx_destruct;
- (id)breakingNewsArticleIDs;
- (id)groupMicaAnimationFileURLString;
- (id)groupMicaAnimationFileURLStringiPad;
- (id)initWithDictionary:(id)arg1;
- (void)setBreakingNewsArticleIDs:(id)arg1;
- (void)setSpecialEventArticleIDs:(id)arg1;
- (void)setSpecialEventItems:(id)arg1;
- (id)specialEventArticleIDs;
- (id)specialEventItems;
- (id)specialEventsArticleMetadataByArticleID;

@end