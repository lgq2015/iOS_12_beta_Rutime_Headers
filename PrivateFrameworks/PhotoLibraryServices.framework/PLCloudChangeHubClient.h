/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudChangeHubClient : NSObject {
    NSObject<OS_xpc_object> * _hubConnection;
    unsigned char  _nodeUUID;
    NSUUID * _uuid;
}

@property (getter=isConnected, readonly) bool connected;
@property (readonly, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (bool)connect;
- (void)disconnect;
- (unsigned long long)fetchLastEventIndex;
- (id)fetchPendingEventsSinceIndex:(unsigned long long)arg1;
- (id)fetchResultsSinceIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithUUID:(id)arg1;
- (bool)isConnected;
- (id)resultsFromReply:(id)arg1 sinceIndex:(unsigned long long)arg2;
- (id)successfulResultWithEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2;
- (id)unsuccesfulResultWithWithType:(long long)arg1;
- (id)uuid;

@end