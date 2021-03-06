/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionLayoutGeometryAttribute : NSObject <NSCopying> {
    long long  _attributeID;
    id  _value;
}

@property (nonatomic) long long attributeID;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (long long)attributeID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)floatValue;
- (id)geometryValue;
- (id)initWithAttributeID:(long long)arg1;
- (id)initWithAttributeID:(long long)arg1 value:(id)arg2;
- (long long)integerValue;
- (void)setAttributeID:(long long)arg1;
- (void)setValue:(id)arg1;
- (id)stringValue;
- (id)value;

@end
