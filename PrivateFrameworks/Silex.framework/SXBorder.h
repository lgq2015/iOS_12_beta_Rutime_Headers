/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXBorder : SXJSONObject

@property (nonatomic, readonly) SXStrokeStyle *all;
@property (nonatomic, readonly) SXStrokeStyle *bottom;
@property (nonatomic, readonly) SXStrokeStyle *left;
@property (nonatomic, readonly) SXStrokeStyle *right;
@property (nonatomic, readonly) SXStrokeStyle *top;

- (id)defaultStrokeStyle;
- (bool)isSolid;
- (bool)shouldBeDotted;

@end
