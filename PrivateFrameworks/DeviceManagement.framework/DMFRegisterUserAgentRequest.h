/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFRegisterUserAgentRequest : DMFTaskRequest {
    NSString * _appleID;
    NSXPCListenerEndpoint * _listenerEndpoint;
}

@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, retain) NSXPCListenerEndpoint *listenerEndpoint;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)listenerEndpoint;
- (void)setAppleID:(id)arg1;
- (void)setListenerEndpoint:(id)arg1;

@end
