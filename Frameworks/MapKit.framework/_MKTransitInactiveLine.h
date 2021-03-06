/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKTransitInactiveLine : NSObject <MKInactiveTransitLine> {
    bool  _blocked;
    <GEOTransitLine> * _line;
    NSDate * _referenceDate;
    NSDate * _serviceResumesDate;
    NSTimeZone * _timeZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitLine> *line;
@property (nonatomic, readonly) NSString *serviceResumesDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithTransitLine:(id)arg1 blocked:(bool)arg2 serviceResumesDate:(id)arg3 timeZone:(id)arg4 referenceDate:(id)arg5;
- (id)line;
- (id)serviceResumesDescription;

@end
