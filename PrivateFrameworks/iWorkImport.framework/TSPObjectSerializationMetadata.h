/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectSerializationMetadata : TSPObject {
    NSArray * _dataReferences;
    TSPDataMetadataMap * _identifierToDataMetadataMap;
    struct ObjectSerializationMetadata { 
        int (**_vptr$MessageLite)(); 
        struct UnknownFieldSet { 
            struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *fields_; 
        } _unknown_fields_; 
        unsigned int _has_bits_[1]; 
        int _cached_size_; 
        struct RepeatedField<unsigned int> { 
            unsigned int *elements_; 
            int current_size_; 
            int total_size_; 
        } version_; 
        int _version_cached_byte_size_; 
        struct UUID {} *source_document_uuid_; 
        struct UUID {} *version_uuid_; 
        struct ComponentInfo {} *component_; 
        struct RepeatedPtrField<TSP::DataInfo> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } datas_; 
        struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } external_object_uuid_map_entries_; 
        struct Reference {} *data_metadata_map_; 
    }  _message;
}

@property (nonatomic, copy) NSArray *dataReferences;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (id)dataReferences;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (struct ObjectSerializationMetadata { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; struct UUID {} *x7; struct UUID {} *x8; struct ComponentInfo {} *x9; struct RepeatedPtrField<TSP::DataInfo> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; struct Reference {} *x12; }*)message;
- (void)saveToArchiver:(id)arg1;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;
- (void)setDataReferences:(id)arg1;
- (long long)tsp_identifier;

@end
