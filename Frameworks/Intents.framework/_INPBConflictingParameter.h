/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBConflictingParameter : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBConflictingParameter> {
    NSArray * _alternateItems;
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSString * _keyPath;
}

@property (nonatomic, copy) NSArray *alternateItems;
@property (nonatomic, readonly) unsigned long long alternateItemsCount;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasKeyPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *keyPath;
@property (readonly) Class superclass;

+ (Class)alternateItemsType;

- (void).cxx_destruct;
- (void)addAlternateItems:(id)arg1;
- (id)alternateItems;
- (id)alternateItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternateItemsCount;
- (id)associatedCodableAttribute;
- (void)clearAlternateItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasKeyPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (bool)readFrom:(id)arg1;
- (void)setAlternateItems:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end