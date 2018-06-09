/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhoneHatchBrush : MFPhoneBrush {
    OITSUColor * m_colour;
    int  m_style;
}

+ (id)hatchBrushWithColour:(id)arg1 in_style:(int)arg2;
+ (id)patternNameForHatchStyle:(int)arg1;

- (void)dealloc;
- (void)fillPath:(id)arg1 in_path:(id)arg2;
- (id)initWithColour:(id)arg1 in_style:(int)arg2;

@end