/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLBasePreviewParts : QLPreviewParts

+ (bool)canConvertDocumentType:(id)arg1;
+ (int (*)dataCallbackForUTI:(id)arg1 andSize:(unsigned long long)arg2;
+ (bool)isBundleURL:(id)arg1;
+ (int (*)urlCallbackForUTI:(id)arg1;

- (void)computePreview;

@end
