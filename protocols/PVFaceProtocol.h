/* made by EzioChiu.
 */

@protocol PVFaceProtocol <NSObject>

@required

- (double)centerX;
- (double)centerY;
- (long long)clusterSequenceNumber;
- (NSData *)faceprintData;
- (NSString *)localIdentifier;
- (NSString *)personLocalIdentifier;
- (long long)qualityMeasure;
- (void)setQualityMeasure:(long long)arg1;
- (double)size;

@end
