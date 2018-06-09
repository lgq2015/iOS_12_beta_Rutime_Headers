/* made by EzioChiu.
 */

@protocol UIElementProtocol <NSObject>

@required

+ (void)applyElementAttributeCacheScheme:(unsigned long long)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint { double x1; double x2; })arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint { double x1; double x2; })arg1 forApplication:(struct __AXUIElement { }*)arg2 contextId:(unsigned int)arg3;

- (NSArray *)arrayWithAXAttribute:(long long)arg1;
- (bool)boolWithAXAttribute:(long long)arg1;
- (bool)canPerformAXAction:(int)arg1;
- (struct CGColor { }*)colorWithAXAttribute:(long long)arg1;
- (void)disableCache;
- (void)enableCache:(bool)arg1;
- (bool)isMockElement;
- (bool)isValid;
- (bool)isValidForApplication:(NSObject<UIElementProtocol> *)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 currentCursorRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (NSArray *)nextElementsWithCount:(unsigned long long)arg1;
- (NSNumber *)numberWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void*)arg2;
- (struct CGPath { }*)pathWithAXAttribute:(long long)arg1;
- (bool)performAXAction:(int)arg1;
- (bool)performAXAction:(int)arg1 withValue:(id)arg2;
- (bool)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (int)pid;
- (struct CGPoint { double x1; double x2; })pointWithAXAttribute:(long long)arg1;
- (NSArray *)previousElementsWithCount:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeWithAXAttribute:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectWithAXAttribute:(long long)arg1;
- (void)setAXAttribute:(long long)arg1 withArray:(NSArray *)arg2;
- (void)setAXAttribute:(long long)arg1 withBOOL:(bool)arg2;
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(long long)arg1 withNumber:(NSNumber *)arg2;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(bool)arg3;
- (void)setAXAttribute:(long long)arg1 withPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAXAttribute:(long long)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAXAttribute:(long long)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setAXAttribute:(long long)arg1 withString:(NSString *)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(NSArray *)arg2;
- (NSString *)stringWithAXAttribute:(long long)arg1;
- (NSArray *)uiElementsWithAttribute:(long long)arg1;
- (NSArray *)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2;
- (NSArray *)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2 fetchAttributes:(bool)arg3;
- (void)updateCache:(long long)arg1;
- (void)updateCacheWithAttributes:(NSArray *)arg1;

@end