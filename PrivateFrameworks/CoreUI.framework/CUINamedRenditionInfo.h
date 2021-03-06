/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedRenditionInfo : NSObject {
    void * _bitmap;
    const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; } * _keyFormat;
}

- (id)_initWithKeyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg1 andBitmap:(void**)arg2;
- (id)archivedData;
- (int)attributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (id)bitwiseAndWith:(id)arg1;
- (void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (void)dealloc;
- (id)description;
- (bool)diverseContentPresentForAttribute:(int)arg1;
- (id)initWithData:(id)arg1 andKeyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg2;
- (id)initWithKeyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedRenditionInfo:(id)arg1;
- (unsigned long long)numberOfBitsSet;
- (void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2;

@end
