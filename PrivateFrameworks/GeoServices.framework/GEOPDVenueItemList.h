/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVenueItemList : PBCodable <NSCopying> {
    NSMutableArray * _items;
    NSString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)itemType;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)items;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
