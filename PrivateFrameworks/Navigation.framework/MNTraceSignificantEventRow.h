/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceSignificantEventRow : NSObject {
    NSDictionary * _data;
    long long  _eventType;
    double  _timestamp;
}

@property (nonatomic, copy) NSDictionary *data;
@property (nonatomic) long long eventType;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)_descriptionWithData:(id)arg1;
- (id)data;
- (id)description;
- (id)descriptionWithDataFilteredByFilter:(id /* block */)arg1;
- (long long)eventType;
- (void)setData:(id)arg1;
- (void)setEventType:(long long)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
