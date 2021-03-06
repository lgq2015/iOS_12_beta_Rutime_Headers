/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaControlsRemoteViewController : _UIRemoteViewController <MPMediaControlsClientController> {
    <MPMediaControlsClientController> * _hostViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MPMediaControlsClientController> *hostViewController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)didReceiveInteraction;
- (void)didSelectRoute:(id)arg1;
- (void)dismiss;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
