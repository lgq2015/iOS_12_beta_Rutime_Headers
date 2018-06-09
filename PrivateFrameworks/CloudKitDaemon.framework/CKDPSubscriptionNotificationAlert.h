/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying> {
    NSString * _actionLocKey;
    NSString * _category;
    NSString * _launchImage;
    NSMutableArray * _localizedArguments;
    NSString * _localizedKey;
    NSString * _soundName;
    NSString * _subtitle;
    NSMutableArray * _subtitleLocalizedArguments;
    NSString * _subtitleLocalizedKey;
    NSString * _text;
    NSString * _title;
    NSMutableArray * _titleLocalizedArguments;
    NSString * _titleLocalizedKey;
}

@property (nonatomic, retain) NSString *actionLocKey;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) bool hasActionLocKey;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) bool hasLaunchImage;
@property (nonatomic, readonly) bool hasLocalizedKey;
@property (nonatomic, readonly) bool hasSoundName;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasSubtitleLocalizedKey;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasTitleLocalizedKey;
@property (nonatomic, retain) NSString *launchImage;
@property (nonatomic, retain) NSMutableArray *localizedArguments;
@property (nonatomic, retain) NSString *localizedKey;
@property (nonatomic, retain) NSString *soundName;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSMutableArray *subtitleLocalizedArguments;
@property (nonatomic, retain) NSString *subtitleLocalizedKey;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSMutableArray *titleLocalizedArguments;
@property (nonatomic, retain) NSString *titleLocalizedKey;

+ (Class)localizedArgumentsType;
+ (Class)subtitleLocalizedArgumentsType;
+ (Class)titleLocalizedArgumentsType;

- (void).cxx_destruct;
- (id)actionLocKey;
- (void)addLocalizedArguments:(id)arg1;
- (void)addSubtitleLocalizedArguments:(id)arg1;
- (void)addTitleLocalizedArguments:(id)arg1;
- (id)category;
- (void)clearLocalizedArguments;
- (void)clearSubtitleLocalizedArguments;
- (void)clearTitleLocalizedArguments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionLocKey;
- (bool)hasCategory;
- (bool)hasLaunchImage;
- (bool)hasLocalizedKey;
- (bool)hasSoundName;
- (bool)hasSubtitle;
- (bool)hasSubtitleLocalizedKey;
- (bool)hasText;
- (bool)hasTitle;
- (bool)hasTitleLocalizedKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)launchImage;
- (id)localizedArguments;
- (id)localizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedArgumentsCount;
- (id)localizedKey;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionLocKey:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setLaunchImage:(id)arg1;
- (void)setLocalizedArguments:(id)arg1;
- (void)setLocalizedKey:(id)arg1;
- (void)setSoundName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLocalizedArguments:(id)arg1;
- (void)setSubtitleLocalizedKey:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocalizedArguments:(id)arg1;
- (void)setTitleLocalizedKey:(id)arg1;
- (id)soundName;
- (id)subtitle;
- (id)subtitleLocalizedArguments;
- (id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subtitleLocalizedArgumentsCount;
- (id)subtitleLocalizedKey;
- (id)text;
- (id)title;
- (id)titleLocalizedArguments;
- (id)titleLocalizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)titleLocalizedArgumentsCount;
- (id)titleLocalizedKey;
- (void)writeTo:(id)arg1;

@end