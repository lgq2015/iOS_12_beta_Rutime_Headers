/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSKnownKeysEnumerator : NSEnumerator {
    unsigned long long  _flags;
    unsigned long long  _index;
    const id * _list;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    const id * _referenceItems;
    id  _target;
}

- (void)_invalidate;
- (void)dealloc;
- (id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(const id*)arg3 andRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 andCopyItems:(bool)arg5;
- (id)nextObject;

@end
