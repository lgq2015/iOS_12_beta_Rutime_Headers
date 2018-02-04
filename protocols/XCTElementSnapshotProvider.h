/* made by EzioChiu.
 */

@protocol XCTElementSnapshotProvider <NSObject>

@required

- (XCElementSnapshot *)snapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 error:(id*)arg4;

@end
