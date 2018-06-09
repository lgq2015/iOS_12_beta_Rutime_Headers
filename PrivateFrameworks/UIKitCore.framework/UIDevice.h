/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDevice : NSObject {
    float  _batteryLevel;
    struct { 
        unsigned int batteryMonitoringEnabled : 1; 
        unsigned int proximityMonitoringEnabled : 1; 
        unsigned int expectsFaceContactInLandscape : 1; 
        unsigned int orientation : 3; 
        unsigned int batteryState : 2; 
        unsigned int proximityState : 1; 
        unsigned int hasTouchPadOverride : 1; 
        unsigned int hasTouchPad : 1; 
    }  _deviceFlags;
    long long  _numDeviceOrientationObservers;
}

@property (setter=_setBacklightLevel:, nonatomic) float _backlightLevel;
@property (nonatomic, readonly) bool _supportsPencil;
@property (nonatomic, readonly) float batteryLevel;
@property (getter=isBatteryMonitoringEnabled, nonatomic) bool batteryMonitoringEnabled;
@property (nonatomic, readonly) long long batteryState;
@property (nonatomic, readonly, retain) NSString *buildVersion;
@property (getter=_feedbackSupportLevel, nonatomic, readonly) long long feedbackSupportLevel;
@property (getter=isGeneratingDeviceOrientationNotifications, nonatomic, readonly) bool generatesDeviceOrientationNotifications;
@property (nonatomic, readonly) NSUUID *identifierForVendor;
@property (nonatomic, readonly) NSString *localizedModel;
@property (nonatomic, readonly) NSString *model;
@property (getter=isMultitaskingSupported, nonatomic, readonly) bool multitaskingSupported;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) long long orientation;
@property (getter=isProximityMonitoringEnabled, nonatomic) bool proximityMonitoringEnabled;
@property (nonatomic, readonly) bool proximityState;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) long long userInterfaceIdiom;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_hasHomeButton;
+ (bool)_isLowEnd;
+ (bool)_isWatch;
+ (bool)_isWatchCompanion;
+ (id)currentDevice;
+ (long long)currentDeviceOrientationAllowingAmbiguous:(bool)arg1;
+ (id)modelSpecificLocalizedStringKeyForKey:(id)arg1;

- (float)_backlightLevel;
- (void)_clearGraphicsQualityOverride;
- (id)_deviceInfoForKey:(struct __CFString { }*)arg1;
- (void)_enableDeviceOrientationEvents:(bool)arg1;
- (long long)_feedbackSupportLevel;
- (long long)_graphicsQuality;
- (bool)_hasGraphicsQualityOverride;
- (bool)_hasTouchPad;
- (bool)_isSystemSoundEnabled;
- (long long)_keyboardGraphicsQuality;
- (long long)_nativeScreenGamut;
- (void)_playInputDeleteSound;
- (void)_playInputSelectSound;
- (void)_playSystemSound:(unsigned int)arg1;
- (long long)_predictionGraphicsQuality;
- (void)_registerForSystemSounds:(id)arg1;
- (void)_setActiveUserInterfaceIdiom:(long long)arg1;
- (void)_setBacklightLevel:(float)arg1;
- (void)_setBatteryLevel:(float)arg1;
- (void)_setBatteryState:(long long)arg1;
- (void)_setExpectsFaceContactInLandscape:(bool)arg1;
- (void)_setGraphicsQualityOverride:(long long)arg1;
- (void)_setHasTouchPad:(bool)arg1;
- (void)_setProximityState:(bool)arg1;
- (float)_softwareDimmingAlpha;
- (bool)_supportsDeepColor;
- (bool)_supportsForceTouch;
- (bool)_supportsPencil;
- (id)_tapticEngine;
- (void)_unregisterForSystemSounds:(id)arg1;
- (void)_updateSystemSoundActiveStatus:(id)arg1;
- (float)batteryLevel;
- (long long)batteryState;
- (void)beginGeneratingDeviceOrientationNotifications;
- (id)buildVersion;
- (void)endGeneratingDeviceOrientationNotifications;
- (id)identifierForVendor;
- (bool)isBatteryMonitoringEnabled;
- (bool)isGeneratingDeviceOrientationNotifications;
- (bool)isMultitaskingSupported;
- (bool)isProximityMonitoringEnabled;
- (id)localizedModel;
- (id)model;
- (id)name;
- (long long)orientation;
- (void)playInputClick;
- (bool)proximityState;
- (void)setBatteryMonitoringEnabled:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setProximityMonitoringEnabled:(bool)arg1;
- (id)systemName;
- (id)systemVersion;
- (long long)userInterfaceIdiom;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (bool)cn_hasSensorArray;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (bool)CFX_disableExpensiveFilters;
- (bool)_deviceHasDualBackCam;
- (bool)_deviceHasTrueDepth;
- (bool)allowsDepthFromDualBackCamera;
- (double)aspectRatio;
- (bool)canDecodeHEVC2160P;
- (bool)canEncode2160P;
- (bool)canEncode2160P:(bool)arg1;
- (bool)canEncodeHEVC2160P;
- (id)deviceCharacteristicsDict;
- (bool)enoughMemoryFor2160P;
- (bool)enoughMemoryForRendering12MPPhoto;
- (bool)enoughPowerFor2160P;
- (bool)enoughPowerForLargerPhotoThumbnails;
- (bool)enoughPowerForStyleTransfer;
- (bool)enoughPowerForUIBlur;
- (long long)freeMemory;
- (bool)hasDualBackCam;
- (bool)hasMoreThan1GBOfMemory;
- (bool)hasPlentyOfMemory;
- (double)imageScale;
- (bool)isLargePhone;
- (bool)isSelfieCompatible;
- (bool)isWidePhone;
- (double)maxPixelsForImage:(bool)arg1;
- (long long)memorySize;
- (int)numberOfCPU;
- (id)orientationString;
- (int)osBuildNumber:(id)arg1;
- (bool)osVersionAtLeast:(id)arg1;
- (struct CGSize { double x1; double x2; })screenBounds;
- (bool)screenCanShow2160P;
- (double)screenHeight;
- (struct CGSize { double x1; double x2; })squareCompositionSize;
- (double)thumbnailScale;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (long long)cam_initialLayoutStyle;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

