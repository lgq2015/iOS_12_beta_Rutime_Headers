/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableMedicationRecord : PBCodable <HDDecoding, NSCopying> {
    NSString * _asserter;
    NSData * _assertionDate;
    long long  _assertionType;
    HDCodableMedicationDosageList * _dosages;
    NSData * _earliestDosageDate;
    NSData * _effectiveEndDate;
    NSData * _effectiveStartDate;
    struct { 
        unsigned int assertionType : 1; 
        unsigned int notTaken : 1; 
    }  _has;
    HDCodableMedicalRecord * _medicalRecord;
    HDCodableMedicalCodingList * _medicationCodings;
    bool  _notTaken;
    HDCodableMedicalCodingList * _reasonForUseCodings;
    HDCodableMedicalCodingListList * _reasonsNotTakenCodings;
    HDCodableMedicalCoding * _statusCoding;
}

@property (nonatomic, retain) NSString *asserter;
@property (nonatomic, retain) NSData *assertionDate;
@property (nonatomic) long long assertionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HDCodableMedicationDosageList *dosages;
@property (nonatomic, retain) NSData *earliestDosageDate;
@property (nonatomic, retain) NSData *effectiveEndDate;
@property (nonatomic, retain) NSData *effectiveStartDate;
@property (nonatomic, readonly) bool hasAsserter;
@property (nonatomic, readonly) bool hasAssertionDate;
@property (nonatomic) bool hasAssertionType;
@property (nonatomic, readonly) bool hasDosages;
@property (nonatomic, readonly) bool hasEarliestDosageDate;
@property (nonatomic, readonly) bool hasEffectiveEndDate;
@property (nonatomic, readonly) bool hasEffectiveStartDate;
@property (nonatomic, readonly) bool hasMedicalRecord;
@property (nonatomic, readonly) bool hasMedicationCodings;
@property (nonatomic) bool hasNotTaken;
@property (nonatomic, readonly) bool hasReasonForUseCodings;
@property (nonatomic, readonly) bool hasReasonsNotTakenCodings;
@property (nonatomic, readonly) bool hasStatusCoding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, retain) HDCodableMedicalCodingList *medicationCodings;
@property (nonatomic) bool notTaken;
@property (nonatomic, retain) HDCodableMedicalCodingList *reasonForUseCodings;
@property (nonatomic, retain) HDCodableMedicalCodingListList *reasonsNotTakenCodings;
@property (nonatomic, retain) HDCodableMedicalCoding *statusCoding;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (id)asserter;
- (id)assertionDate;
- (long long)assertionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dosages;
- (id)earliestDosageDate;
- (id)effectiveEndDate;
- (id)effectiveStartDate;
- (bool)hasAsserter;
- (bool)hasAssertionDate;
- (bool)hasAssertionType;
- (bool)hasDosages;
- (bool)hasEarliestDosageDate;
- (bool)hasEffectiveEndDate;
- (bool)hasEffectiveStartDate;
- (bool)hasMedicalRecord;
- (bool)hasMedicationCodings;
- (bool)hasNotTaken;
- (bool)hasReasonForUseCodings;
- (bool)hasReasonsNotTakenCodings;
- (bool)hasStatusCoding;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicalRecord;
- (id)medicationCodings;
- (void)mergeFrom:(id)arg1;
- (bool)notTaken;
- (bool)readFrom:(id)arg1;
- (id)reasonForUseCodings;
- (id)reasonsNotTakenCodings;
- (void)setAsserter:(id)arg1;
- (void)setAssertionDate:(id)arg1;
- (void)setAssertionType:(long long)arg1;
- (void)setDosages:(id)arg1;
- (void)setEarliestDosageDate:(id)arg1;
- (void)setEffectiveEndDate:(id)arg1;
- (void)setEffectiveStartDate:(id)arg1;
- (void)setHasAssertionType:(bool)arg1;
- (void)setHasNotTaken:(bool)arg1;
- (void)setMedicalRecord:(id)arg1;
- (void)setMedicationCodings:(id)arg1;
- (void)setNotTaken:(bool)arg1;
- (void)setReasonForUseCodings:(id)arg1;
- (void)setReasonsNotTakenCodings:(id)arg1;
- (void)setStatusCoding:(id)arg1;
- (id)statusCoding;
- (void)writeTo:(id)arg1;

@end