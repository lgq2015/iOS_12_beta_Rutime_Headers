/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebOptGroup : NSObject {
    <UIWebSelectedItemPrivate> * _group;
    long long  _offset;
    NSArray * _options;
}

@property (nonatomic, retain) <UIWebSelectedItemPrivate> *group;
@property (nonatomic, readonly) long long offset;
@property (nonatomic, retain) NSArray *options;

- (void)dealloc;
- (id)group;
- (id)initWithGroup:(id)arg1 itemOffset:(long long)arg2;
- (long long)offset;
- (id)options;
- (void)setGroup:(id)arg1;
- (void)setOptions:(id)arg1;

@end