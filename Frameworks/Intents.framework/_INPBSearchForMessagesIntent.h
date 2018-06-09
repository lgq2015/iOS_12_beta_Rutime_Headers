/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForMessagesIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSearchForMessagesIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _attributes;
    _INPBStringList * _content;
    _INPBStringList * _conversationIdentifier;
    _INPBDateTimeRange * _dateTimeRange;
    _INPBStringList * _groupName;
    struct { }  _has;
    _INPBStringList * _identifier;
    _INPBIntentMetadata * _intentMetadata;
    _INPBStringList * _notificationIdentifier;
    _INPBContactList * _recipient;
    _INPBStringList * _searchTerm;
    _INPBContactList * _sender;
    _INPBDataStringList * _speakableGroupName;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, readonly) int*attributes;
@property (nonatomic, readonly) unsigned long long attributesCount;
@property (nonatomic, retain) _INPBStringList *content;
@property (nonatomic, retain) _INPBStringList *conversationIdentifier;
@property (nonatomic, retain) _INPBDateTimeRange *dateTimeRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBStringList *groupName;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasConversationIdentifier;
@property (nonatomic, readonly) bool hasDateTimeRange;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasNotificationIdentifier;
@property (nonatomic, readonly) bool hasRecipient;
@property (nonatomic, readonly) bool hasSearchTerm;
@property (nonatomic, readonly) bool hasSender;
@property (nonatomic, readonly) bool hasSpeakableGroupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBStringList *identifier;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBStringList *notificationIdentifier;
@property (nonatomic, retain) _INPBContactList *recipient;
@property (nonatomic, retain) _INPBStringList *searchTerm;
@property (nonatomic, retain) _INPBContactList *sender;
@property (nonatomic, retain) _INPBDataStringList *speakableGroupName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsAttributes:(id)arg1;
- (void)addAttribute:(int)arg1;
- (id)associatedCodableAttribute;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (int*)attributes;
- (id)attributesAsString:(int)arg1;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (id)content;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTimeRange;
- (id)dictionaryRepresentation;
- (id)groupName;
- (bool)hasContent;
- (bool)hasConversationIdentifier;
- (bool)hasDateTimeRange;
- (bool)hasGroupName;
- (bool)hasIdentifier;
- (bool)hasIntentMetadata;
- (bool)hasNotificationIdentifier;
- (bool)hasRecipient;
- (bool)hasSearchTerm;
- (bool)hasSender;
- (bool)hasSpeakableGroupName;
- (unsigned long long)hash;
- (id)identifier;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)notificationIdentifier;
- (bool)readFrom:(id)arg1;
- (id)recipient;
- (id)searchTerm;
- (id)sender;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setContent:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setDateTimeRange:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setNotificationIdentifier:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSpeakableGroupName:(id)arg1;
- (id)speakableGroupName;
- (void)writeTo:(id)arg1;

@end