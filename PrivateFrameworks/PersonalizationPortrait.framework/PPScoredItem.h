/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPScoredItem : _PASZonedObject <NSCopying, NSSecureCoding> {
    NSObject<NSCopying><NSSecureCoding> * _item;
    double  _score;
}

@property (nonatomic, readonly) NSObject<NSCopying><NSSecureCoding> *item;
@property (nonatomic, readonly) double score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 score:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScoredItem:(id)arg1;
- (id)item;
- (double)score;

@end