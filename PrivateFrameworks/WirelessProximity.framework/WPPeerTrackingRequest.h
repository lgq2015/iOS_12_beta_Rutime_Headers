/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPPeerTrackingRequest : NSObject <NSSecureCoding> {
    unsigned char  _clientType;
    NSDictionary * _peerTrackingDictionary;
    NSUUID * _peerUUID;
}

@property unsigned char clientType;
@property (retain) NSDictionary *peerTrackingDictionary;
@property (retain) NSUUID *peerUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)clientType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)peerTrackingDictionary;
- (id)peerUUID;
- (void)setClientType:(unsigned char)arg1;
- (void)setPeerTrackingDictionary:(id)arg1;
- (void)setPeerUUID:(id)arg1;

@end