/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPStoredMessage : NSObject {
    NSString * _content;
    double  _creationTimestamp;
    bool  _isSent;
    NSString * _uniqueIdentifier;
    SGQPWordBoundaries * _wordBoundaries;
}

@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) double creationTimestamp;
@property (nonatomic, readonly) bool isSent;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) SGQPWordBoundaries *wordBoundaries;

+ (id)messageWithContent:(id)arg1 isSent:(bool)arg2;
+ (id)messageWithContent:(id)arg1 isSent:(bool)arg2 creationTimestamp:(double)arg3;
+ (id)messageWithUniqueIdentifier:(id)arg1 content:(id)arg2 isSent:(bool)arg3 creationTimestamp:(double)arg4;
+ (id)phoneOrEmailFromConversationId:(id)arg1;
+ (id)sortByCreationDesc:(id)arg1;
+ (id)transcriptFromMessages:(id)arg1;
+ (id)transcriptFromMessages:(id)arg1 limit:(unsigned long long)arg2;
+ (id)uniqueIdentifiersFromMessages:(id)arg1;

- (void).cxx_destruct;
- (id)content;
- (double)creationTimestamp;
- (id)description;
- (id)init;
- (id)initWithUniqueIdentifier:(id)arg1 content:(id)arg2 isSent:(bool)arg3 creationTimestamp:(double)arg4;
- (bool)isMostRecentReceivedMessageInMessages:(id)arg1;
- (bool)isMostRecentSentMessageInMessages:(id)arg1;
- (bool)isSent;
- (id)uniqueIdentifier;
- (id)wordBoundaries;

@end