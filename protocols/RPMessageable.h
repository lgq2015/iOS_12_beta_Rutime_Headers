/* made by EzioChiu.
 */

@protocol RPMessageable

@required

- (void)deregisterEventID:(NSString *)arg1;
- (void)deregisterRequestID:(NSString *)arg1;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)registerEventID:(void *)arg1 options:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, void*
- (void)registerRequestID:(void *)arg1 options:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 17: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, id /* block */, void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*, void*
- (void)sendEventID:(void *)arg1 event:(void *)arg2 destinationID:(void *)arg3 options:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSDictionary *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendRequestID:(void *)arg1 request:(void *)arg2 destinationID:(void *)arg3 options:(void *)arg4 responseHandler:(void *)arg5; // needs 5 arg types, found 12: NSString *, NSDictionary *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*

@end