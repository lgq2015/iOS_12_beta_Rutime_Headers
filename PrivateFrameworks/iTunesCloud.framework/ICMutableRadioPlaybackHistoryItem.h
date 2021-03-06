/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMutableRadioPlaybackHistoryItem : ICRadioPlaybackHistoryItem

@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSNumber *pauseTime;
@property (nonatomic, copy) NSDictionary *serverTrackInfo;
@property (nonatomic, copy) NSDate *skipDate;
@property (nonatomic) long long storeIdentifier;

- (void)setExpirationDate:(id)arg1;
- (void)setPauseTime:(id)arg1;
- (void)setServerTrackInfo:(id)arg1;
- (void)setSkipDate:(id)arg1;
- (void)setStoreIdentifier:(long long)arg1;

@end
