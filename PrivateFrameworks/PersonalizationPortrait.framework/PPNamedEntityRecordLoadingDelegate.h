/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPNamedEntityRecordLoadingDelegate : NSObject {
    NSDate * _loadEntitiesDetectedSince;
    NSString * _name;
    id /* block */  _namedEntityRecordsCompletion;
    id /* block */  _namedEntityRecordsHandler;
    id /* block */  _namedEntityRecordsSetup;
    id /* block */  _recentNamedEntityRecordsCompletion;
    id /* block */  _recentNamedEntityRecordsHandler;
    id /* block */  _recentNamedEntityRecordsSetup;
    id /* block */  _resetNamedEntityRecordData;
}

@property (nonatomic, retain) NSDate *loadEntitiesDetectedSince;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) id /* block */ namedEntityRecordsCompletion;
@property (nonatomic, copy) id /* block */ namedEntityRecordsHandler;
@property (nonatomic, copy) id /* block */ namedEntityRecordsSetup;
@property (nonatomic, copy) id /* block */ recentNamedEntityRecordsCompletion;
@property (nonatomic, copy) id /* block */ recentNamedEntityRecordsHandler;
@property (nonatomic, copy) id /* block */ recentNamedEntityRecordsSetup;
@property (nonatomic, copy) id /* block */ resetNamedEntityRecordData;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)loadEntitiesDetectedSince;
- (id)name;
- (id /* block */)namedEntityRecordsCompletion;
- (id /* block */)namedEntityRecordsHandler;
- (id /* block */)namedEntityRecordsSetup;
- (id /* block */)recentNamedEntityRecordsCompletion;
- (id /* block */)recentNamedEntityRecordsHandler;
- (id /* block */)recentNamedEntityRecordsSetup;
- (id /* block */)resetNamedEntityRecordData;
- (void)setLoadEntitiesDetectedSince:(id)arg1;
- (void)setNamedEntityRecordsCompletion:(id /* block */)arg1;
- (void)setNamedEntityRecordsHandler:(id /* block */)arg1;
- (void)setNamedEntityRecordsSetup:(id /* block */)arg1;
- (void)setRecentNamedEntityRecordsCompletion:(id /* block */)arg1;
- (void)setRecentNamedEntityRecordsHandler:(id /* block */)arg1;
- (void)setRecentNamedEntityRecordsSetup:(id /* block */)arg1;
- (void)setResetNamedEntityRecordData:(id /* block */)arg1;

@end