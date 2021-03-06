/* made by EzioChiu.
 */

@protocol GEORoutePreloaderSubclass

@required

- (void)beginLoading;
- (NSObject<OS_os_log> *)preloaderLog;
- (void)stopLoading;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg1;

@end
