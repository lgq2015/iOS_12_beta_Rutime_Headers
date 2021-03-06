/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLightingModel : NSObject <NSCopying> {
    TSCH3DEnvironmentPackage * _environment;
    TSCH3DLightingPackage * _lightings;
    TSCH3DMaterialPackage * _materials;
}

@property (nonatomic, retain) TSCH3DEnvironmentPackage *environment;
@property (nonatomic, retain) TSCH3DLightingPackage *lightings;
@property (nonatomic, retain) TSCH3DMaterialPackage *materials;

+ (id)instanceWithArchive:(const struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DPhongLightingModelArchive {} *x5; struct Chart3DFixedFunctionLightingModelArchive {} *x6; struct Chart3DEnvironmentPackageArchive {} *x7; }*)arg1 unarchiver:(id)arg2;
+ (id)lightingModel;

- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (id)clone;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (id)diffuseTextureTiling;
- (id)environment;
- (bool)hasCompleteData;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DPhongLightingModelArchive {} *x5; struct Chart3DFixedFunctionLightingModelArchive {} *x6; struct Chart3DEnvironmentPackageArchive {} *x7; }*)arg1 unarchiver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lightingModelWithLightings:(id)arg1;
- (id)lightings;
- (id)materials;
- (id)representativeMaterialLightenedByPercentage:(id)arg1;
- (void)saveToArchive:(struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DPhongLightingModelArchive {} *x5; struct Chart3DFixedFunctionLightingModelArchive {} *x6; struct Chart3DEnvironmentPackageArchive {} *x7; }*)arg1 archiver:(id)arg2;
- (void)setEnvironment:(id)arg1;
- (void)setLightings:(id)arg1;
- (void)setMaterials:(id)arg1;

@end
