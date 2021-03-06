/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataRequestState : GEOCapturedState {
    BOOL  _HTTPMethod;
    bool  _HTTPShouldHandleCookies;
    NSURL * _URL;
    NSDictionary * _additionalHTTPHeaders;
    bool  _allowsCellularAccess;
    GEOApplicationAuditToken * _auditToken;
    NSData * _bodyData;
    NSData * _cachedData;
    int  _kind;
    double  _timeoutInterval;
}

+ (const char *)decoderType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
