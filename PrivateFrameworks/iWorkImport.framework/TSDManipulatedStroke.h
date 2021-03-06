/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDManipulatedStroke : TSDSmartStroke {
    NSMutableDictionary * mArrows;
    TSDPathManipulation * mManipulation;
    unsigned int  mRandomSeed;
}

@property (nonatomic, retain) TSDPathManipulation *pathManipulation;
@property (nonatomic) unsigned int randomSeed;

+ (Class)mutableClass;

- (void)applyInteriorWrapPropertiesInContext:(struct CGContext { }*)arg1 insideStroke:(bool)arg2;
- (bool)canApplyToCAShapeLayer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)drawsOutsideStrokeBounds;
- (id)initWithArchive:(const struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; int x7; int x8; float x9; struct StrokePatternArchive {} *x10; struct SmartStrokeArchive {} *x11; struct FrameArchive {} *x12; struct PatternedStrokeArchive {} *x13; }*)arg1 unarchiver:(id)arg2;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (struct CGPath { }*)manipulatePath:(struct CGPath { }*)arg1 withLineWidth:(double)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)p_setupDoodlesManipulation;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(bool)arg4 parameterized:(bool)arg5 drawWithOpenGL:(bool)arg6 shouldReverseDrawOrder:(bool)arg7;
- (id)pathManipulation;
- (struct CGPath { }*)pathToStrokeFromCGPath:(struct CGPath { }*)arg1;
- (bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (unsigned int)randomSeed;
- (double)renderedWidth;
- (void)saveToArchive:(struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; int x7; int x8; float x9; struct StrokePatternArchive {} *x10; struct SmartStrokeArchive {} *x11; struct FrameArchive {} *x12; struct PatternedStrokeArchive {} *x13; }*)arg1 archiver:(id)arg2;
- (void)seedRandom;
- (void)setPathManipulation:(id)arg1;
- (void)setRandomSeed:(unsigned int)arg1;
- (id)strokeLineEnd:(id)arg1;
- (struct CGPath { }*)strokedPath:(struct CGPath { }*)arg1 withLineWidth:(double)arg2 insideStroke:(bool)arg3;

@end
