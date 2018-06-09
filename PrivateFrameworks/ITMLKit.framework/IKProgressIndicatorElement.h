/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKProgressIndicatorElement : IKViewElement

@property (nonatomic, readonly) unsigned long long percentage;
@property (nonatomic, readonly) NSString *type;

+ (bool)shouldParseChildDOMElements;

- (unsigned long long)percentage;
- (id)type;

@end