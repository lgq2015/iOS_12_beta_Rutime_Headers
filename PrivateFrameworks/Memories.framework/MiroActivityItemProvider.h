/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroActivityItemProvider : UIActivityItemProvider <ExportDelegate> {
    bool  _debugDisableProgressUpdates;
    <MiroActivityItemProviderDelegate> * _delegate;
    MiroExportController * _exportController;
    bool  _lowBatteryCancelled;
    MiroMovie * _miroMovie;
    bool  _playAltClips;
    UIImage * _posterImageHorizontal;
    UIImage * _posterImageVertical;
    NSString * _preset;
    <MiroPreventDismissalDelegate> * _preventDismissalDelegate;
    double  _progress;
    PHActivityProgressViewController * _progressController;
    Project * _project;
    NSObject<OS_dispatch_semaphore> * _readyToReturnItem;
    bool  _userCancelled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MiroActivityItemProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MiroExportController *exportController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lowBatteryCancelled;
@property (nonatomic, retain) MiroMovie *miroMovie;
@property (nonatomic) bool playAltClips;
@property (nonatomic, retain) UIImage *posterImageHorizontal;
@property (nonatomic, retain) UIImage *posterImageVertical;
@property (nonatomic) UIViewController *presenter;
@property (nonatomic, retain) NSString *preset;
@property (nonatomic) <MiroPreventDismissalDelegate> *preventDismissalDelegate;
@property (nonatomic) double progress;
@property (nonatomic, retain) PHActivityProgressViewController *progressController;
@property (nonatomic, retain) Project *project;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *readyToReturnItem;
@property (readonly) Class superclass;
@property (nonatomic) bool userCancelled;

- (void).cxx_destruct;
- (void)beginExport;
- (void)cancelExport;
- (id)delegate;
- (void)didFinishExport;
- (id)exportController;
- (void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(bool)arg3;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)initWithProject:(id)arg1;
- (id)item;
- (bool)lowBatteryCancelled;
- (id)miroMovie;
- (bool)playAltClips;
- (id)posterImageHorizontal;
- (id)posterImageVertical;
- (id)presenter;
- (id)preset;
- (id)preventDismissalDelegate;
- (double)progress;
- (id)progressController;
- (id)project;
- (id)readyToReturnItem;
- (void)setDelegate:(id)arg1;
- (void)setExportController:(id)arg1;
- (void)setLowBatteryCancelled:(bool)arg1;
- (void)setMiroMovie:(id)arg1;
- (void)setPlayAltClips:(bool)arg1;
- (void)setPosterImageHorizontal:(id)arg1;
- (void)setPosterImageVertical:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setPreset:(id)arg1;
- (void)setPreventDismissalDelegate:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressController:(id)arg1;
- (void)setProject:(id)arg1;
- (void)setReadyToReturnItem:(id)arg1;
- (void)setUserCancelled:(bool)arg1;
- (bool)userCancelled;

@end