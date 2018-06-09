/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableMedicalRecord : PBCodable <HDDecoding, NSCopying> {
    bool  _enteredInError;
    long long  _extractionVersion;
    HDCodableFHIRIdentifier * _fHIRIdentifier;
    struct { 
        unsigned int extractionVersion : 1; 
        unsigned int modifiedDate : 1; 
        unsigned int enteredInError : 1; 
    }  _has;
    double  _modifiedDate;
    NSString * _note;
    HDCodableSample * _sample;
    HDCodableSemanticDate * _sortDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enteredInError;
@property (nonatomic) long long extractionVersion;
@property (nonatomic, retain) HDCodableFHIRIdentifier *fHIRIdentifier;
@property (nonatomic) bool hasEnteredInError;
@property (nonatomic) bool hasExtractionVersion;
@property (nonatomic, readonly) bool hasFHIRIdentifier;
@property (nonatomic) bool hasModifiedDate;
@property (nonatomic, readonly) bool hasNote;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic, readonly) bool hasSortDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) double modifiedDate;
@property (nonatomic, retain) NSString *note;
@property (nonatomic, retain) HDCodableSample *sample;
@property (nonatomic, retain) HDCodableSemanticDate *sortDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enteredInError;
- (long long)extractionVersion;
- (id)fHIRIdentifier;
- (bool)hasEnteredInError;
- (bool)hasExtractionVersion;
- (bool)hasFHIRIdentifier;
- (bool)hasModifiedDate;
- (bool)hasNote;
- (bool)hasSample;
- (bool)hasSortDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modifiedDate;
- (id)note;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setEnteredInError:(bool)arg1;
- (void)setExtractionVersion:(long long)arg1;
- (void)setFHIRIdentifier:(id)arg1;
- (void)setHasEnteredInError:(bool)arg1;
- (void)setHasExtractionVersion:(bool)arg1;
- (void)setHasModifiedDate:(bool)arg1;
- (void)setModifiedDate:(double)arg1;
- (void)setNote:(id)arg1;
- (void)setSample:(id)arg1;
- (void)setSortDate:(id)arg1;
- (id)sortDate;
- (void)writeTo:(id)arg1;

@end