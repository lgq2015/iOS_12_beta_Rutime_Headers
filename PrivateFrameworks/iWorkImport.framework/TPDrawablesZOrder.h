/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPDrawablesZOrder : TSPObject {
    NSMutableArray * _drawables;
}

@property (nonatomic, readonly) unsigned long long drawableCount;

- (void).cxx_destruct;
- (unsigned long long)addDrawable:(id)arg1;
- (id)drawableAtZOrder:(unsigned long long)arg1;
- (unsigned long long)drawableCount;
- (id)drawableEnumerator;
- (id)initWithContext:(id)arg1;
- (unsigned long long)insertDrawable:(id)arg1 atZOrder:(unsigned long long)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)moveDrawable:(id)arg1 toZOrder:(unsigned long long)arg2;
- (void)moveDrawableAtZOrder:(unsigned long long)arg1 toZOrder:(unsigned long long)arg2;
- (void)moveDrawables:(id)arg1 toIndexes:(id)arg2;
- (void)moveDrawables:(id)arg1 toZOrder:(unsigned long long)arg2;
- (id)orderedDrawables:(id)arg1;
- (void)removeDrawable:(id)arg1;
- (void)removeDrawableAtZOrder:(unsigned long long)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)swapDrawableAtZOrder:(unsigned long long)arg1 withDrawableAtZOrder:(unsigned long long)arg2;
- (unsigned long long)zOrderOfDrawable:(id)arg1;

@end