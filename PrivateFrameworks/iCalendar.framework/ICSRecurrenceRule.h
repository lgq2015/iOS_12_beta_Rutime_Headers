/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSRecurrenceRule : NSObject <ICSWriting, NSSecureCoding> {
    int  _freq;
    NSMutableDictionary * _parameters;
}

@property (nonatomic, retain) NSArray *byday;
@property (nonatomic, retain) NSArray *byhour;
@property (nonatomic, retain) NSArray *byminute;
@property (nonatomic, retain) NSArray *bymonth;
@property (nonatomic, retain) NSArray *bymonthday;
@property (nonatomic, retain) NSArray *bysecond;
@property (nonatomic, retain) NSArray *bysetpos;
@property (nonatomic, retain) NSArray *byweekno;
@property (nonatomic, retain) NSArray *byyearday;
@property (nonatomic) NSNumber *count;
@property (nonatomic) int freq;
@property (nonatomic) NSNumber *interval;
@property (nonatomic, retain) ICSDateValue *until;
@property (nonatomic) NSNumber *wkst;

+ (id)recurrenceRuleFromICSCString:(const char *)arg1 withTokenizer:(id)arg2;
+ (id)recurrenceRuleFromICSString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)byday;
- (id)byhour;
- (id)byminute;
- (id)bymonth;
- (id)bymonthday;
- (id)bysecond;
- (id)bysetpos;
- (id)byweekno;
- (id)byyearday;
- (void)cleanUpForStartDate:(id)arg1;
- (id)count;
- (void)encodeWithCoder:(id)arg1;
- (int)freq;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrequency:(int)arg1;
- (id)interval;
- (id)occurrencesForStartDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimeZone:(id)arg4;
- (id)parameterValueForName:(id)arg1;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)parametersToObscure;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToObscure;
- (void)removeParameterValueForName:(id)arg1;
- (void)setByday:(id)arg1;
- (void)setByhour:(id)arg1;
- (void)setByminute:(id)arg1;
- (void)setBymonth:(id)arg1;
- (void)setBymonthday:(id)arg1;
- (void)setBysecond:(id)arg1;
- (void)setBysetpos:(id)arg1;
- (void)setByweekno:(id)arg1;
- (void)setByyearday:(id)arg1;
- (void)setCount:(id)arg1;
- (void)setFreq:(int)arg1;
- (void)setInterval:(id)arg1;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (void)setUntil:(id)arg1;
- (void)setWkst:(id)arg1;
- (bool)shouldObscureValue;
- (id)until;
- (id)wkst;

@end