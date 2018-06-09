/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarBatteryItemView : UIStatusBarItemView {
    UIView * _accessoryView;
    bool  _batterySaverModeActive;
    int  _cachedAXHUDCapacity;
    UIImage * _cachedAXHUDImage;
    unsigned long long  _cachedAXHUDStyle;
    unsigned long long  _cachedBatteryStyle;
    int  _cachedCapacity;
    bool  _cachedImageHasAccessoryImage;
    _UILegibilityImageSet * _cachedImageSet;
    int  _capacity;
    int  _state;
}

@property (nonatomic) int cachedAXHUDCapacity;
@property (nonatomic, retain) UIImage *cachedAXHUDImage;
@property (nonatomic) unsigned long long cachedAXHUDStyle;
@property (nonatomic) unsigned long long cachedBatteryStyle;
@property (nonatomic) int cachedCapacity;
@property (nonatomic) bool cachedImageHasAccessoryImage;
@property (nonatomic, retain) _UILegibilityImageSet *cachedImageSet;

- (void).cxx_destruct;
- (id)_accessoryImage;
- (struct CGSize { double x1; double x2; })_batteryOffsetWithBackground:(id)arg1;
- (id)_contentsImage;
- (bool)_needsAccessoryImage;
- (void)_updateAccessoryImage;
- (id)accessibilityHUDRepresentation;
- (int)cachedAXHUDCapacity;
- (id)cachedAXHUDImage;
- (unsigned long long)cachedAXHUDStyle;
- (unsigned long long)cachedBatteryStyle;
- (int)cachedCapacity;
- (bool)cachedImageHasAccessoryImage;
- (id)cachedImageSet;
- (id)contentsImage;
- (double)extraRightPadding;
- (double)legibilityStrength;
- (void)setCachedAXHUDCapacity:(int)arg1;
- (void)setCachedAXHUDImage:(id)arg1;
- (void)setCachedAXHUDStyle:(unsigned long long)arg1;
- (void)setCachedBatteryStyle:(unsigned long long)arg1;
- (void)setCachedCapacity:(int)arg1;
- (void)setCachedImageHasAccessoryImage:(bool)arg1;
- (void)setCachedImageSet:(id)arg1;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end