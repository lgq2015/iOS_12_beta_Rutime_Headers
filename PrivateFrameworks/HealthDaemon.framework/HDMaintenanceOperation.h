/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMaintenanceOperation : NSOperation

+ (id)maintenanceOperationWithName:(id)arg1 asynchronousBlock:(id /* block */)arg2;

- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end