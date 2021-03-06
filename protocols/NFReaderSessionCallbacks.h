/* made by EzioChiu.
 */

@protocol NFReaderSessionCallbacks <NSObject, NFSessionCallbackInterface>

@required

- (void)didTerminate:(NSError *)arg1;

@optional

- (void)didDetectExternalReader:(NFTechnologyEvent *)arg1;
- (void)didDetectNDEFMessages:(NSArray *)arg1 fromTags:(NSArray *)arg2;
- (void)didDetectTags:(NSArray *)arg1;

@end
