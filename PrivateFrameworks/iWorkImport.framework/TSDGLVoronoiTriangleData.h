/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLVoronoiTriangleData : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    NSArray * _cells;
    unsigned long long  _triangleCount;
    unsigned long long * _triangleIndexToCellIndexMappingTable;
    unsigned long long  _triangleIndexToCellMappingTableCount;
    unsigned long long * _triangleIndexToCellTriangleIndexMappingTable;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) unsigned long long cellCount;
@property (nonatomic, readonly) NSArray *cells;
@property (nonatomic, readonly) unsigned long long triangleCount;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (unsigned long long)cellCount;
- (id)cellFromTriangleIndex:(unsigned long long)arg1;
- (unsigned long long)cellIndexFromTriangleIndex:(unsigned long long)arg1;
- (id)cells;
- (void)dealloc;
- (id)initWithPoints:(unsigned long long)arg1 clippedToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 percentOfCellsToSplit:(double)arg3;
- (void)p_setupDataWithPointCount:(unsigned long long)arg1 clippedToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 percentOfCellsToSplit:(double)arg3;
- (unsigned long long)triangleCount;
- (unsigned long long)triangleIndexInCellFromGlobalTriangleIndex:(unsigned long long)arg1;

@end