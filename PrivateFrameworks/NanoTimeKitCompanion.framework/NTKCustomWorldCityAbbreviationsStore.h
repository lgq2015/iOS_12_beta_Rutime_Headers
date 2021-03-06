/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCustomWorldCityAbbreviationsStore : NSObject {
    NPSManager * _npsManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getCustomAbbreviationsFromPrefs;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
- (id)customAbbreviations;
- (void)dealloc;
- (id)init;
- (void)setCustomAbbreviation:(id)arg1 forCityIdentifier:(id)arg2;

@end
