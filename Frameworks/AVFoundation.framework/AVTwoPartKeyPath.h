/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVTwoPartKeyPath : NSObject <AVKeyPath, NSCopying> {
    NSString * _secondLevelKey;
    NSString * _topLevelKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *keyPathString;
@property (nonatomic, readonly) NSString *secondLevelPropertyKey;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *topLevelPropertyKey;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithTopLevelPropertyKey:(id)arg1 secondLevelPropertyKey:(id)arg2;
- (id)keyPathString;
- (id)secondLevelPropertyKey;
- (id)topLevelPropertyKey;

@end