/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAggregatedDataSection : NSObject {
    NSIndexSet * _childDataSourceIndexes;
    NSArray * _childDataSourcesWithContent;
    NSArray * _dataSources;
    long long  _numberOfItems;
}

@property (nonatomic, readonly) NSArray *dataSources;
@property (nonatomic, readonly) long long numberOfItems;

- (void).cxx_destruct;
- (id)_childDataSourceForIndex:(long long)arg1 adjustedIndex:(long long*)arg2;
- (id)dataSources;
- (id)initWithDataSources:(id)arg1;
- (long long)numberOfItems;
- (id)objectAtIndex:(long long)arg1;

@end
