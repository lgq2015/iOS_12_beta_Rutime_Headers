/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoAdMetadata : NSObject {
    NSString * _adCampaign;
    NSString * _adCreative;
    NSString * _adLine;
    NUAdBannerView * _bannerView;
    double  _duration;
    NSString * _impressionIdentifier;
    double  _impressionThreshold;
    unsigned long long  _position;
    double  _timePlayed;
}

@property (nonatomic, copy) NSString *adCampaign;
@property (nonatomic, copy) NSString *adCreative;
@property (nonatomic, copy) NSString *adLine;
@property (nonatomic, retain) NUAdBannerView *bannerView;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *impressionIdentifier;
@property (nonatomic) double impressionThreshold;
@property (nonatomic) unsigned long long position;
@property (nonatomic) double timePlayed;

- (void).cxx_destruct;
- (id)adCampaign;
- (id)adCreative;
- (id)adLine;
- (id)bannerView;
- (double)duration;
- (id)impressionIdentifier;
- (double)impressionThreshold;
- (unsigned long long)position;
- (void)setAdCampaign:(id)arg1;
- (void)setAdCreative:(id)arg1;
- (void)setAdLine:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setImpressionIdentifier:(id)arg1;
- (void)setImpressionThreshold:(double)arg1;
- (void)setPosition:(unsigned long long)arg1;
- (void)setTimePlayed:(double)arg1;
- (double)timePlayed;

@end