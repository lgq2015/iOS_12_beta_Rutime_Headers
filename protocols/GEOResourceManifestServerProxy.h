/* made by EzioChiu.
 */

@protocol GEOResourceManifestServerProxy <NSObject>

@required

- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (GEOActiveTileGroup *)activeTileGroup;
- (NSString *)authToken;
- (void)cancelCurrentManifestUpdate;
- (void)closeConnection;
- (GEOResourceManifestConfiguration *)configuration;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (<GEOResourceManifestServerProxyDelegate> *)delegate;
- (void)forceUpdate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getResourceManifestWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOResourceManifestDownload *, NSError *, void*
- (id)initWithDelegate:(id <GEOResourceManifestServerProxyDelegate>)arg1 configuration:(GEOResourceManifestConfiguration *)arg2;
- (void)openConnection;
- (void)performOpportunisticResourceLoading;
- (oneway void)resetActiveTileGroup;
- (NSObject<OS_dispatch_queue> *)serverQueue;
- (oneway void)setActiveTileGroupIdentifier:(NSNumber *)arg1;
- (void)setDelegate:(id <GEOResourceManifestServerProxyDelegate>)arg1;
- (void)setManifestToken:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateIfNecessary:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSProgress *)updateProgress;

@end