/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXOEmbedPhotoResponse : SXOEmbedResponse

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) double width;

- (id)URLWithValue:(id)arg1 withType:(int)arg2;
- (struct CGSize { double x1; double x2; })size;

@end