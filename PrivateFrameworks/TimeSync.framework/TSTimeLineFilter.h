/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSTimeLineFilter : NSObject

@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; } rateRatio;

- (void)addTimestamps:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)arg1;
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)arg1;
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)arg1;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })rateRatio;
- (void)resetFilter;

@end
