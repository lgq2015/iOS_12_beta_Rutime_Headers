/* made by EzioChiu.
 */

@protocol NEFilterDataExtensionProviderHostProtocol <NEFilterExtensionProviderHostProtocol>

@required

- (void)fetchCurrentRulesForFlow:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NEFilterFlow *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NEFilterControlVerdict *, void*
- (void)getSourceAppInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NEAppInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NEAppInfo *, void*
- (void)report:(NEFilterReport *)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;

@end