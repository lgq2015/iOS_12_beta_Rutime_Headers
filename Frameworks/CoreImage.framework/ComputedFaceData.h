/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface ComputedFaceData : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _adjustmentRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _betweenTheEyes;
    float  _eyeTiltAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _faceCenter;
    int  _faceIndex;
    float  _faceOrientationIndex;
    bool  _hasLeftEyePosition;
    bool  _hasMouthPosition;
    bool  _hasRightEyePosition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _headRect;
    double  _iOD;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftEye;
    struct CGPoint { double x1; double x2; } * _leftIrisSeedPoints;
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftRightVec;
    struct CGPoint { 
        double x; 
        double y; 
    }  _mouthCenter;
    struct CGPoint { double x1; double x2; } * _neckSeedPoints;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rightEye;
    struct CGPoint { double x1; double x2; } * _rightIrisSeedPoints;
    Rgon * _skinSampleRgon;
    int  _skinSeedPointCount;
    struct CGPoint { double x1; double x2; } * _skinSeedPoints;
    struct CGPoint { double x1; double x2; } * _teethSeedPoints;
    struct CGPoint { 
        double x; 
        double y; 
    }  leftIrisSeedPointArray;
    struct CGPoint { 
        double x; 
        double y; 
    }  neckSeedPointArray;
    struct CGPoint { 
        double x; 
        double y; 
    }  rightIrisSeedPointArray;
    struct CGPoint { 
        double x; 
        double y; 
    }  skinSeedPointArray;
    struct CGPoint { 
        double x; 
        double y; 
    }  teethSeedPointArray;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } adjustmentRect;
@property struct CGPoint { double x1; double x2; } betweenTheEyes;
@property float eyeTiltAngle;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceBounds;
@property struct CGPoint { double x1; double x2; } faceCenter;
@property int faceIndex;
@property float faceOrientationIndex;
@property bool hasLeftEyePosition;
@property bool hasMouthPosition;
@property bool hasRightEyePosition;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } headRect;
@property double iOD;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageRect;
@property struct CGPoint { double x1; double x2; } leftEye;
@property struct CGPoint { double x1; double x2; }*leftIrisSeedPoints;
@property struct CGPoint { double x1; double x2; } leftRightVec;
@property struct CGPoint { double x1; double x2; } mouthCenter;
@property struct CGPoint { double x1; double x2; }*neckSeedPoints;
@property struct CGPoint { double x1; double x2; } rightEye;
@property struct CGPoint { double x1; double x2; }*rightIrisSeedPoints;
@property (nonatomic, retain) Rgon *skinSampleRgon;
@property int skinSeedPointCount;
@property struct CGPoint { double x1; double x2; }*skinSeedPoints;
@property struct CGPoint { double x1; double x2; }*teethSeedPoints;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustmentRect;
- (struct CGPoint { double x1; double x2; })betweenTheEyes;
- (void)dealloc;
- (float)eyeTiltAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBounds;
- (struct CGPoint { double x1; double x2; })faceCenter;
- (int)faceIndex;
- (float)faceOrientationIndex;
- (bool)hasLeftEyePosition;
- (bool)hasMouthPosition;
- (bool)hasRightEyePosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })headRect;
- (double)iOD;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRect;
- (id)init;
- (struct CGPoint { double x1; double x2; })leftEye;
- (struct CGPoint { double x1; double x2; }*)leftIrisSeedPoints;
- (struct CGPoint { double x1; double x2; })leftRightVec;
- (struct CGPoint { double x1; double x2; })mouthCenter;
- (struct CGPoint { double x1; double x2; }*)neckSeedPoints;
- (struct CGPoint { double x1; double x2; })rightEye;
- (struct CGPoint { double x1; double x2; }*)rightIrisSeedPoints;
- (void)setAdjustmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBetweenTheEyes:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEyeTiltAngle:(float)arg1;
- (void)setFaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFaceCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFaceIndex:(int)arg1;
- (void)setFaceOrientationIndex:(float)arg1;
- (void)setHasLeftEyePosition:(bool)arg1;
- (void)setHasMouthPosition:(bool)arg1;
- (void)setHasRightEyePosition:(bool)arg1;
- (void)setHeadRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIOD:(double)arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLeftEye:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLeftIrisSeedPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setLeftRightVec:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMouthCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNeckSeedPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setRightEye:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRightIrisSeedPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setSkinSampleRgon:(id)arg1;
- (void)setSkinSeedPointCount:(int)arg1;
- (void)setSkinSeedPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setTeethSeedPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (id)skinSampleRgon;
- (int)skinSeedPointCount;
- (struct CGPoint { double x1; double x2; }*)skinSeedPoints;
- (struct CGPoint { double x1; double x2; }*)teethSeedPoints;

@end
