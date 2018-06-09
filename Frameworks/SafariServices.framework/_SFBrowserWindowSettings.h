/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserWindowSettings : NSObject {
    bool  _invalidatesClosedWindows;
    NSMutableDictionary * _settingsDictionary;
    bool  _synchronizeScheduled;
}

@property (nonatomic, readonly) bool hasPrivateBrowsingWindow;
@property (nonatomic) bool invalidatesClosedWindows;

+ (void)setSharedSettings:(id)arg1;
+ (id)settings;

- (void).cxx_destruct;
- (bool)_boolValueForKey:(id)arg1 windowUUID:(id)arg2;
- (void)_initializeSettingsDictionaryIfNeeded;
- (id)_numberForKey:(id)arg1 windowUUID:(id)arg2;
- (void)_setBool:(bool)arg1 forKey:(id)arg2 windowUUID:(id)arg3;
- (void)_setString:(id)arg1 forKey:(id)arg2 windowUUID:(id)arg3;
- (id)_stringForKey:(id)arg1 windowUUID:(id)arg2;
- (void)_synchronizeNow;
- (bool)activeDocumentIsValidForWindowWithUUID:(id)arg1;
- (id)blankSnapshotGroupIdentifierForPrivateBrowsing:(bool)arg1 forWindowWithUUID:(id)arg2;
- (bool)hasPrivateBrowsingWindow;
- (id)init;
- (bool)invalidatesClosedWindows;
- (bool)isShowingTabViewForWindowWithUUID:(id)arg1;
- (bool)privateBrowsingEnabledForWindowWithUUID:(id)arg1;
- (void)removeWindowWithUUID:(id)arg1;
- (void)setActiveDocumentIsValid:(bool)arg1 forWindowWithUUID:(id)arg2;
- (void)setBlankSnapshotGroupIdentifier:(id)arg1 forPrivateBrowsing:(bool)arg2 forWindowWithUUID:(id)arg3;
- (void)setInvalidatesClosedWindows:(bool)arg1;
- (void)setIsShowingTabView:(bool)arg1 forWindowWithUUID:(id)arg2;
- (void)setPrivateBrowsingEnabled:(bool)arg1 forWindowWithUUID:(id)arg2;
- (void)synchronize;
- (void)validateWindowSettingsWithUUIDs:(id)arg1;

@end