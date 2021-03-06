/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKExceptionDate : EKObject <NSCopying>

@property (nonatomic, retain) NSDate *date;

+ (Class)frozenClass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)initWithDate:(id)arg1;
- (void)setDate:(id)arg1;

@end
