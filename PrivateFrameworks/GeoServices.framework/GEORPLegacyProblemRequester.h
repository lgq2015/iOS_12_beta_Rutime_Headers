/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPLegacyProblemRequester : NSObject {
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
}

+ (id)sharedRequester;

- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)startStatusRequest:(id)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;
- (void)startSubmissionRequest:(id)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;

@end
