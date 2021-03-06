/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITLKImageConverter : NSObject

+ (bool)checkTransparencyForImageAtCorners:(id)arg1;
+ (void)executeBlock:(id /* block */)arg1 async:(bool)arg2;
+ (bool)hasTransparencyAtPoint:(struct CGPoint { double x1; double x2; })arg1 forImage:(id)arg2;
+ (id)imageForSearchUIImage:(id)arg1;
+ (id)imageForSearchUIImage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (bool)imageIsProbablyOpaque:(id)arg1;
+ (id)imagesForSearchUIImages:(id)arg1;

@end
