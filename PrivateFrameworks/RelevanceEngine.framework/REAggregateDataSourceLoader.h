/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REAggregateDataSourceLoader : REDataSourceLoader {
    NSOrderedSet * _loaders;
}

@property (nonatomic, copy) NSOrderedSet *loaders;

- (void).cxx_destruct;
- (void)_loadBundleConfigurationsUsingBlock:(id /* block */)arg1;
- (void)_loadClassesUsingBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)loaders;
- (void)setLoaders:(id)arg1;

@end
