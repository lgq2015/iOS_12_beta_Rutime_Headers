/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRelatedTilingLayoutInvalidationContext : PXTilingLayoutInvalidationContext {
    PXRelatedDataSource * _fromDataSource;
    PXRelatedDataSource * _toDataSource;
}

@property (nonatomic, retain) PXRelatedDataSource *fromDataSource;
@property (nonatomic, retain) PXRelatedDataSource *toDataSource;

- (void).cxx_destruct;
- (id)fromDataSource;
- (void)setFromDataSource:(id)arg1;
- (void)setToDataSource:(id)arg1;
- (id)toDataSource;

@end
