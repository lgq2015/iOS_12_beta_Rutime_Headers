/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPassColorAttachmentDescriptorInternal : MTLRenderPassColorAttachmentDescriptor {
    struct MTLRenderPassAttachmentDescriptorPrivate { 
        <MTLTextureImplementation> *texture; 
        unsigned long long level; 
        unsigned long long slice; 
        unsigned long long depthPlane; 
        unsigned long long loadAction; 
        unsigned long long storeAction; 
        unsigned long long storeActionOptions; 
        struct { 
            double red; 
            double green; 
            double blue; 
            double alpha; 
        } clearColor; 
        double clearDepth; 
        unsigned int clearStencil; 
        <MTLTextureImplementation> *resolveTexture; 
        unsigned long long resolveLevel; 
        unsigned long long resolveSlice; 
        unsigned long long resolveDepthPlane; 
        unsigned long long resolveFilter; 
        unsigned long long width; 
        unsigned long long height; 
        bool yInvert; 
    }  _private;
}

+ (id)attachmentDescriptor;

- (const struct MTLRenderPassAttachmentDescriptorPrivate { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; double x8; unsigned int x9; id x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; bool x16; }*)_descriptorPrivate;
- (struct { double x1; double x2; double x3; double x4; })clearColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)depthPlane;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)level;
- (unsigned long long)loadAction;
- (unsigned long long)resolveDepthPlane;
- (unsigned long long)resolveLevel;
- (unsigned long long)resolveSlice;
- (id)resolveTexture;
- (void)setClearColor:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setDepthPlane:(unsigned long long)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)setLoadAction:(unsigned long long)arg1;
- (void)setResolveDepthPlane:(unsigned long long)arg1;
- (void)setResolveLevel:(unsigned long long)arg1;
- (void)setResolveSlice:(unsigned long long)arg1;
- (void)setResolveTexture:(id)arg1;
- (void)setSlice:(unsigned long long)arg1;
- (void)setStoreAction:(unsigned long long)arg1;
- (void)setStoreActionOptions:(unsigned long long)arg1;
- (void)setTexture:(id)arg1;
- (void)setYInvert:(bool)arg1;
- (unsigned long long)slice;
- (unsigned long long)storeAction;
- (unsigned long long)storeActionOptions;
- (id)texture;
- (bool)yInvert;

@end
