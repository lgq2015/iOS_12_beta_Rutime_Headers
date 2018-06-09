/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteQueryStatement : HDSQLiteStatement {
    NSArray * _columns;
    HDSQLiteQueryDescriptor * _descriptor;
    NSArray * _properties;
}

- (void).cxx_destruct;
- (id)anyEntityWithPredicate:(id)arg1 error:(id*)arg2;
- (bool)enumerateEntitiesWithPredicate:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)initWithDescriptor:(id)arg1 properties:(id)arg2 database:(id)arg3;

@end