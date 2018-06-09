/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditPrecisionLevelContentView : UIView <PUPhotoEditLayoutStaticAdaptable> {
    <PUPhotoEditPrecisionLevelContentViewDataSource> * _dataSource;
    bool  _hideIdentityIndicator;
    long long  _layoutOrientation;
    unsigned long long  _mainTickMarkInterval;
}

@property (nonatomic) <PUPhotoEditPrecisionLevelContentViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideIdentityIndicator;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic) unsigned long long mainTickMarkInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)hideIdentityIndicator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutOrientation;
- (unsigned long long)mainTickMarkInterval;
- (void)setDataSource:(id)arg1;
- (void)setHideIdentityIndicator:(bool)arg1;
- (void)setMainTickMarkInterval:(unsigned long long)arg1;
- (void)setupWithLayoutOrientation:(long long)arg1;

@end