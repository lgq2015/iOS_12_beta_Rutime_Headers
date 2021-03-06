/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUDiscoverMoreVideosInfo : NSObject <NSCopying, SVDiscoverMoreConfigurationProviding> {
    NTPBDiscoverMoreVideosInfo * _discoverMoreVideosInfo;
}

@property (nonatomic, readonly, copy) NSString *actionURLString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)actionURLString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)discoverMoreVideosInfo;
- (id)init;
- (id)initWithDiscoverMoreVideosInfo:(id)arg1;
- (id)subtitle;
- (id)title;

@end
