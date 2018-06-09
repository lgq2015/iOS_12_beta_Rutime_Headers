/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderRecurrence : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *daysOfTheMonth;
@property (nonatomic, copy) NSArray *daysOfTheWeek;
@property (nonatomic, copy) NSArray *daysOfTheYear;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *frequencyTimeUnit;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interval;
@property (nonatomic, copy) NSArray *monthsOfTheYear;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *weeksOfTheYear;

+ (id)recurrence;
+ (id)recurrenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (id)encodedClassName;
- (id)frequencyTimeUnit;
- (id)groupIdentifier;
- (long long)interval;
- (id)monthsOfTheYear;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setFrequencyTimeUnit:(id)arg1;
- (void)setInterval:(long long)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (void)setWeeksOfTheYear:(id)arg1;
- (id)weeksOfTheYear;

@end