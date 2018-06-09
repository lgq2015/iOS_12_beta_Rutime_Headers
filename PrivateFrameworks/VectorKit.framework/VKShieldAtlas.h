/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKShieldAtlas : NSObject {
    NSMapTable * _atlasToImages;
    NSLock * _atlasToImagesLock;
    VKPShieldPack * _shieldPack;
}

- (id)artworkForShieldIdentifier:(id)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 size:(long long)arg4 numberOfLines:(unsigned long long)arg5 genericShieldGenerator:(id)arg6 colors:(struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; }*)arg7;
- (void)dealloc;
- (id)initWithShieldPack:(id)arg1;
- (void)purge;

@end