/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCMFiExtendedGamepadControllerProfile : _GCExtendedGamepad <_GCACHomeButtonDelegate> {
    _GCACHomeButton * _acHome;
    GCMotion * _motion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)menuButton;
- (id)motion;
- (id)name;
- (void)setPlayerIndex:(long long)arg1;
- (void)set_motion:(id)arg1;
- (void)toggleSuspendResume;

@end
