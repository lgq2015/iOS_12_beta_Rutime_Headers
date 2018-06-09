/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDCRSAuthInit : NSObject <NFAWDEventProtocol> {
    AWDNFCSECRSAuthInit * _metric;
    unsigned int  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCSECRSAuthInit *metric;
@property (nonatomic) unsigned int status;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end