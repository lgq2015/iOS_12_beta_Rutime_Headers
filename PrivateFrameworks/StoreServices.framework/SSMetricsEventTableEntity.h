/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEventTableEntity : SSSQLiteEntity {
    NSDictionary * _reportingDictionary;
}

+ (id)databaseTable;

- (void).cxx_destruct;
- (void)dealloc;
- (id)reportingCanaryIdentifier;
- (id)reportingDictionary;
- (id)reportingJSON;

@end
