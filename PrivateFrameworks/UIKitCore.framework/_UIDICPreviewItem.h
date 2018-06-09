/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDICPreviewItem : NSObject <QLPreviewItem> {
    NSURL * _URL;
    NSURL * _URLToDeleteOnDealloc;
    NSURL * _URLsToDeleteOnDealloc;
    NSString * _name;
    NSString * _previewItemContentType;
    NSURL * _previewItemURLForDisplay;
    NSURL * _previewURLOverride;
}

@property (nonatomic, retain) NSURL *URLToDeleteOnDealloc;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *previewItemContentType;
@property (nonatomic, retain) NSString *previewItemTitle;
@property (nonatomic, retain) NSURL *previewItemURL;
@property (nonatomic, retain) NSURL *previewItemURLForDisplay;
@property (nonatomic, retain) NSURL *previewItemURLOverride;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLToDeleteOnDealloc;
- (id)_primitive_previewItemContentType;
- (void)dealloc;
- (id)previewItemContentType;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)previewItemURLForDisplay;
- (id)previewItemURLOverride;
- (void)setPreviewItemContentType:(id)arg1;
- (void)setPreviewItemTitle:(id)arg1;
- (void)setPreviewItemURL:(id)arg1;
- (void)setPreviewItemURLForDisplay:(id)arg1;
- (void)setPreviewItemURLOverride:(id)arg1;
- (void)setURLToDeleteOnDealloc:(id)arg1;

@end