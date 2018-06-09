/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AATrustedDevice : NSObject {
    NSString * _FMIPDeviceID;
    NSString * _backupUUID;
    bool  _currentDevice;
    NSString * _detailDeviceName;
    NSString * _detailSubLabel;
    NSString * _deviceDetailHttpMethod;
    NSString * _deviceDetailUri;
    NSString * _deviceID;
    NSString * _deviceQualifiedClass;
    bool  _fmipEnabled;
    bool  _injectNativeHeader;
    NSString * _model;
    NSString * _modelDisplayName;
    NSString * _modelLargePhotoURL1x;
    NSString * _modelLargePhotoURL2x;
    NSString * _modelLargePhotoURL3x;
    NSString * _modelSmallPhotoURL1x;
    NSString * _modelSmallPhotoURL2x;
    NSString * _modelSmallPhotoURL3x;
    NSString * _name;
    NSString * _osVersion;
    NSString * _rawLatestBackup;
    bool  _showBackupRow;
    bool  _showFMIPLink;
    bool  _showFMIPRow;
}

@property (nonatomic, readonly) NSString *FMIPDeviceID;
@property (nonatomic, readonly) NSString *backupUUID;
@property (nonatomic, readonly) bool currentDevice;
@property (nonatomic, readonly) NSString *detailDeviceName;
@property (nonatomic, readonly) NSString *detailSubLabel;
@property (nonatomic, readonly) NSString *deviceDetailHttpMethod;
@property (nonatomic, readonly) NSString *deviceDetailUri;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *deviceQualifiedClass;
@property (nonatomic, readonly) bool fmipEnabled;
@property (nonatomic, readonly) bool injectNativeHeader;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *modelDisplayName;
@property (nonatomic, readonly) NSString *modelLargePhotoURL1x;
@property (nonatomic, readonly) NSString *modelLargePhotoURL2x;
@property (nonatomic, readonly) NSString *modelLargePhotoURL3x;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL1x;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL2x;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL3x;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *rawLatestBackup;
@property (nonatomic, readonly) bool showBackupRow;
@property (nonatomic, readonly) bool showFMIPLink;
@property (nonatomic, readonly) bool showFMIPRow;

- (void).cxx_destruct;
- (id)FMIPDeviceID;
- (id)backupUUID;
- (bool)currentDevice;
- (id)detailDeviceName;
- (id)detailSubLabel;
- (id)deviceDetailHttpMethod;
- (id)deviceDetailUri;
- (id)deviceID;
- (id)deviceQualifiedClass;
- (bool)fmipEnabled;
- (id)initWithDictionary:(id)arg1;
- (bool)injectNativeHeader;
- (id)model;
- (id)modelDisplayName;
- (id)modelLargePhotoURL1x;
- (id)modelLargePhotoURL2x;
- (id)modelLargePhotoURL3x;
- (id)modelSmallPhotoURL1x;
- (id)modelSmallPhotoURL2x;
- (id)modelSmallPhotoURL3x;
- (id)name;
- (id)osVersion;
- (id)rawLatestBackup;
- (bool)showBackupRow;
- (bool)showFMIPLink;
- (bool)showFMIPRow;
- (void)updateWithRUIClientInfo:(id)arg1;

@end