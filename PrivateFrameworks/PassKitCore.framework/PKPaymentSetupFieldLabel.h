/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField

@property (nonatomic, readonly, copy) NSString *title;

- (id)displayString;
- (unsigned long long)fieldType;
- (void)setCurrentValue:(id)arg1;
- (id)submissionString;
- (bool)submissionStringMeetsAllRequirements;
- (id)title;
- (void)updateWithConfiguration:(id)arg1;

@end