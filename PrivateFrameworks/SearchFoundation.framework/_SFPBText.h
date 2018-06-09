/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBText : PBCodable <NSSecureCoding, _SFPBText> {
    unsigned int  _maxLines;
    NSString * _text;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int maxLines;
@property (readonly) Class superclass;
@property (copy) NSString *text;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)maxLines;
- (bool)readFrom:(id)arg1;
- (void)setMaxLines:(unsigned int)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

+ (id)textWithString:(id)arg1;

@end