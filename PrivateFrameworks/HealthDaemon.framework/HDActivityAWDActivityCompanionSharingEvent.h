/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityAWDActivityCompanionSharingEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int numberOfFriends : 1; 
        unsigned int numberOfFriendsAwaitingResponse : 1; 
        unsigned int numberOfFriendsHiddenFromMe : 1; 
        unsigned int numberOfFriendsMuted : 1; 
        unsigned int numberOfFriendsMyDataHidden : 1; 
        unsigned int numberOfFriendsPendingMyResponse : 1; 
        unsigned int timestamp : 1; 
        unsigned int maxFriendDuration : 1; 
        unsigned int medianFriendDuration : 1; 
        unsigned int minFriendDuration : 1; 
    }  _has;
    int  _maxFriendDuration;
    int  _medianFriendDuration;
    int  _minFriendDuration;
    long long  _numberOfFriends;
    long long  _numberOfFriendsAwaitingResponse;
    long long  _numberOfFriendsHiddenFromMe;
    long long  _numberOfFriendsMuted;
    long long  _numberOfFriendsMyDataHidden;
    long long  _numberOfFriendsPendingMyResponse;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasMaxFriendDuration;
@property (nonatomic) bool hasMedianFriendDuration;
@property (nonatomic) bool hasMinFriendDuration;
@property (nonatomic) bool hasNumberOfFriends;
@property (nonatomic) bool hasNumberOfFriendsAwaitingResponse;
@property (nonatomic) bool hasNumberOfFriendsHiddenFromMe;
@property (nonatomic) bool hasNumberOfFriendsMuted;
@property (nonatomic) bool hasNumberOfFriendsMyDataHidden;
@property (nonatomic) bool hasNumberOfFriendsPendingMyResponse;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int maxFriendDuration;
@property (nonatomic) int medianFriendDuration;
@property (nonatomic) int minFriendDuration;
@property (nonatomic) long long numberOfFriends;
@property (nonatomic) long long numberOfFriendsAwaitingResponse;
@property (nonatomic) long long numberOfFriendsHiddenFromMe;
@property (nonatomic) long long numberOfFriendsMuted;
@property (nonatomic) long long numberOfFriendsMyDataHidden;
@property (nonatomic) long long numberOfFriendsPendingMyResponse;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsMaxFriendDuration:(id)arg1;
- (int)StringAsMedianFriendDuration:(id)arg1;
- (int)StringAsMinFriendDuration:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxFriendDuration;
- (bool)hasMedianFriendDuration;
- (bool)hasMinFriendDuration;
- (bool)hasNumberOfFriends;
- (bool)hasNumberOfFriendsAwaitingResponse;
- (bool)hasNumberOfFriendsHiddenFromMe;
- (bool)hasNumberOfFriendsMuted;
- (bool)hasNumberOfFriendsMyDataHidden;
- (bool)hasNumberOfFriendsPendingMyResponse;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)maxFriendDuration;
- (id)maxFriendDurationAsString:(int)arg1;
- (int)medianFriendDuration;
- (id)medianFriendDurationAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (int)minFriendDuration;
- (id)minFriendDurationAsString:(int)arg1;
- (long long)numberOfFriends;
- (long long)numberOfFriendsAwaitingResponse;
- (long long)numberOfFriendsHiddenFromMe;
- (long long)numberOfFriendsMuted;
- (long long)numberOfFriendsMyDataHidden;
- (long long)numberOfFriendsPendingMyResponse;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxFriendDuration:(bool)arg1;
- (void)setHasMedianFriendDuration:(bool)arg1;
- (void)setHasMinFriendDuration:(bool)arg1;
- (void)setHasNumberOfFriends:(bool)arg1;
- (void)setHasNumberOfFriendsAwaitingResponse:(bool)arg1;
- (void)setHasNumberOfFriendsHiddenFromMe:(bool)arg1;
- (void)setHasNumberOfFriendsMuted:(bool)arg1;
- (void)setHasNumberOfFriendsMyDataHidden:(bool)arg1;
- (void)setHasNumberOfFriendsPendingMyResponse:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMaxFriendDuration:(int)arg1;
- (void)setMedianFriendDuration:(int)arg1;
- (void)setMinFriendDuration:(int)arg1;
- (void)setNumberOfFriends:(long long)arg1;
- (void)setNumberOfFriendsAwaitingResponse:(long long)arg1;
- (void)setNumberOfFriendsHiddenFromMe:(long long)arg1;
- (void)setNumberOfFriendsMuted:(long long)arg1;
- (void)setNumberOfFriendsMyDataHidden:(long long)arg1;
- (void)setNumberOfFriendsPendingMyResponse:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end