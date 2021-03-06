/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarksSettingsGateway : NSObject {
    WebBookmarksXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)clearAllSafariHistoryWithCompletionHandler:(id /* block */)arg1;
- (void)deleteAllSafariSecurityOriginsWithCompletionHandler:(id /* block */)arg1;
- (void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(id /* block */)arg1;
- (void)deleteSafariWebsiteDataRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(id /* block */)arg1;
- (void)getSafariWebDataUsageWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)scheduleBookmarksDatabaseMaintenance;
- (void)scheduleBookmarksDatabaseMigrationTask;
- (void)scheduleHSTSSuperCookieCleanup;

@end
