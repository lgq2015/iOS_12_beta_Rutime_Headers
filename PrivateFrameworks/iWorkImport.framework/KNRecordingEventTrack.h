/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingEventTrack : TSPObject {
    NSArray * _events;
    NSString * _type;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)eventTrackByReplacingSegmentAfterTime:(double)arg1 withEventTrack:(id)arg2;
- (id)events;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 type:(id)arg2 events:(id)arg3;
- (void)loadFromArchive:(const struct RecordingEventTrackArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<KN::RecordingEventArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_slideNodeWasAddedToOrRemovedFromDocument;
- (void)saveToArchive:(struct RecordingEventTrackArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<KN::RecordingEventArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)slideNodeWasAddedToDocument:(id)arg1;
- (void)slideNodeWillBeRemovedFromDocument:(id)arg1;
- (id)type;

@end
