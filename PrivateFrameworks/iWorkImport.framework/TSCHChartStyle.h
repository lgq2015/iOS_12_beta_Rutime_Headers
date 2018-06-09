/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStyle : TSCHBaseStyle

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultParagraphStyleWithContext:(id)arg1;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)identifierForRoleIndex:(unsigned long long)arg1;
+ (id)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (id)presetStyleDescriptor;
+ (id)properties;

- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end