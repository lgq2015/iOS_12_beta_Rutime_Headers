/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

@interface EAFirmwareUpdater : MobileAssetUpdater <EAAccessoryDelegate, NSStreamDelegate, iAUPServerDelegate> {
    EAAccessory * _accessory;
    NSString * _appProtocol;
    id /* block */  _applyCompletion;
    NSString * _bootloaderProtocol;
    bool  _byteEscape;
    NSObject<OS_dispatch_queue> * _eaNotificationDispatchQueue;
    NSString * _firmwareBundleFilename;
    NSURL * _firmwareBundleURL;
    bool  _firmwareUpdateComplete;
    unsigned long long  _firmwareVersionMajor;
    unsigned long long  _firmwareVersionMinor;
    unsigned long long  _firmwareVersionRelease;
    bool  _forceSilentUpdate;
    iAUPServer * _iAUPServer;
    int  _isExpectingReconnect;
    NSMutableData * _outputData;
    unsigned int  _productIDCode;
    id /* block */  _progressHandler;
    NSString * _protocolString;
    NSTimer * _reconnectTimer;
    EASession * _session;
    bool  _skipDFUMode;
    NSString * _updateBundleFilename;
    NSURL * _updateBundleURL;
}

@property (nonatomic, retain) EAAccessory *accessory;
@property (nonatomic, retain) NSString *appProtocol;
@property (nonatomic, copy) id /* block */ applyCompletion;
@property (nonatomic, retain) NSString *bootloaderProtocol;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *firmwareBundleFilename;
@property (nonatomic, retain) NSURL *firmwareBundleURL;
@property (nonatomic) bool forceSilentUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int productIDCode;
@property (nonatomic, retain) NSString *protocolString;
@property (nonatomic, retain) iAUPServer *server;
@property (nonatomic, retain) EASession *session;
@property (nonatomic) bool skipDFUMode;
@property (readonly) Class superclass;

+ (id)appProtocolStringWithProductIDCode:(unsigned int)arg1;
+ (id)bootloaderProtocolStringWithProductIDCode:(unsigned int)arg1;
+ (id)findAccessoryWithProductIDCode:(unsigned int)arg1;

- (void)_accessoryDidConnect:(id)arg1;
- (void)_accessoryDidDisconnect:(id)arg1;
- (id)accessory;
- (void)accessoryDidDisconnect:(id)arg1;
- (id)appProtocol;
- (id /* block */)applyCompletion;
- (id)applyFirmware:(id /* block */)arg1 progress:(id /* block */)arg2;
- (id)assetWithMaxVersion:(id)arg1;
- (id)bootloaderProtocol;
- (void)dealloc;
- (bool)findAccessory;
- (id)firmwareBundleFilename;
- (id)firmwareBundleURL;
- (void)firmwareUpdateComplete:(id)arg1;
- (id)flushOutput;
- (bool)forceSilentUpdate;
- (void)handleInputData;
- (id)initWithProductIDCode:(unsigned int)arg1 assetType:(id)arg2 skipDFU:(bool)arg3 byteEscape:(bool)arg4;
- (void)logStatusString:(id)arg1;
- (id)openSession;
- (id)overrideQueryPredicateFromDict:(id)arg1;
- (unsigned int)productIDCode;
- (id)protocolString;
- (id)queryPredicate;
- (void)reconnectTimerDidFire:(id)arg1;
- (id)server;
- (id)session;
- (void)setAccessory:(id)arg1;
- (void)setAppProtocol:(id)arg1;
- (void)setApplyCompletion:(id /* block */)arg1;
- (void)setBootloaderProtocol:(id)arg1;
- (void)setFirmwareBundleFilename:(id)arg1;
- (void)setFirmwareBundleURL:(id)arg1;
- (void)setForceSilentUpdate:(bool)arg1;
- (void)setProductIDCode:(unsigned int)arg1;
- (void)setProtocolString:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSkipDFUMode:(bool)arg1;
- (bool)skipDFUMode;
- (void)startReconnectTimer:(int)arg1;
- (void)stopReconnectTimer;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)supportedProtocolForAccessory:(id)arg1;
- (void)updateComplete:(id)arg1;
- (void)updateProgress:(double)arg1;
- (id)validateAsset;
- (id)validateAssetAttributes:(id)arg1;
- (id)writeData:(id)arg1;

@end