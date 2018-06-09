/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DValueAxisLabelKind : TSCH3DAxisLabelKind

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)kind;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count:(id)arg1;
- (id)labelForAxis:(id)arg1 index:(unsigned long long)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2;

@end