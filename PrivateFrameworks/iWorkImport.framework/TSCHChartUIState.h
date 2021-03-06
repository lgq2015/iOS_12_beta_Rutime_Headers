/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartUIState : NSObject <NSCopying> {
    bool  _isValidMultiDataSetIndex;
    unsigned long long  _lastColCountInCDE;
    unsigned long long  _lastColSelectedInCDE;
    unsigned long long  _lastRowCountInCDE;
    unsigned long long  _lastRowSelectedInCDE;
    unsigned long long  _multiDataSetIndex;
    bool  _useFullKeyboard;
}

@property (nonatomic, readonly) bool isValidMultiDataSetIndex;
@property (nonatomic, readonly) unsigned long long lastColCountInCDE;
@property (nonatomic, readonly) unsigned long long lastColSelectedInCDE;
@property (nonatomic, readonly) unsigned long long lastRowCountInCDE;
@property (nonatomic, readonly) unsigned long long lastRowSelectedInCDE;
@property (nonatomic, readonly) unsigned long long multiDataSetIndex;
@property (nonatomic, readonly) bool useFullKeyboard;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct ChartUIState { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (id)initWithRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 colRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 useFullKeyboard:(bool)arg3;
- (id)initWithRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 colRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 useFullKeyboard:(bool)arg3 multiDataSetIndex:(unsigned long long)arg4;
- (id)initWithRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 colRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 useFullKeyboard:(bool)arg3 multiDataSetIndex:(unsigned long long)arg4 validIndex:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isValidMultiDataSetIndex;
- (unsigned long long)lastColCountInCDE;
- (unsigned long long)lastColSelectedInCDE;
- (unsigned long long)lastRowCountInCDE;
- (unsigned long long)lastRowSelectedInCDE;
- (unsigned long long)multiDataSetIndex;
- (void)saveToArchive:(struct ChartUIState { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (bool)useFullKeyboard;

@end
