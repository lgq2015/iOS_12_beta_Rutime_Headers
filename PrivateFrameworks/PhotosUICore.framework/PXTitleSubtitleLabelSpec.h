/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTitleSubtitleLabelSpec : PXViewSpec {
    double  _distanceBetweenTitleBaselineAndSubtitleBaseline;
    double  _interLabelSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    PXLabelSpec * _subtitleLabelSpec;
    PXLabelSpec * _titleLabelSpec;
}

@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) double interLabelSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, retain) PXLabelSpec *subtitleLabelSpec;
@property (nonatomic, retain) PXLabelSpec *titleLabelSpec;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)distanceBetweenTitleBaselineAndSubtitleBaseline;
- (unsigned long long)hash;
- (double)interLabelSpacing;
- (bool)isEqual:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setDistanceBetweenTitleBaselineAndSubtitleBaseline:(double)arg1;
- (void)setInterLabelSpacing:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSubtitleLabelSpec:(id)arg1;
- (void)setTitleLabelSpec:(id)arg1;
- (id)subtitleLabelSpec;
- (id)titleLabelSpec;

@end
