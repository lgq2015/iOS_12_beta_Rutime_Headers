/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKDevice : NSObject {
    unsigned long long  _collectionType;
    bool  _isBridgeActive;
    bool  _isExplorer;
    unsigned long long  _materialType;
    NRDevice * _nrDevice;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _screenBounds;
    double  _screenCornerRadius;
    double  _screenScale;
    unsigned long long  _sizeClass;
}

@property (nonatomic, readonly) NRDevice *_rawNRDevice;
@property (nonatomic, readonly) bool canCustomize;
@property (nonatomic) unsigned long long collectionType;
@property (nonatomic) bool isBridgeActive;
@property (nonatomic, readonly) bool isBridgeActive;
@property (nonatomic) bool isExplorer;
@property (nonatomic, readonly) bool isLocked;
@property (nonatomic, readonly) bool isPaired;
@property (nonatomic, readonly) bool isRadioPhoneComplicationEnabled;
@property (nonatomic) unsigned long long materialType;
@property (nonatomic, retain) NRDevice *nrDevice;
@property (nonatomic, readonly) NSUUID *nrDeviceUUID;
@property (nonatomic, readonly) unsigned int nrDeviceVersion;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property (nonatomic) double screenCornerRadius;
@property (nonatomic) double screenScale;
@property (nonatomic) unsigned long long sizeClass;
@property (nonatomic, readonly) bool unlockedSinceBoot;

// Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit

+ (void)_deviceDidBecomeActive;
+ (void)_resetCurrentDevice;
+ (id)currentDevice;
+ (id)deviceForNRDevice:(id)arg1;
+ (id)deviceForNRDevice:(id)arg1 forced:(bool)arg2;
+ (id)deviceForNRDeviceUUID:(id)arg1;
+ (void)initialize;
+ (id)nrDeviceForNRDeviceUUID:(id)arg1;
+ (void)setCurrentDevice:(id)arg1;

- (void).cxx_destruct;
- (void)_loadDeviceInfo;
- (id)_rawNRDevice;
- (unsigned long long)collectionType;
- (id)init;
- (id)initWithNRDevice:(id)arg1;
- (bool)isBridgeActive;
- (bool)isEqual:(id)arg1;
- (bool)isExplorer;
- (bool)isLocked;
- (unsigned long long)materialType;
- (id)nrDevice;
- (id)nrDeviceUUID;
- (unsigned int)nrDeviceVersion;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (double)screenCornerRadius;
- (double)screenScale;
- (void)setCollectionType:(unsigned long long)arg1;
- (void)setIsBridgeActive:(bool)arg1;
- (void)setIsExplorer:(bool)arg1;
- (void)setMaterialType:(unsigned long long)arg1;
- (void)setNrDevice:(id)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScreenCornerRadius:(double)arg1;
- (void)setScreenScale:(double)arg1;
- (void)setSizeClass:(unsigned long long)arg1;
- (unsigned long long)sizeClass;
- (bool)unlockedSinceBoot;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

+ (void)setBridgeActiveNRDevice:(id)arg1;

- (bool)canCustomize;
- (bool)isPaired;
- (bool)isRadioPhoneComplicationEnabled;

@end