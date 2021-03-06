/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentObjectUUIDMap : NSObject <NSCopying, NSMutableCopying> {
    NSDictionary * _identifierToObjectUUIDDictionary;
    NSDictionary * _objectUUIDToIdentifierDictionary;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSDictionary *identifierToObjectUUIDDictionary;
@property (nonatomic, readonly) NSDictionary *objectUUIDToIdentifierDictionary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)enumerateIdentifiersAndObjectUUIDsUsingBlock:(id /* block */)arg1;
- (long long)identifierForObjectUUID:(id)arg1;
- (id)identifierToObjectUUIDDictionary;
- (id)init;
- (id)initWithIdentifierToObjectUUIDDictionary:(id)arg1 objectUUIDToIdentifierDictionary:(id)arg2;
- (id)initWithMessage:(const struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectUUIDForIdentifier:(long long)arg1;
- (id)objectUUIDToIdentifierDictionary;
- (void)saveToMessage:(struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x1; int x2; int x3; int x4; }*)arg1;

@end
