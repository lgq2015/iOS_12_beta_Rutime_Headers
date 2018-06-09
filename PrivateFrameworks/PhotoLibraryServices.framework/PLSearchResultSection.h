/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchResultSection : NSObject {
    unsigned long long  _categoryMask;
    unsigned long long  _resultTypes;
    NSArray * _searchResults;
}

@property (nonatomic, readonly) unsigned long long categoryMask;
@property (nonatomic, readonly) unsigned long long resultTypes;
@property (nonatomic, readonly) NSArray *searchResults;

- (void).cxx_destruct;
- (unsigned long long)categoryMask;
- (id)initWithResultTypes:(unsigned long long)arg1 categoryMask:(unsigned long long)arg2 searchResults:(id)arg3;
- (unsigned long long)resultTypes;
- (id)searchResults;

@end