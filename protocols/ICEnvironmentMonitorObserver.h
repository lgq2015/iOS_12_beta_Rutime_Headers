/* made by EzioChiu.
 */

@protocol ICEnvironmentMonitorObserver <NSObject>

@optional

- (void)environmentMonitorDidChangeNetworkReachability:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeNetworkType:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangePower:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeTelephonyStatus:(ICEnvironmentMonitor *)arg1;

@end
