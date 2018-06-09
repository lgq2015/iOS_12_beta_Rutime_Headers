/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryCategory : PBCodable <NSCopying> {
    GEOLocalizedString * _displayName;
    GEOStyleAttributes * _styleAttributes;
    NSData * _suggestionEntryMetadata;
    PBUnknownFields * _unknownFields;
    GEOPDVenueIdentifier * _venueIdentifier;
}

@property (nonatomic, retain) GEOLocalizedString *displayName;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic, readonly) bool hasVenueIdentifier;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVenueIdentifier *venueIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDisplayName;
- (bool)hasStyleAttributes;
- (bool)hasSuggestionEntryMetadata;
- (bool)hasVenueIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setVenueIdentifier:(id)arg1;
- (id)styleAttributes;
- (id)suggestionEntryMetadata;
- (id)unknownFields;
- (id)venueIdentifier;
- (void)writeTo:(id)arg1;

@end