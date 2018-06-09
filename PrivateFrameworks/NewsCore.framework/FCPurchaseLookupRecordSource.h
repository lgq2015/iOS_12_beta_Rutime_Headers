/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPurchaseLookupRecordSource : FCRecordSource

+ (id)defaultCachePolicy;

- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordType;
- (id)storeFilename;
- (unsigned long long)storeVersion;

@end