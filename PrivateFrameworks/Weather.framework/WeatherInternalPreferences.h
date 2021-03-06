/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherInternalPreferences : NSObject {
    <WeatherPreferencesPersistence> * _persistence;
}

@property (readonly) bool isInternalInstall;
@property (retain) <WeatherPreferencesPersistence> *persistence;

+ (id)sharedInternalPreferences;

- (void).cxx_destruct;
- (bool)isInternalInstall;
- (id)objectForKey:(id)arg1;
- (id)persistence;
- (void)setPersistence:(id)arg1;

@end
