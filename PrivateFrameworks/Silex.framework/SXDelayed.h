/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDelayed : NSObject {
    id /* block */  _block;
    bool  _cancelled;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) bool cancelled;

+ (id)execute:(id /* block */)arg1 delay:(double)arg2;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)cancel;
- (bool)cancelled;
- (id)initWithBlock:(id /* block */)arg1 delay:(double)arg2;
- (void)invoke;
- (void)setBlock:(id /* block */)arg1;
- (void)setCancelled:(bool)arg1;

@end