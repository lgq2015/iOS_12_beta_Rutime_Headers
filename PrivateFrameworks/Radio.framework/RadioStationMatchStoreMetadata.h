/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationMatchStoreMetadata : RadioStationMatchMetadata {
    NSNumber * _storeID;
}

@property (nonatomic, copy) NSNumber *storeID;

+ (id)metadataKey;

- (void).cxx_destruct;
- (id)copyMetadataDictionary;
- (void)setStoreID:(id)arg1;
- (id)storeID;

@end
