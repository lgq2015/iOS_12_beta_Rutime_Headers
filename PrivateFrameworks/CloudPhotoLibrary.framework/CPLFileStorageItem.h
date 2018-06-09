/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLFileStorageItem : NSObject <NSCopying> {
    CPLResourceIdentity * _identity;
    NSDate * _lastAccessDate;
    bool  _markedForDelete;
    bool  _original;
}

@property (nonatomic, readonly) CPLResourceIdentity *identity;
@property (nonatomic, readonly) NSDate *lastAccessDate;
@property (getter=isMarkedForDelete, nonatomic, readonly) bool markedForDelete;
@property (getter=isOriginal, nonatomic, readonly) bool original;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithIdentity:(id)arg1 original:(bool)arg2 markedForDelete:(bool)arg3 lastAccessDate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isMarkedForDelete;
- (bool)isOriginal;
- (id)lastAccessDate;

@end