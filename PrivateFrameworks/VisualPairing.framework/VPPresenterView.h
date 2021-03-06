/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualPairing.framework/VisualPairing
 */

@interface VPPresenterView : UIView {
    AVPlayer * _moviePlayer;
    bool  _started;
    NSString * _verificationCode;
    CALayer * _watermarkLayer;
    NSArray * _watermarkPixelBuffers;
    unsigned long long  _watermarkStepIndex;
    NSObject<OS_dispatch_source> * _watermarkStepTimer;
}

@property (nonatomic, copy) NSString *verificationCode;

- (void).cxx_destruct;
- (void)_watermarkStep;
- (void)layoutSubviews;
- (void)setVerificationCode:(id)arg1;
- (void)start;
- (void)stop;
- (id)verificationCode;

@end
