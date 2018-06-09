/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseCachedRow : ML3DatabaseRow {
    NSArray * _arrayRepresentation;
}

- (void).cxx_destruct;
- (id)_numberOrZeroForColumnIndex:(unsigned long long)arg1;
- (id)arrayRepresentation;
- (const char *)cStringForColumnIndex:(unsigned long long)arg1;
- (const char *)cStringForColumnName:(id)arg1;
- (unsigned long long)columnCount;
- (id)dataForColumnIndex:(unsigned long long)arg1;
- (id)dataForColumnName:(id)arg1;
- (id)dictionaryRepresentation;
- (double)doubleForColumnIndex:(unsigned long long)arg1;
- (double)doubleForColumnName:(id)arg1;
- (void)getBlobBytes:(const void**)arg1 outLength:(int*)arg2 forColumnIndex:(unsigned long long)arg3;
- (void)getBlobBytes:(const void**)arg1 outLength:(int*)arg2 forColumnName:(id)arg3;
- (id)initWithArray:(id)arg1;
- (id)initWithParentResult:(id)arg1;
- (long long)int64ForColumnIndex:(unsigned long long)arg1;
- (long long)int64ForColumnName:(id)arg1;
- (int)intForColumnIndex:(unsigned long long)arg1;
- (int)intForColumnName:(id)arg1;
- (id)numberForColumnIndex:(unsigned long long)arg1;
- (id)numberForColumnName:(id)arg1;
- (id)stringForColumnIndex:(unsigned long long)arg1;
- (id)stringForColumnName:(id)arg1;
- (id)valueForColumnIndex:(unsigned long long)arg1;
- (id)valueForColumnName:(id)arg1;

@end