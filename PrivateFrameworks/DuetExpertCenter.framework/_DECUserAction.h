/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECUserAction : NSObject <NSSecureCoding> {
    CSSearchableItem * _spotlightSearcheableItem;
    CSUserAction * _spotlightUserAction;
}

@property (nonatomic, readonly, copy) CSSearchableItem *spotlightSearcheableItem;
@property (nonatomic, readonly, copy) CSUserAction *spotlightUserAction;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserAction:(id)arg1 item:(id)arg2;
- (id)spotlightSearcheableItem;
- (id)spotlightUserAction;

@end