/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaControlsConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsNowPlayingApplicationLaunch;
    NSString * _presentingAppBundleID;
    NSString * _routingContextUID;
    bool  _shouldPreventAutorotation;
    long long  _style;
}

@property (nonatomic) bool allowsNowPlayingApplicationLaunch;
@property (nonatomic, copy) NSString *presentingAppBundleID;
@property (nonatomic, copy) NSString *routingContextUID;
@property (nonatomic) bool shouldPreventAutorotation;
@property (nonatomic) long long style;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsNowPlayingApplicationLaunch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)presentingAppBundleID;
- (id)routingContextUID;
- (void)setAllowsNowPlayingApplicationLaunch:(bool)arg1;
- (void)setPresentingAppBundleID:(id)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)setShouldPreventAutorotation:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (bool)shouldPreventAutorotation;
- (long long)style;

@end
