/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPresentableCalendarEvent : NSObject {
    NSURL * _URL;
    bool  _allDay;
    NSDate * _endDate;
    NSString * _location;
    SXFormattedText * _notes;
    NSDate * _startDate;
    NSTimeZone * _timeZone;
    NSString * _title;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) bool allDay;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) SXFormattedText *notes;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)URL;
- (bool)allDay;
- (id)endDate;
- (id)initWithStartDate:(id)arg1;
- (id)location;
- (id)notes;
- (void)setAllDay:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)startDate;
- (id)timeZone;
- (id)title;

@end