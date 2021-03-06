/* made by EzioChiu.
 */

@protocol CKDOperationInfoDelegate <NSObject>

@required

- (bool)isInvalidated;
- (void)operationWithID:(NSString *)arg1 didComplete:(CKOperationResult *)arg2;
- (void)operationWithID:(NSString *)arg1 didProgress:(NSDictionary *)arg2;
- (void)wasUnexpectedlyUnregisteredForOperationID:(NSString *)arg1;

@end
