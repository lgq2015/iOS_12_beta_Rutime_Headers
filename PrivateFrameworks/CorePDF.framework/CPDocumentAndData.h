/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPDocumentAndData : NSObject {
    struct CGPDFDocument { } * _document;
    struct __CFData { } * _sourceData;
}

@property (retain) struct CGPDFDocument { }*document;
@property (retain) struct __CFData { }*sourceData;

- (void)dealloc;
- (struct CGPDFDocument { }*)document;
- (void)setDocument:(struct CGPDFDocument { }*)arg1;
- (void)setSourceData:(struct __CFData { }*)arg1;
- (struct __CFData { }*)sourceData;

@end
