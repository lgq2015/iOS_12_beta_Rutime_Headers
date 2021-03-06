/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRDocObjectID : BRFileObjectID {
    unsigned int  _docID;
}

+ (bool)supportsSecureCoding;

- (id)asString;
- (id)description;
- (id)documentID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocID:(unsigned int)arg1;
- (id)initWithDocIDNumber:(id)arg1;
- (bool)isDocumentID;
- (unsigned long long)rawID;

@end
