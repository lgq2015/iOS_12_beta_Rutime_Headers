/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPlayAudioMessageIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPlayAudioMessageIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSString * _messageIdentifier;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasMessageIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSString *messageIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasMessageIdentifier;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)messageIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end