/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKListElement : IKCollectionElement

@property (nonatomic, readonly) bool isLeftAligned;
@property (nonatomic, readonly, retain) IKViewElement *relatedContent;

- (bool)isLeftAligned;
- (id)relatedContent;

@end
