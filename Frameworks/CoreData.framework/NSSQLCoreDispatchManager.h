/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLCoreDispatchManager : NSObject {
    NSMutableArray * _connectionManagers;
    NSSQLCore * _sqlCore;
}

- (void)dealloc;
- (void)disconnectAllConnections;
- (id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2;
- (bool)routeStoreRequest:(id)arg1;
- (void)scheduleBarrierBlock:(id /* block */)arg1;
- (void)setExclusiveLockingMode:(bool)arg1;

@end