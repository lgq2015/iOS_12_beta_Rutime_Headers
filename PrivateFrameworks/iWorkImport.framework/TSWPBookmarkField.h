/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPBookmarkField : TSWPSmartField <TSWPBookmarkEntry> {
    bool  _forRange;
    bool  _hidden;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } effectiveRange;
@property (nonatomic) bool forRange;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (id)normalizedNameForName:(id)arg1;
+ (id)uniqueBookmarkNameFromBase:(id)arg1 excludingNames:(id)arg2;

- (void).cxx_destruct;
- (bool)allowsEditing;
- (int)attributeArrayKind;
- (id)copyWithContext:(id)arg1;
- (id)copyWithNewName:(id)arg1;
- (id)displayName;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })effectiveRange;
- (bool)forRange;
- (bool)hidden;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 forRange:(bool)arg3 hidden:(bool)arg4;
- (bool)isEquivalentToObject:(id)arg1;
- (id)key;
- (void)loadFromArchive:(const struct BookmarkFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct SmartFieldArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; unsigned int x7; unsigned int x8; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)name;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)resetTextAttributeUUIDString;
- (void)saveToArchive:(struct BookmarkFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct SmartFieldArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; unsigned int x7; unsigned int x8; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setForRange:(bool)arg1;
- (int)smartFieldKind;
- (int)styleAttributeArrayKind;
- (id)url;

@end
