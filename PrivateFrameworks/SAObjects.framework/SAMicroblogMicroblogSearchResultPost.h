/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase

@property (nonatomic, copy) NSDate *creationTime;
@property (nonatomic, retain) SADecoratedString *decoratedContent;
@property (nonatomic, copy) NSArray *embeddedHashtags;
@property (nonatomic, copy) NSArray *embeddedImages;
@property (nonatomic, copy) NSArray *embeddedLinks;
@property (nonatomic, copy) NSArray *embeddedMentions;
@property (nonatomic) long long favoritesCount;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, retain) SAUIAppPunchOut *punchOut;
@property (nonatomic, retain) SAMicroblogTwitterPostAuthor *retweetAuthor;
@property (nonatomic) long long retweetCount;
@property (nonatomic, copy) NSURL *webAddress;

+ (id)microblogSearchResultPost;
+ (id)microblogSearchResultPostWithDictionary:(id)arg1 context:(id)arg2;

- (id)creationTime;
- (id)decoratedContent;
- (id)embeddedHashtags;
- (id)embeddedImages;
- (id)embeddedLinks;
- (id)embeddedMentions;
- (id)encodedClassName;
- (long long)favoritesCount;
- (id)groupIdentifier;
- (id)location;
- (id)punchOut;
- (id)retweetAuthor;
- (long long)retweetCount;
- (void)setCreationTime:(id)arg1;
- (void)setDecoratedContent:(id)arg1;
- (void)setEmbeddedHashtags:(id)arg1;
- (void)setEmbeddedImages:(id)arg1;
- (void)setEmbeddedLinks:(id)arg1;
- (void)setEmbeddedMentions:(id)arg1;
- (void)setFavoritesCount:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setPunchOut:(id)arg1;
- (void)setRetweetAuthor:(id)arg1;
- (void)setRetweetCount:(long long)arg1;
- (void)setWebAddress:(id)arg1;
- (id)webAddress;

@end