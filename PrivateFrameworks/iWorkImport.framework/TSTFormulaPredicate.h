/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFormulaPredicate : NSObject <NSCopying> {
    int  mArgIndex0;
    int  mArgIndex1;
    int  mArgIndex2;
    struct TSCEASTNodeCrossTableColumnReference { 
        short column; 
        unsigned int columnIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    }  mCrossTableColumnRefParam0;
    struct TSCEASTNodeCrossTableColumnReference { 
        short column; 
        unsigned int columnIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    }  mCrossTableColumnRefParam1;
    struct TSCEASTNodeCrossTableColumnReference { 
        short column; 
        unsigned int columnIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    }  mCrossTableColumnRefParam2;
    struct TSCEASTNodeCrossTableCellReference { 
        int row; 
        short column; 
        unsigned int rowIsAbsolute : 1; 
        unsigned int columnIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    }  mCrossTableRefParam0;
    struct TSCEASTNodeCrossTableCellReference { 
        int row; 
        short column; 
        unsigned int rowIsAbsolute : 1; 
        unsigned int columnIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    }  mCrossTableRefParam1;
    struct TSCEASTNodeCrossTableCellReference { 
        int row; 
        short column; 
        unsigned int rowIsAbsolute : 1; 
        unsigned int columnIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    }  mCrossTableRefParam2;
    struct TSCEASTNodeCrossTableRowReference { 
        int row; 
        unsigned int rowIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    }  mCrossTableRowRefParam0;
    struct TSCEASTNodeCrossTableRowReference { 
        int row; 
        unsigned int rowIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    }  mCrossTableRowRefParam1;
    struct TSCEASTNodeCrossTableRowReference { 
        int row; 
        unsigned int rowIsAbsolute : 1; 
        struct { 
            unsigned char byte0; 
            unsigned char byte1; 
            unsigned char byte2; 
            unsigned char byte3; 
            unsigned char byte4; 
            unsigned char byte5; 
            unsigned char byte6; 
            unsigned char byte7; 
            unsigned char byte8; 
            unsigned char byte9; 
            unsigned char byte10; 
            unsigned char byte11; 
            unsigned char byte12; 
            unsigned char byte13; 
            unsigned char byte14; 
            unsigned char byte15; 
        } tableID; 
    }  mCrossTableRowRefParam2;
    NSDate * mDateTimeParam1;
    NSDate * mDateTimeParam2;
    struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSCEFormat { int x_4_1_1; bool x_4_1_2; void *x_4_1_3; } x4; bool x5; } * mDurationParam1;
    struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSCEFormat { int x_4_1_1; bool x_4_1_2; void *x_4_1_3; } x4; bool x5; } * mDurationParam2;
    struct TSCEFormula { 
        struct TSCEASTNodeArray {} *mASTNodeArray; 
        struct TSCEFormulaTranslationFlags { 
            unsigned int mExcelImportTranslation : 1; 
            unsigned int mNumberToDateCoercionRemovalTranslation : 1; 
            unsigned int mContainsUidFormReferences : 1; 
        } mTranslationFlags; 
        struct UUIDData<TSP::UUIDData> { 
            union { 
                unsigned char _uuid[16]; 
                struct { 
                    unsigned char byte0; 
                    unsigned char byte1; 
                    unsigned char byte2; 
                    unsigned char byte3; 
                    unsigned char byte4; 
                    unsigned char byte5; 
                    unsigned char byte6; 
                    unsigned char byte7; 
                    unsigned char byte8; 
                    unsigned char byte9; 
                    unsigned char byte10; 
                    unsigned char byte11; 
                    unsigned char byte12; 
                    unsigned char byte13; 
                    unsigned char byte14; 
                    unsigned char byte15; 
                } _cfuuid; 
                struct { 
                    unsigned long long _lower; 
                    unsigned long long _upper; 
                } ; 
            } ; 
        } _hostTableUID; 
        struct UUIDData<TSP::UUIDData> { 
            union { 
                unsigned char _uuid[16]; 
                struct { 
                    unsigned char byte0; 
                    unsigned char byte1; 
                    unsigned char byte2; 
                    unsigned char byte3; 
                    unsigned char byte4; 
                    unsigned char byte5; 
                    unsigned char byte6; 
                    unsigned char byte7; 
                    unsigned char byte8; 
                    unsigned char byte9; 
                    unsigned char byte10; 
                    unsigned char byte11; 
                    unsigned char byte12; 
                    unsigned char byte13; 
                    unsigned char byte14; 
                    unsigned char byte15; 
                } _cfuuid; 
                struct { 
                    unsigned long long _lower; 
                    unsigned long long _upper; 
                } ; 
            } ; 
        } _hostColumnUID; 
        struct UUIDData<TSP::UUIDData> { 
            union { 
                unsigned char _uuid[16]; 
                struct { 
                    unsigned char byte0; 
                    unsigned char byte1; 
                    unsigned char byte2; 
                    unsigned char byte3; 
                    unsigned char byte4; 
                    unsigned char byte5; 
                    unsigned char byte6; 
                    unsigned char byte7; 
                    unsigned char byte8; 
                    unsigned char byte9; 
                    unsigned char byte10; 
                    unsigned char byte11; 
                    unsigned char byte12; 
                    unsigned char byte13; 
                    unsigned char byte14; 
                    unsigned char byte15; 
                } _cfuuid; 
                struct { 
                    unsigned long long _lower; 
                    unsigned long long _upper; 
                } ; 
            } ; 
        } _hostRowUID; 
    }  mFormula;
    unsigned char  mNodeTag0;
    unsigned char  mNodeTag1;
    unsigned char  mNodeTag2;
    double  mNumberParam1;
    double  mNumberParam2;
    bool  mParamsAreDone;
    NSLock * mPopulateMembersLock;
    TSTFormulaPredArg * mPredArg1;
    TSTFormulaPredArg * mPredArg2;
    int  mPredicateType;
    int  mQualifier1;
    int  mQualifier2;
    NSString * mStringParam1;
}

