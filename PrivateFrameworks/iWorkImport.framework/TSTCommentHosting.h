/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCommentHosting : NSObject <TSDComment> {
    NSString * _annotationUUID;
    struct TSTCellUID { 
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
        } _column; 
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
        } _row; 
    }  _cellUID;
    TSTInfo * _tableInfo;
    TSDCommentStorage * mStorage;
}

@property (nonatomic, readonly) int annotationDisplayStringType;
@property (nonatomic, readonly) int annotationType;
@property (nonatomic, retain) NSString *annotationUUID;
@property (nonatomic, retain) TSKAnnotationAuthor *author;
@property (nonatomic, readonly) struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; } cellID;
@property (nonatomic, readonly) struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; } cellUID;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHighlight;
@property (nonatomic, copy) TSDCommentStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, retain) TSTInfo *tableInfo;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)annotationDisplayStringType;
- (int)annotationType;
- (id)annotationUUID;
- (id)author;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })cellID;
- (struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })cellUID;
- (void)commentWillBeAddedToDocumentRoot;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (Class)editorClass;
- (id)initWithStorage:(id)arg1 forTableInfo:(id)arg2 cellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (bool)isFloatingComment;
- (bool)isHighlight;
- (bool)isInDocument;
- (void)p_updateAnnotationUUID;
- (void)setAnnotationUUID:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setTableInfo:(id)arg1;
- (id)storage;
- (id)tableInfo;

@end