/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseObjectWithDataState : TSPDatabaseObject {
    long long  _dataState;
}

- (long long)dataState;
- (id)fileState;
- (id)fileURL;
- (bool)hasDataState;
- (bool)hasFileState;
- (id)initWithIdentifier:(long long)arg1 classType:(int)arg2 dataState:(long long)arg3;

@end
