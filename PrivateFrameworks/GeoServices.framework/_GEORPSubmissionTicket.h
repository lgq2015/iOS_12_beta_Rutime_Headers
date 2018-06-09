/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORPSubmissionTicket : GEOAbstractTicket <GEOMapServiceProblemReportTicket> {
    NSString * _emailAddress;
    <GEOMapItem> * _place;
    GEORPProblem * _problem;
    GEORPProblemRequest * _problemRequest;
    NSData * _pushToken;
    NSData * _resubmissionData;
    bool  _started;
    GEORPUserCredentials * _userCredentials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithProblem:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6;
- (id)initWithResubmissionData:(id)arg1 traits:(id)arg2;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end