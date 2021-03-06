/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleTopic : PBCodable <NSCopying> {
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort * _cohort;
    struct { 
        unsigned int isEligibleForGrouping : 1; 
        unsigned int isEligibleForGroupingIfFavorited : 1; 
        unsigned int isHidden : 1; 
    }  _has;
    bool  _isEligibleForGrouping;
    bool  _isEligibleForGroupingIfFavorited;
    bool  _isHidden;
    NSString * _tagID;
}

@property (nonatomic, retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *cohort;
@property (nonatomic, readonly) bool hasCohort;
@property (nonatomic) bool hasIsEligibleForGrouping;
@property (nonatomic) bool hasIsEligibleForGroupingIfFavorited;
@property (nonatomic) bool hasIsHidden;
@property (nonatomic, readonly) bool hasTagID;
@property (nonatomic) bool isEligibleForGrouping;
@property (nonatomic) bool isEligibleForGroupingIfFavorited;
@property (nonatomic) bool isHidden;
@property (nonatomic, retain) NSString *tagID;

- (id)cohort;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCohort;
- (bool)hasIsEligibleForGrouping;
- (bool)hasIsEligibleForGroupingIfFavorited;
- (bool)hasIsHidden;
- (bool)hasTagID;
- (unsigned long long)hash;
- (bool)isEligibleForGrouping;
- (bool)isEligibleForGroupingIfFavorited;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCohort:(id)arg1;
- (void)setHasIsEligibleForGrouping:(bool)arg1;
- (void)setHasIsEligibleForGroupingIfFavorited:(bool)arg1;
- (void)setHasIsHidden:(bool)arg1;
- (void)setIsEligibleForGrouping:(bool)arg1;
- (void)setIsEligibleForGroupingIfFavorited:(bool)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setTagID:(id)arg1;
- (id)tagID;
- (void)writeTo:(id)arg1;

@end
