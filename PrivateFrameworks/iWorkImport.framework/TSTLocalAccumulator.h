/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLocalAccumulator : NSObject {
    unsigned long long  _count;
    struct TSUCellCoord { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  _idOfFirstOccurence;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; } idOfFirstOccurence;

- (unsigned long long)count;
- (id)description;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })idOfFirstOccurence;
- (void)setCount:(unsigned long long)arg1;
- (void)setIdOfFirstOccurence:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;

@end
