/* made by EzioChiu.
 */

@protocol VNRequestWarming

@required

- (bool)prepareForPerformingRequests:(NSArray *)arg1 error:(id*)arg2;
- (bool)prepareForPerformingRequestsOfClass:(NSArray *)arg1 error:(id*)arg2;

@end
