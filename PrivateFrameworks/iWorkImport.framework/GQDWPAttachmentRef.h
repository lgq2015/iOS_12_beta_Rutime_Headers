/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPAttachmentRef : GQDWPAttachment {
    GQDRoot * mRoot;
    char * mUID;
}

- (void)dealloc;
- (id)drawable;
- (id)initWithUID:(char *)arg1 root:(id)arg2;

@end