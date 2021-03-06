/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDInsertValuesToQuantitySampleSeriesOperation : HDJournalableOperation {
    NSUUID * _seriesIdentifier;
    NSArray * _values;
}

@property (nonatomic, readonly, copy) NSUUID *seriesIdentifier;
@property (nonatomic, readonly, copy) NSArray *values;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeriesIdentifier:(id)arg1 values:(id)arg2;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)seriesIdentifier;
- (id)values;

@end
