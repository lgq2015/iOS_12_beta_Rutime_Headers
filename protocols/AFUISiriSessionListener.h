/* made by EzioChiu.
 */

@protocol AFUISiriSessionListener <NSObject>

@optional

- (void)siriSessionDidInitializeSessionInfo:(AFUISiriSessionInfo *)arg1;
- (void)siriSessionDidUpdateSessionInfo:(AFUISiriSessionInfo *)arg1;

@end