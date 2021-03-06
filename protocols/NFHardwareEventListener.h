/* made by EzioChiu.
 */

@protocol NFHardwareEventListener <NSObject>

@optional

- (void)didReceiveFatalCommunicationError;
- (void)secureElement:(NFSecureElement *)arg1 didChangeRestrictedMode:(bool)arg2;

@end
