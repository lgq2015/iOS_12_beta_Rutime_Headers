/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUIKBGraphSerialization : NSObject {
    NSMutableDictionary * _deserializationCache;
    bool  _disableOffsets;
    NSData * _graphData;
    NSDictionary * _keyboardOffsets;
    NSData * _keyboardOffsetsData;
    NSMutableDictionary * _maxEdgeWidths;
    NSMutableDictionary * _minEdgeWidths;
    NSData * _serializedData;
    NSMapTable * _serializedOffsets;
}

@property (nonatomic, retain) NSMutableDictionary *deserializationCache;
@property (nonatomic, readonly) NSMutableData *graphData;
@property (nonatomic, readonly) NSMutableDictionary *keyboardOffsets;
@property (nonatomic, retain) NSData *serializedData;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CGRectForOffset:(int)arg1 length:(int*)arg2;
- (id)UIKBTreeForOffset:(int)arg1 length:(int*)arg2;
- (struct { double x1; int x2; })UIKBValueForOffset:(int)arg1 length:(int*)arg2;
- (id)_objectAtSerializedOffset:(int)arg1;
- (int)_serializedOffsetForObject:(id)arg1;
- (void)addKeyboardPrefix:(id)arg1 forWidth:(float)arg2 minEdge:(bool)arg3;
- (id)arrayForOffset:(int)arg1 length:(int*)arg2;
- (id)dataForArray:(id)arg1;
- (id)dataForCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)dataForDictionary:(id)arg1;
- (id)dataForFlags:(unsigned char)arg1;
- (id)dataForFloat:(float)arg1;
- (id)dataForGeometry:(id)arg1;
- (id)dataForInt:(int)arg1;
- (id)dataForMergeAction:(id)arg1;
- (id)dataForObject:(id)arg1;
- (id)dataForOffsetObject:(id)arg1;
- (id)dataForReference:(int)arg1;
- (id)dataForSet:(id)arg1;
- (id)dataForShape:(id)arg1;
- (id)dataForString:(id)arg1;
- (id)dataForUIKBTree:(id)arg1;
- (id)dataForUIKBValue:(struct { double x1; int x2; })arg1;
- (void)dealloc;
- (id)deserializationCache;
- (id)dictionaryForOffset:(int)arg1 length:(int*)arg2;
- (unsigned char)flagsForOffset:(int)arg1 length:(int*)arg2;
- (float)floatValueForOffset:(int)arg1 length:(int*)arg2;
- (id)geometryForOffset:(int)arg1 length:(int*)arg2;
- (id)graphData;
- (id)init;
- (int)intValueForOffset:(int)arg1 length:(int*)arg2;
- (id)keyboardForName:(id)arg1;
- (id)keyboardOffsets;
- (id)keyboardPrefixForWidth:(float)arg1 andEdge:(bool)arg2;
- (id)mergeActionForOffset:(int)arg1 length:(int*)arg2;
- (id)mutableDataForObjectType:(unsigned char)arg1;
- (id)objectForOffset:(int)arg1 length:(int*)arg2;
- (void)persistData:(id)arg1 forObject:(id)arg2;
- (void)reset;
- (id)sanitizedDictionary:(id)arg1;
- (void)serializeObject:(id)arg1;
- (id)serializedData;
- (unsigned long long)serializedObjectCount;
- (void)setDeserializationCache:(id)arg1;
- (id)setForOffset:(int)arg1 length:(int*)arg2;
- (void)setSerializedData:(id)arg1;
- (id)shapeForOffset:(int)arg1 length:(int*)arg2;
- (id)stringForOffset:(int)arg1 length:(int*)arg2;

@end
