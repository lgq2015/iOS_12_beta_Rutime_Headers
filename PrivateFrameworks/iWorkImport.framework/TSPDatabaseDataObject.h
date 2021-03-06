/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseDataObject : TSPObject {
    TSPData * _data;
}

@property (nonatomic, readonly) TSPData *data;

- (void).cxx_destruct;
- (id)data;
- (void)loadFromUnarchiver:(id)arg1;

@end
