/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REFeatureMap : NSObject <MLFeatureProvider, NSCopying, REIndentedDescription> {
    unsigned long long  _hash;
    NSDictionary * _indicies;
    NSPointerArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long featureCount;
@property (nonatomic, readonly) NSSet *featureNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultFeatureName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (void)enumerateBoolFeaturesUsingBlock:(id /* block */)arg1;
- (void)enumerateDoubleFeaturesUsingBlock:(id /* block */)arg1;
- (void)enumerateEmptyFeaturesUsingBlock:(id /* block */)arg1;
- (void)enumerateFeaturesUsingBlock:(id /* block */)arg1;
- (void)enumerateInt64FeaturesUsingBlock:(id /* block */)arg1;
- (void)enumerateInt64FeaturesUsingIndexedBlock:(id /* block */)arg1 emptyFeatureBlock:(id /* block */)arg2;
- (void)enumerateStringFeaturesUsingBlock:(id /* block */)arg1;
- (unsigned long long)featureCount;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (bool)hasValueForFeature:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFeatureMap:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeValueForFeature:(id)arg1;
- (void)setValue:(id)arg1 forFeature:(id)arg2;
- (id)valueForFeature:(id)arg1;

@end