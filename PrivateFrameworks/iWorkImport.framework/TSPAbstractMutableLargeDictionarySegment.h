/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPAbstractMutableLargeDictionarySegment : TSPObject {
    NSMutableDictionary * _backingStore;
    unsigned int  _delayedArchivingPriority;
    <TSPMutableLargeDictionarySegmentDelegate> * _delegate;
    unsigned long long  _estimatedByteSize;
    double  _keyHashAverage;
    NSString * _packageLocator;
    bool  _shouldDelayArchiving;
    bool  _storeOutsideObjectArchive;
}

@property (readonly) unsigned long long count;
@property (nonatomic) unsigned int delayedArchivingPriority;
@property (nonatomic) <TSPMutableLargeDictionarySegmentDelegate> *delegate;
@property (nonatomic) unsigned long long estimatedByteSize;
@property (readonly) double keyHashAverage;
@property (nonatomic, copy) NSString *packageLocator;
@property (nonatomic) bool shouldDelayArchiving;
@property (nonatomic) bool storeOutsideObjectArchive;

- (void).cxx_destruct;
- (id)bisectAtHash:(unsigned long long)arg1;
- (void)commonInit;
- (unsigned long long)count;
- (unsigned int)delayedArchivingPriority;
- (id)delegate;
- (unsigned long long)estimatedByteSize;
- (unsigned long long)estimatedByteSizeOfElement:(id)arg1 andKey:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithDelegate:(id)arg1 shouldDelayArchiving:(bool)arg2 context:(id)arg3;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 context:(id)arg4;
- (id)keyEnumerator;
- (double)keyHashAverage;
- (void)loadFromLargeDictionarySegmentMessage:(const struct LargeDictionarySegment { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; bool x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadStoreOutsideObjectArchiveFromUnarchiver:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)packageLocator;
- (void)removeObjectForKey:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToLargeDictionarySegmentMessage:(struct LargeDictionarySegment { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; bool x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; }*)arg1 archiver:(id)arg2;
- (void)setDelayedArchivingPriority:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEstimatedByteSize:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 willModify:(bool)arg3;
- (void)setPackageLocator:(id)arg1;
- (void)setShouldDelayArchiving:(bool)arg1;
- (void)setStoreOutsideObjectArchive:(bool)arg1;
- (bool)shouldDelayArchiving;
- (bool)storeOutsideObjectArchive;

@end