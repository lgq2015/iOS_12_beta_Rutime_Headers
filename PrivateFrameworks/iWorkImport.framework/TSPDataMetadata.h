/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataMetadata : TSPObject {
    TSUColor * _fallbackColor;
}

@property (nonatomic, copy) TSUColor *fallbackColor;

- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)fallbackColor;
- (void)loadFromMessage:(const struct DataMetadata { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct DataMetadata { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; }*)arg1 archiver:(id)arg2;
- (void)setFallbackColor:(id)arg1;

@end
