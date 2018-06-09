/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDataClustering : NSObject {
    id /* block */  _distanceBlock;
    NSArray * _numericValueKeypaths;
}

@property (nonatomic, readonly, copy) id /* block */ distanceBlock;
@property (nonatomic, readonly) NSArray *numericValueKeypaths;

+ (id)clustering;
+ (id)clusteringWithDistanceBlock:(id /* block */)arg1;
+ (id)clusteringWithNumericValueKeypaths:(id)arg1;

- (void).cxx_destruct;
- (double**)createDistancesMatrixForDataset:(id)arg1;
- (id /* block */)distanceBlock;
- (void)freeDistancesMatrix:(double**)arg1 forDataset:(id)arg2;
- (id)initWithDistanceBlock:(id /* block */)arg1;
- (id)initWithNumericValueKeypaths:(id)arg1;
- (id)numericValueKeypaths;
- (id)performWithDataset:(id)arg1 progressBlock:(id /* block */)arg2;

@end