/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFUnresponsiveWebProcessController : NSObject {
    UIViewController * _activeBrowserContentViewController;
    _SFBrowserContentViewController * _contentViewController;
    bool  _shouldIgnoreDidBecomeResponsive;
    NSMutableArray * _tapToRadarRecords;
    NSTimer * _webProcessWatchdogTimer;
}

@property (nonatomic) UIViewController *activeBrowserContentViewController;
@property (nonatomic) bool shouldIgnoreDidBecomeResponsive;
@property (nonatomic, readonly) bool supportsTapToRadar;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_promptTapToRadar:(id /* block */)arg1;
- (void)_tapToRadar;
- (void)_webProcessWatchdogTimerFired:(id)arg1;
- (id)activeBrowserContentViewController;
- (void)recordURLForTapToRadar:(id)arg1 hostAppIdentifier:(id)arg2;
- (void)scheduleWatchdogTimerForContentViewController:(id)arg1;
- (void)setActiveBrowserContentViewController:(id)arg1;
- (void)setShouldIgnoreDidBecomeResponsive:(bool)arg1;
- (bool)shouldIgnoreDidBecomeResponsive;
- (bool)supportsTapToRadar;
- (void)unscheduleWatchdogTimer;

@end
