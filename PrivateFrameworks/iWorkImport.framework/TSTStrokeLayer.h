/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeLayer : TSPObject <NSCopying, NSMutableCopying> {
    unsigned short  _columnOrRowIndex;
    struct vector<TSTStrokeLayerRun, std::__1::allocator<TSTStrokeLayerRun> > { 
        struct TSTStrokeLayerRun {} *__begin_; 
        struct TSTStrokeLayerRun {} *__end_; 
        struct __compressed_pair<TSTStrokeLayerRun *, std::__1::allocator<TSTStrokeLayerRun> > { 
            struct TSTStrokeLayerRun {} *__value_; 
        } __end_cap_; 
    }  mStrokeRuns;
}

@property (nonatomic) unsigned short columnOrRowIndex;
@property (nonatomic, readonly) bool isEmpty;

+ (id)strokeLayer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned short)columnOrRowIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateStrokesUsingBlock:(id /* block */)arg1;
- (id)findStrokeAndRangeAtIndex:(long long)arg1;
- (id)initWithContext:(id)arg1 columnOrRowIndex:(unsigned short)arg2;
- (bool)isEmpty;
- (void)loadFromUnarchiver:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nextStrokeAndRange:(id)arg1;
- (void)p_appendStroke:(id)arg1 inRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg2 order:(int)arg3;
- (void)p_flattenStrokeOrder;
- (void)p_insertSpaceAtRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)p_invalidate;
- (void)p_invalidateRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)p_mergeStrokeRunsAtPosition:(unsigned long long)arg1;
- (void)p_removeRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)p_setStroke:(id)arg1 inRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg2 order:(int)arg3;
- (void)p_setStrokeRuns:(struct vector<TSTStrokeLayerRun, std::__1::allocator<TSTStrokeLayerRun> > { struct TSTStrokeLayerRun {} *x1; struct TSTStrokeLayerRun {} *x2; struct __compressed_pair<TSTStrokeLayerRun *, std::__1::allocator<TSTStrokeLayerRun> > { struct TSTStrokeLayerRun {} *x_3_1_1; } x3; })arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setColumnOrRowIndex:(unsigned short)arg1;
- (long long)startingIndex;
- (id)strokeLayerModifiedByInsertingSpaceAt:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (id)strokeLayerModifiedByRemovingRangeAt:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;

@end
