/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVSceneTaxonomy : NSObject {
    NSURL * _graphURL;
    NSBundle * _localizationBundle;
    NSMapTable * _nameIndex;
    PVSceneTaxonomyNode * _rootNode;
    NSMapTable * _sceneClassIndex;
    NSString * _sha256Hash;
    NSString * _tableName;
}

@property (copy) NSURL *graphURL;
@property (retain) NSBundle *localizationBundle;
@property (retain) NSMapTable *nameIndex;
@property (readonly) PVSceneTaxonomyNode *rootNode;
@property (retain) NSMapTable *sceneClassIndex;
@property (readonly, copy) NSString *sha256Hash;
@property (copy) NSString *tableName;

+ (id)sharedTaxonomy;

- (void).cxx_destruct;
- (id)buildNodesFromGraphURL:(id)arg1 sha256Hash:(id*)arg2;
- (id)description;
- (id)graphURL;
- (id)init;
- (id)initWithGraphURL:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3;
- (id)localizationBundle;
- (id)nameIndex;
- (id)nodeForName:(id)arg1;
- (id)nodeForSceneClassId:(unsigned int)arg1;
- (void)putNodeInIndex:(id)arg1;
- (id)rootNode;
- (id)sceneClassIndex;
- (void)setGraphURL:(id)arg1;
- (void)setLocalizationBundle:(id)arg1;
- (void)setNameIndex:(id)arg1;
- (void)setSceneClassIndex:(id)arg1;
- (void)setTableName:(id)arg1;
- (id)sha256Hash;
- (id)tableName;

@end