/* made by EzioChiu.
 */

@protocol MSPCloudRequest <NSObject>

@required

- (void)addCloudAccessCompletionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)shouldEnqueueDependenciesWhenPerformingAsCloudRequest;

@optional

- (unsigned long long)maximumRetries;

@end
