/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetPropertySet : NSObject <PHAssetPropertySet> {
    PHAsset * _asset;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)entityName;
+ (bool)isToMany;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertiesToPrefetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)asset;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;

@end
