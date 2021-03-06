/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKJSONLDGraph : NSObject {
    void _entities;
    void queue;
}

@property (nonatomic, readonly) NSArray *entities;

- (id /* block */).cxx_destruct;
- (id)entities;
- (id)init;
- (id)initWithEntities:(id)arg1;
- (void)linkedDataWithCompletionHandler:(id /* block */)arg1;

@end