+ (id)_ccuiDevicesIncapableOfGroupRendering;

- (bool)ccuiSupportsGroupRendering;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

+ (bool)dc_requiresCompactLandscapeIcons;

// Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit

- (bool)dk_deviceSupportsGL;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_modelSpecificLocalizedStringKeyWithGreenTeaForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit

+ (id)mt_lowQualityDevicesForBaseLuminanceOverlay;
+ (id)mt_lowQualityDevicesForDynamicBlurRadius;
+ (id)mt_mediumQualityDevicesForDynamicBlurRadius;

- (long long)mt_baseLuminanceOverlayGraphicsQuality;
- (id)mt_currentProduct;
- (long long)mt_dynamicBlurRadiusGraphicsQuality;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (bool)canEncode2160P;
- (bool)enoughMemoryFor2160P;
- (bool)enoughMemoryForRendering12MPPhoto;
- (bool)enoughPowerFor2160P;
- (bool)enoughPowerForLargerPhotoThumbnails;
- (long long)freeMemory;
- (bool)hasMoreThan1GBOfMemory;
- (bool)hasPlentyOfMemory;
- (bool)isLargePhone;
- (bool)isWidePhone;
- (long long)memorySize;
- (int)numberOfCPU;
- (id)orientationString;
- (bool)osVersionAtLeast:(id)arg1;
- (bool)screenCanShow2160P;
- (bool)sufficientOomphForZoomedRenderScale;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (bool)ic_isLargeiPad;
+ (bool)ic_isPlusiPhone;
+ (bool)ic_isiPad;
+ (bool)ic_isiPhone;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)platformString;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

+ (bool)sx_isSpectreDevice;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)platform;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (id)_currentProduct;
- (id)_deviceInfoForKey:(struct __CFString { }*)arg1;
- (long long)_graphicsQualityIncludingMediumN41:(bool)arg1;
- (id)_lowQualityDevicesForCoverSheetBlur;
- (id)_lowQualityDevicesForDashBoardPresentation;
- (id)_lowQualityDevicesForHomeScreenBlur;
- (id)_lowQualityDevicesForSearchTransitions;
- (id)_mediumQualityDevicesForCoverSheetBlur;
- (id)_mediumQualityDevicesForHomeScreenBlur;
- (id)_mediumQualityProductsIncludingN41:(bool)arg1;
- (long long)sbf_bannerGraphicsQuality;
- (long long)sbf_controlCenterGraphicsQuality;
- (long long)sbf_coverSheetBlurGraphicsQuality;
- (long long)sbf_dashBoardPresentationGraphicsQuality;
- (long long)sbf_homeScreenBlurGraphicsQuality;
- (long long)sbf_searchTransitionGraphicsQuality;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)platformString;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

+ (bool)currentIsIPad;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)platformString;
+ (bool)tsk_landscapePhoneUI;
+ (bool)tsk_padUI;
+ (bool)tsk_phoneDevice;
+ (bool)tsk_phoneUI;

@end