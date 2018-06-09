/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteQueryPlan : NSObject {
    bool  _includesTableScan;
    NSArray * _indices;
    NSArray * _queryPlanRows;
    bool  _usesCoveringIndex;
    bool  _usesIndex;
}

@property (nonatomic, readonly) bool includesTableScan;
@property (nonatomic, readonly) NSArray *indices;
@property (nonatomic, readonly, copy) NSArray *queryPlanRows;
@property (nonatomic, readonly) bool usesCoveringIndex;
@property (nonatomic, readonly) bool usesIndex;

- (void).cxx_destruct;
- (id)description;
- (bool)includesTableScan;
- (id)indices;
- (id)initWithQueryPlanRows:(id)arg1;
- (id)queryPlanRows;
- (bool)usesCoveringIndex;
- (bool)usesIndex;

@end