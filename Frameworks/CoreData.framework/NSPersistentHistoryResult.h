/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentHistoryResult : NSPersistentStoreResult {
    id  _aggregatedResult;
    long long  _resultType;
}

@property (readonly) id result;
@property (readonly) long long resultType;

- (void)dealloc;
- (id)description;
- (id)initWithResultType:(long long)arg1 andResult:(id)arg2;
- (id)initWithSubresults:(id)arg1;
- (id)result;
- (long long)resultType;

@end