@property (nonatomic, retain) TSTFormulaPredArg *predArg1;
@property (nonatomic, retain) TSTFormulaPredArg *predArg2;

+ (id)defaultPredicateForType:(int)arg1 argumentCellRef:(struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg2 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
+ (id)defaultPredicateForType:(int)arg1 argumentCellReference:(id)arg2 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
+ (bool)isThresholdNeededForType:(int)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)containsUidReferences;
- (id)copyByClearingUids:(id)arg1 containingTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2;
- (id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 calcEngine:(id)arg2 ownerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg3 error:(bool*)arg4;
- (id)copyByRemappingOwnerUIDsWithMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 calcEngine:(id)arg2 error:(bool*)arg3;
- (id)copyByRepairingBadReferences:(id)arg1;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (id)copyByUpdatingLinkedTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)copyByUpgradingToLinkedRefForTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)copyToGeometricFormForConditionalStylesWithTableInfo:(id)arg1 containingCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 rewriteFlags:(unsigned char)arg3;
- (id)copyToGeometricFormForHiddenRowsWithTableInfo:(id)arg1 containsBadRef:(bool*)arg2;
- (id)copyToGeometricFormWithRewriteContext:(id)arg1;
- (id)copyToUidFormForConditionalStylesWithTableInfo:(id)arg1 containingCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 preserveHostCell:(bool)arg3;
- (id)copyToUidFormForHiddenRowsWithTableInfo:(id)arg1;
- (id)copyToUidFormWithRewriteContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct TSCEASTNodeCrossTableColumnReference { short x1; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; }*)crossTableColumnRefParam0;
- (const struct TSCEASTNodeCrossTableColumnReference { short x1; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; }*)crossTableColumnRefParam1;
- (const struct TSCEASTNodeCrossTableColumnReference { short x1; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; }*)crossTableColumnRefParam2;
- (const struct TSCEASTNodeCrossTableCellReference { int x1; short x2; unsigned int x3 : 1; unsigned int x4 : 1; struct { unsigned char x_5_1_1; unsigned char x_5_1_2; unsigned char x_5_1_3; unsigned char x_5_1_4; unsigned char x_5_1_5; unsigned char x_5_1_6; unsigned char x_5_1_7; unsigned char x_5_1_8; unsigned char x_5_1_9; unsigned char x_5_1_10; unsigned char x_5_1_11; unsigned char x_5_1_12; unsigned char x_5_1_13; unsigned char x_5_1_14; unsigned char x_5_1_15; unsigned char x_5_1_16; } x5; }*)crossTableRefParam0;
- (const struct TSCEASTNodeCrossTableCellReference { int x1; short x2; unsigned int x3 : 1; unsigned int x4 : 1; struct { unsigned char x_5_1_1; unsigned char x_5_1_2; unsigned char x_5_1_3; unsigned char x_5_1_4; unsigned char x_5_1_5; unsigned char x_5_1_6; unsigned char x_5_1_7; unsigned char x_5_1_8; unsigned char x_5_1_9; unsigned char x_5_1_10; unsigned char x_5_1_11; unsigned char x_5_1_12; unsigned char x_5_1_13; unsigned char x_5_1_14; unsigned char x_5_1_15; unsigned char x_5_1_16; } x5; }*)crossTableRefParam1;
- (const struct TSCEASTNodeCrossTableCellReference { int x1; short x2; unsigned int x3 : 1; unsigned int x4 : 1; struct { unsigned char x_5_1_1; unsigned char x_5_1_2; unsigned char x_5_1_3; unsigned char x_5_1_4; unsigned char x_5_1_5; unsigned char x_5_1_6; unsigned char x_5_1_7; unsigned char x_5_1_8; unsigned char x_5_1_9; unsigned char x_5_1_10; unsigned char x_5_1_11; unsigned char x_5_1_12; unsigned char x_5_1_13; unsigned char x_5_1_14; unsigned char x_5_1_15; unsigned char x_5_1_16; } x5; }*)crossTableRefParam2;
- (const struct TSCEASTNodeCrossTableRowReference { int x1; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; }*)crossTableRowRefParam0;
- (const struct TSCEASTNodeCrossTableRowReference { int x1; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; }*)crossTableRowRefParam1;
- (const struct TSCEASTNodeCrossTableRowReference { int x1; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; }*)crossTableRowRefParam2;
- (id)dateTimeParam1;
- (id)dateTimeParam2;
- (void)dealloc;
- (id)description;
- (struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSCEFormat { int x_4_1_1; bool x_4_1_2; void *x_4_1_3; } x4; bool x5; }*)durationParam1;
- (struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSCEFormat { int x_4_1_1; bool x_4_1_2; void *x_4_1_3; } x4; bool x5; }*)durationParam2;
- (void)encodeToArchive:(struct FormulaPredicateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FormulaArchive {} *x5; int x6; int x7; int x8; int x9; int x10; int x11; }*)arg1 archiver:(id)arg2;
- (bool)evaluateAtCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 inFormulaOwner:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2 calculationEngine:(id)arg3;
- (struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)formula;
- (bool)hasBadRefWithUidInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initFromArchive:(const struct FormulaPredicateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FormulaArchive {} *x5; int x6; int x7; int x8; int x9; int x10; int x11; }*)arg1;
- (id)initWithLiteralDateType:(int)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(int)arg6 qualifier2:(int)arg7 argumentCellRef:(struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg8 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg9;
- (id)initWithLiteralDateType:(int)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(int)arg6 qualifier2:(int)arg7 argumentCellRef:(struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg8 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg9 forConditionalStyle:(bool)arg10;
- (id)initWithLiteralDurationType:(int)arg1 duration1:(double)arg2 durationUnits1:(int)arg3 duration2:(double)arg4 durationUnits2:(int)arg5 qualifier:(int)arg6 argumentCellRef:(struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg7 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg8;
- (id)initWithLiteralNumberType:(int)arg1 number1:(double)arg2 number2:(double)arg3 qualifier:(int)arg4 argumentCellRef:(struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg5 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg6;
- (id)initWithLiteralTextType:(int)arg1 string:(id)arg2 argumentCellRef:(struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg3 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (id)initWithPredicateType:(int)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellRef:(struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg6 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg7;
- (id)initWithPredicateType:(int)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellRef:(struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg6 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg7 forConditionalStyle:(bool)arg8;
- (id)initWithPredicateType:(int)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellReference:(id)arg6 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg7 forConditionalStyle:(bool)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualForInspector:(id)arg1 atHostCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (unsigned char)nodeTag0;
- (unsigned char)nodeTag1;
- (unsigned char)nodeTag2;
- (double)numberParam1;
- (double)numberParam2;
- (int)p_argTypeForNodeTag:(unsigned char)arg1 argNum:(unsigned long long)arg2 calculationEngine:(id)arg3 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (void)p_clearDerivedVariables;
- (struct TSCEFormulaCreator { id /* block */ x1; })p_creatorForPeriodBoundaryWithScale:(int)arg1 direction:(int)arg2 offset:(id)arg3 argIndex:(unsigned int)arg4 earlierBound:(bool)arg5 isCalPers:(bool)arg6 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg7;
- (bool)p_isEqualForNonFormulaItems:(id)arg1;
- (void)p_populateMembersFromFormula;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withCellRef:(struct TSCEASTNodeCrossTableCellReference { int x1; short x2; unsigned int x3 : 1; unsigned int x4 : 1; struct { unsigned char x_5_1_1; unsigned char x_5_1_2; unsigned char x_5_1_3; unsigned char x_5_1_4; unsigned char x_5_1_5; unsigned char x_5_1_6; unsigned char x_5_1_7; unsigned char x_5_1_8; unsigned char x_5_1_9; unsigned char x_5_1_10; unsigned char x_5_1_11; unsigned char x_5_1_12; unsigned char x_5_1_13; unsigned char x_5_1_14; unsigned char x_5_1_15; unsigned char x_5_1_16; } x5; })arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withColumnRef:(struct TSCEASTNodeCrossTableColumnReference { short x1; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; })arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDate:(id)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDouble:(double)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDurationValue:(double)arg3 withUnit:(int)arg4;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withRowRef:(struct TSCEASTNodeCrossTableRowReference { int x1; unsigned int x2 : 1; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; unsigned char x_3_1_15; unsigned char x_3_1_16; } x3; })arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withString:(id)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withUidRangeRef:(id)arg3;
- (void)p_setParamIndex0:(int)arg1;
- (void)p_setParamIndex1:(int)arg1;
- (void)p_setParamIndex2:(int)arg1;
- (void)p_setPredicateType:(int)arg1;
- (void)p_setQualifier1:(int)arg1;
- (void)p_setQualifier2:(int)arg1;
- (bool)p_testDataTypesForArg0:(int)arg1 arg1:(int)arg2 arg2:(int)arg3 predShouldReturn:(bool*)arg4;
- (id)predArg1;
- (id)predArg2;
- (id)predicateArg1atHostCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 calcEngine:(id)arg2;
- (id)predicateArg2atHostCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 calcEngine:(id)arg2;
- (int)predicateType;
- (int)qualifier1;
- (int)qualifier2;
- (void)setFormula:(const struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)arg1;
- (void)setHostCell:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 hostColumnUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2 hostRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg3;
- (void)setPredArg1:(id)arg1;
- (void)setPredArg2:(id)arg1;
- (id)stringParam1;
- (void)upgradeTopAndBottom;

@end
