/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUTSVodViewingContext : SAUTSViewingContext

@property (nonatomic, copy) NSDate *originalEventStartTime;

+ (id)vodViewingContext;
+ (id)vodViewingContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)originalEventStartTime;
- (void)setOriginalEventStartTime:(id)arg1;

@end
