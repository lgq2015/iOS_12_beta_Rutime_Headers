/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

@interface NFMWhereIsMyCompanionConnection : NSObject <NFMWhereIsMyCompanionConnectionProtocol> {
    id /* block */  _playSoundAndLEDCompletion;
    id /* block */  _playSoundCompletion;
    NSXPCConnection * _serverConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ playSoundAndLEDCompletion;
@property (nonatomic, copy) id /* block */ playSoundCompletion;
@property (retain) NSXPCConnection *serverConnection;
@property (readonly) Class superclass;

+ (id)sharedDeviceConnection;

- (void).cxx_destruct;
- (void)applicationIdentifierWithReply:(id /* block */)arg1;
- (id)init;
- (id /* block */)playSoundAndLEDCompletion;
- (void)playSoundAndLightsOnCompanionWithCompletion:(id /* block */)arg1;
- (id /* block */)playSoundCompletion;
- (void)playSoundOnCompanionWithCompletion:(id /* block */)arg1;
- (void)playedSound:(bool)arg1;
- (void)playedSoundAndLED:(bool)arg1;
- (id)serverConnection;
- (void)setPlaySoundAndLEDCompletion:(id /* block */)arg1;
- (void)setPlaySoundCompletion:(id /* block */)arg1;
- (void)setServerConnection:(id)arg1;

@end