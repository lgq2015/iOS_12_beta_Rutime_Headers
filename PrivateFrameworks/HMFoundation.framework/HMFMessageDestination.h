/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFMessageDestination : HMFObject {
    NSUUID * _target;
}

@property (nonatomic, readonly, copy) NSUUID *target;

+ (id)allMessageDestinations;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)shortDescription;
- (id)target;

@end