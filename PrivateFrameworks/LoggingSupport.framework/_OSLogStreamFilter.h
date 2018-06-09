/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogStreamFilter : NSObject <NSPredicateVisitor> {
    NSMutableArray * _categoryArray;
    NSMutableDictionary * _filter;
    NSMutableArray * _pidArray;
    NSMutableArray * _processArray;
    NSMutableArray * _subsystemArray;
}

@property (nonatomic, readonly) NSData *data;

- (void).cxx_destruct;
- (void)addCategory:(id)arg1;
- (void)addProcess:(id)arg1;
- (void)addProcessID:(id)arg1;
- (void)addSubsystem:(id)arg1;
- (id)data;
- (id)initWithPredicate:(id)arg1;
- (void)processComparisonPredicate:(id)arg1;
- (void)processLeftExpression:(id*)arg1 andRightExpression:(id*)arg2;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end