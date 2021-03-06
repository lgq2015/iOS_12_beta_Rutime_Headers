/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface ImageFileLoader : NSObject <SFResourceLoader>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)loadImage:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
