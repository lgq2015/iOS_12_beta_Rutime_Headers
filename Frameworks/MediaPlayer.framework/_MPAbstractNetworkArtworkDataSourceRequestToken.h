/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPAbstractNetworkArtworkDataSourceRequestToken : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _bestSize;
    NSURLRequest * _request;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } bestSize;
@property (nonatomic, readonly) NSURLRequest *request;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })bestSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithRequest:(id)arg1 bestSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (id)request;

@end