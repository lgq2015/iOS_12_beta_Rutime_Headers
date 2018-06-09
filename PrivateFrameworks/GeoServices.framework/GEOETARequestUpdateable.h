/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETARequestUpdateable : GEOXPCRequest <GEOXPCRequest> {
    GEODataConditionalConnectionProperties * _connectionProperties;
    int  _mode;
    GEOETATrafficUpdateRequest * _request;
}

@property (nonatomic, retain) GEODataConditionalConnectionProperties *connectionProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mode;
@property (nonatomic, retain) GEOETATrafficUpdateRequest *request;
@property (readonly) Class superclass;

+ (Class)replyClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)connectionProperties;
- (void)encodeWithCoder:(id)arg1;
- (bool)expectsReply;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (int)mode;
- (id)request;
- (void)setConnectionProperties:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setRequest:(id)arg1;

@end