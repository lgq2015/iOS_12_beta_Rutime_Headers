/* made by EzioChiu.
 */

@protocol NTKTemplateComplicationDisplay <NTKComplicationDisplay, NTKTimeTravel>

@required

+ (bool)handlesComplicationTemplate:(CLKComplicationTemplate *)arg1;

- (CLKComplicationTemplate *)complicationTemplate;
- (void)setComplicationTemplate:(CLKComplicationTemplate *)arg1;

@optional

+ (bool)supportsComplicationFamily:(long long)arg1;

- (long long)layoutOverride;

@end
