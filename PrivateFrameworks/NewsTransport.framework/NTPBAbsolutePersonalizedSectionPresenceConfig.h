/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBAbsolutePersonalizedSectionPresenceConfig : PBCodable <NSCopying> {
    double  _cTRToHide;
    double  _cTRToShow;
    struct { 
        unsigned int cTRToHide : 1; 
        unsigned int cTRToShow : 1; 
        unsigned int minProbabilityToShow : 1; 
        unsigned int sectionEdition : 1; 
    }  _has;
    double  _minProbabilityToShow;
    unsigned long long  _sectionEdition;
}

@property (nonatomic) double cTRToHide;
@property (nonatomic) double cTRToShow;
@property (nonatomic) bool hasCTRToHide;
@property (nonatomic) bool hasCTRToShow;
@property (nonatomic) bool hasMinProbabilityToShow;
@property (nonatomic) bool hasSectionEdition;
@property (nonatomic) double minProbabilityToShow;
@property (nonatomic) unsigned long long sectionEdition;

- (double)cTRToHide;
- (double)cTRToShow;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCTRToHide;
- (bool)hasCTRToShow;
- (bool)hasMinProbabilityToShow;
- (bool)hasSectionEdition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)minProbabilityToShow;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sectionEdition;
- (void)setCTRToHide:(double)arg1;
- (void)setCTRToShow:(double)arg1;
- (void)setHasCTRToHide:(bool)arg1;
- (void)setHasCTRToShow:(bool)arg1;
- (void)setHasMinProbabilityToShow:(bool)arg1;
- (void)setHasSectionEdition:(bool)arg1;
- (void)setMinProbabilityToShow:(double)arg1;
- (void)setSectionEdition:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end