/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceRegistry : NSObject {
    NSDictionary * _metadataDictionary;
}

@property (readonly) NSDictionary *metadataDictionary;

+ (void)setSharedRegistryMetadataURL:(id)arg1;
+ (id)sharedRegistry;
+ (id)sharedRegistryMetadataURL;

- (void).cxx_destruct;
- (id)documentResourceInfoForDigestString:(id)arg1 locator:(id)arg2;
- (id)documentResourceInfosForTags:(id)arg1;
- (id)init;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)initWithMetadataURL:(id)arg1;
- (id)localStrategyProviderForDocumentResourceInfos:(id)arg1;
- (id)metadataDictionary;

@end
