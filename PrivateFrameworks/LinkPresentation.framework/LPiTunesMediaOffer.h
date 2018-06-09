/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaOffer : NSObject {
    bool  _hasAudio;
    bool  _hasVideo;
    bool  _isEVOD;
    NSURL * _previewURL;
    NSString * _type;
}

@property (nonatomic, readonly) bool hasAudio;
@property (nonatomic, readonly) bool hasVideo;
@property (nonatomic, readonly) bool isEVOD;
@property (nonatomic, readonly, copy) NSURL *previewURL;
@property (nonatomic, readonly, copy) NSString *type;

+ (bool)hasAudioForOffer:(id)arg1;
+ (bool)hasVideoForOffer:(id)arg1;
+ (bool)isEVODForOffer:(id)arg1;
+ (id)previewURLForOffer:(id)arg1;
+ (id)typeForOffer:(id)arg1;

- (void).cxx_destruct;
- (bool)hasAudio;
- (bool)hasVideo;
- (id)initWithDictionary:(id)arg1;
- (bool)isEVOD;
- (id)previewURL;
- (id)type;

@end