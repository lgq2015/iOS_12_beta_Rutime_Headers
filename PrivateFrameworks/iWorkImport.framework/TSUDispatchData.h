/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUDispatchData : NSObject {
    bool  _alwaysDefragmentData;
    NSObject<OS_dispatch_data> * _data;
    NSObject<OS_dispatch_data> * _defragmentedData;
    NSObject<OS_dispatch_data> * _fragmentedData;
    unsigned long long  _fragmentsCount;
    unsigned long long  _maxFragmentsCount;
    unsigned long long  _size;
}

@property (nonatomic) bool alwaysDefragmentData;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *data;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *defragmentedData;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *fragmentedData;
@property (nonatomic, readonly) unsigned long long fragmentsCount;
@property (nonatomic) unsigned long long maxFragmentsCount;
@property (nonatomic, readonly) unsigned long long size;

- (void).cxx_destruct;
- (bool)alwaysDefragmentData;
- (void)append:(id)arg1;
- (id)data;
- (void)defragmentData;
- (id)defragmentedData;
- (id)fragmentedData;
- (unsigned long long)fragmentsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (unsigned long long)maxFragmentsCount;
- (void)setAlwaysDefragmentData:(bool)arg1;
- (void)setMaxFragmentsCount:(unsigned long long)arg1;
- (unsigned long long)size;

@end