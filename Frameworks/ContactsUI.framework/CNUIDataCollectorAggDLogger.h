/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIDataCollectorAggDLogger : NSObject

+ (id)logger;

- (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)setValue:(double)arg1 forDistributionKey:(id)arg2;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;

@end