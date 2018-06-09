/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUVideoCallAttributes : NSObject <NSSecureCoding> {
    long long  _localVideoContextSlotIdentifier;
    long long  _remoteCameraOrientation;
    long long  _remoteVideoContextSlotIdentifier;
}

@property (nonatomic) long long localVideoContextSlotIdentifier;
@property (nonatomic) long long remoteCameraOrientation;
@property (nonatomic) long long remoteVideoContextSlotIdentifier;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVideoCallAttributes:(id)arg1;
- (long long)localVideoContextSlotIdentifier;
- (long long)remoteCameraOrientation;
- (long long)remoteVideoContextSlotIdentifier;
- (void)setLocalVideoContextSlotIdentifier:(long long)arg1;
- (void)setRemoteCameraOrientation:(long long)arg1;
- (void)setRemoteVideoContextSlotIdentifier:(long long)arg1;

@end