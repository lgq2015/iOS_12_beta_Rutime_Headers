/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeSidecarLookupMap : NSObject {
    TSTStrokeLayer * _bottomStrokeLayer;
    NSIndexSet * _columnIndiciesInRow;
    TSTCellRegion * _region;
    TSTStrokeSidecar * _strokeSidecar;
    TSTStrokeLayer * _topStrokeLayer;
}

@property (nonatomic, retain) TSTStrokeLayer *bottomStrokeLayer;
@property (nonatomic, retain) NSIndexSet *columnIndiciesInRow;
@property (nonatomic, retain) TSTCellRegion *region;
@property (nonatomic, retain) TSTStrokeSidecar *strokeSidecar;
@property (nonatomic, retain) TSTStrokeLayer *topStrokeLayer;

- (void).cxx_destruct;
- (bool)anyCellBordersInThisRow;
- (id)bottomStrokeLayer;
- (bool)cellBorderAtColumn:(unsigned char)arg1;
- (id)columnIndiciesInRow;
- (id)initWithStrokeSidecar:(id)arg1 region:(id)arg2;
- (id)region;
- (void)setBottomStrokeLayer:(id)arg1;
- (void)setColumnIndiciesInRow:(id)arg1;
- (void)setIteratorToRow:(unsigned short)arg1;
- (void)setRegion:(id)arg1;
- (void)setStrokeSidecar:(id)arg1;
- (void)setTopStrokeLayer:(id)arg1;
- (id)strokeSidecar;
- (id)topStrokeLayer;

@end
