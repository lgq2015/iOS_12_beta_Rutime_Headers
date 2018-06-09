/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSUtilities : NSObject {
    unsigned long long  _lastButtonPressInteractionModel;
}

@property (nonatomic) unsigned long long lastButtonPressInteractionModel;

+ (id)sharedInstance;

- (unsigned long long)lastButtonPressInteractionModel;
- (void)setLastButtonPressInteractionModel:(unsigned long long)arg1;

@end