/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryMediaEntityShelvesViewModel : NSObject {
    id /* block */  _configureShelfViewControllerBlock;
    id /* block */  _shelfTypeComparator;
    NSArray * _shelfTypes;
    NSDictionary * _shelfViewControllerByShelfType;
}

@property (nonatomic, copy) id /* block */ configureShelfViewControllerBlock;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, copy) id /* block */ shelfTypeComparator;
@property (nonatomic, retain) NSArray *shelfTypes;
@property (nonatomic, retain) NSDictionary *shelfViewControllerByShelfType;

+ (id)_shelfTypesWithMediaEntitiesMap:(id)arg1 shelfTypeComparator:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_shelfCollectionViewControllerWithType:(id)arg1 mediaEntities:(id)arg2;
- (void)_updateWithMediaEntitiesMap:(id)arg1 shelfTypes:(id)arg2;
- (id /* block */)configureShelfViewControllerBlock;
- (bool)hasContent;
- (id)init;
- (id)initWithMediaEntitiesMap:(id)arg1 shelfTypeComparator:(id /* block */)arg2 configureShelfViewControllerBlock:(id /* block */)arg3;
- (void)setConfigureShelfViewControllerBlock:(id /* block */)arg1;
- (void)setShelfTypeComparator:(id /* block */)arg1;
- (void)setShelfTypes:(id)arg1;
- (void)setShelfViewControllerByShelfType:(id)arg1;
- (id /* block */)shelfTypeComparator;
- (id)shelfTypes;
- (id)shelfViewControllerByShelfType;
- (id)shelfViewControllerForShelfTypeIndex:(unsigned long long)arg1;
- (void)updateContainerCollectionView:(id)arg1 section:(unsigned long long)arg2 mediaEntitiesMap:(id)arg3 mediaEntitiesChangeSetMap:(id)arg4;

@end
