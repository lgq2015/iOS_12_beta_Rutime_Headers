/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETBoxcarFilterPointFIFO : ETPointFIFO {
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__value_"^ {}  _prevPoints;
    float  _spacing;
    unsigned long long  _width;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<float __attribute__((ext_vector_type(2)))' */ struct  prevPoints; /* unknown property attribute:  std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^}} */
@property (nonatomic) float spacing;
@property (nonatomic) unsigned long long width;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
- (void)clear;
- (void)emitAveragedPoint;
- (void)flush;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3;
- (struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {})prevPoints;
- (void)setPrevPoints:(struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {})arg1;
- (void)setSpacing:(float)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (float)spacing;
- (unsigned long long)width;

@end