/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
 */

@interface HDExtractionResultItem : NSObject <NSCopying, NSSecureCoding> {
    HKClinicalRecord * _clinicalRecord;
    HKMedicalRecord * _medicalRecord;
    HKFHIRIdentifier * _resourceIdentifier;
}

@property (nonatomic, readonly, copy) HKClinicalRecord *clinicalRecord;
@property (nonatomic, readonly, copy) HKMedicalRecord *medicalRecord;
@property (nonatomic, readonly, copy) HKFHIRIdentifier *resourceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clinicalRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceIdentifier:(id)arg1 medicalRecord:(id)arg2 clinicalRecord:(id)arg3;
- (id)medicalRecord;
- (id)resourceIdentifier;

@end