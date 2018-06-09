/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGRe2Basic : SGRe2 {
    bool  _isTrivial;
    struct RE2 { struct Mutex {} *x1; struct StringPiece { char *x_2_1_1; int x_2_1_2; } x2; struct Options { int x_3_1_1; bool x_3_1_2; bool x_3_1_3; bool x_3_1_4; long long x_3_1_5; bool x_3_1_6; bool x_3_1_7; bool x_3_1_8; bool x_3_1_9; bool x_3_1_10; bool x_3_1_11; bool x_3_1_12; bool x_3_1_13; } x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; bool x5; struct Regexp {} *x6; struct Regexp {} *x7; struct Prog {} *x8; struct Prog {} *x9; bool x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; int x12; } * _pattern;
    NSData * _patternData;
}

- (void).cxx_destruct;
- (int)_enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)dealloc;
- (id)description;
- (void)enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)existsInUtf8:(const char *)arg1;
- (id)hashId;
- (id)initWithRegexp:(id)arg1;
- (id)initWithRegexpData:(id)arg1;
- (id)matchesUtf8:(const char *)arg1;

@end