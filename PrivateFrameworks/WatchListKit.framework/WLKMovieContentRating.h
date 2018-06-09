/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKMovieContentRating : WLKContentRating {
    unsigned long long  _MPAAContentRating;
}

@property (nonatomic, readonly) unsigned long long MPAAContentRating;

+ (unsigned long long)_contentRatingForString:(id)arg1;

- (unsigned long long)MPAAContentRating;
- (id)initWithDictionary:(id)arg1;

@end