/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECellValue : NSObject <NSCopying> {
    TSULocale * _locale;
    int  _valueType;
}

@property (nonatomic, retain) TSULocale *locale;
@property (nonatomic) int valueType;

+ (id)cellValueWithArchive:(const struct CellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct BooleanCellValueArchive {} *x5; struct DateCellValueArchive {} *x6; struct NumberCellValueArchive {} *x7; struct StringCellValueArchive {} *x8; struct ErrorCellValueArchive {} *x9; int x10; }*)arg1 locale:(id)arg2;
+ (id)newCellValueFromTSCEValue:(const struct TSCEValue { unsigned long long x1[10]; int x2; }*)arg1 withLocale:(id)arg2;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (long long)compareToCellValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayString;
- (void)encodeCellValueToArchive:(struct CellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct BooleanCellValueArchive {} *x5; struct DateCellValueArchive {} *x6; struct NumberCellValueArchive {} *x7; struct StringCellValueArchive {} *x8; struct ErrorCellValueArchive {} *x9; int x10; }*)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)initWithLocale:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCellValue:(id)arg1;
- (id)locale;
- (void)setLocale:(id)arg1;
- (void)setValueType:(int)arg1;
- (struct TSCEValue { unsigned long long x1[10]; int x2; })tsceValue;
- (int)valueType;

@end
