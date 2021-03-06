/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPathShade : OADShade {
    OADRelativeRect * mFillToRect;
    bool  mIsTypeOverridden;
    int  mType;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fillToRect;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isFillToRectOverridden;
- (bool)isTypeOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFillToRect:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
