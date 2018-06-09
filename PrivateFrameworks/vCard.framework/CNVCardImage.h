/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardImage : NSObject <NSCopying, NSMutableCopying> {
    NSDictionary * _cropRects;
    NSData * _data;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly, copy) NSDictionary *cropRects;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (struct CGSize { double x1; double x2; })sizeOfImageData:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cropRects;
- (id)data;
- (void)describePropertiesWithBuilder:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithData:(id)arg1 cropRects:(id)arg2;
- (id)initWithData:(id)arg1 cropRects:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })size;

@end