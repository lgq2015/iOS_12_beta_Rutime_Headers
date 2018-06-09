/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSHTTPArchive : NSObject {
    NSData * _backingJSONData;
    bool  _compressed;
}

@property (nonatomic, readonly) NSData *JSONData;
@property (nonatomic, readonly) NSDictionary *JSONObject;
@property (nonatomic, readonly) NSString *JSONString;
@property (nonatomic, retain) NSData *backingJSONData;
@property (nonatomic) bool compressed;

+ (id)_JSONObjectForEntries:(id)arg1;
+ (id)_JSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
+ (id)_contentDictionaryForResponse:(id)arg1 responseData:(id)arg2;
+ (id)_creatorDictionary;
+ (id)_dateFormatterForTimeZone:(id)arg1;
+ (id)_entriesArrayForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
+ (id)_entryDictionaryForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
+ (id)_generateCommentsForTaskMetrics:(id)arg1;
+ (id)_headersArrayForHTTPHeaders:(id)arg1;
+ (id)_localIPAddress;
+ (id)_requestDictionaryForTaskTransactionMetrics:(id)arg1 requestData:(id)arg2;
+ (id)_responseDictionaryForTaskMetrics:(id)arg1 responseData:(id)arg2;
+ (id)_stringFromDate:(id)arg1;
+ (double)_timeIntervalFromFilename:(id)arg1;
+ (id)merge:(id)arg1;
+ (id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2;
+ (id)outputDirectoryForLogConfig:(id)arg1;
+ (void)removeLogsWithLogConfig:(id)arg1 olderThanDate:(id)arg2;
+ (void)sendWriteAllLogsToDiskDecompressedNotification;
+ (void)sendWriteAllLogsToDiskNotification;

- (void).cxx_destruct;
- (id)JSONData;
- (id)JSONObject;
- (id)JSONString;
- (id)backingJSONData;
- (bool)compressed;
- (id)description;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
- (void)setBackingJSONData:(id)arg1;
- (void)setCompressed:(bool)arg1;
- (bool)writeToDiskError:(id*)arg1;
- (bool)writeToDiskWithLogConfig:(id)arg1 compressed:(bool)arg2 error:(id*)arg3;

@end