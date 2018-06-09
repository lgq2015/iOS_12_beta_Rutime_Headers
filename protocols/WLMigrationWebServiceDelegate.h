/* made by EzioChiu.
 */

@protocol WLMigrationWebServiceDelegate

@required

- (NSString *)downloadsPath;
- (void)migrator:(WLMigrationWebService *)arg1 didImportRecordCount:(unsigned long long)arg2;
- (bool)migrator:(WLMigrationWebService *)arg1 shouldTerminateFetchWithError:(NSError *)arg2;
- (bool)migratorShouldPauseBeforeRequest:(WLMigrationWebService *)arg1;

@end