/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLHorizonDetection : NSObject {
    char * _bwLabelSceneMap;
    int  _cols;
    struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1[2]; float x2; bool x3; } * _detectedHorPointerH;
    struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; float *x3; float x4; int x5; int x6; float x7; float x8; float x9; float x10; float x11; float x12; struct CGPoint { double x_13_1_1; double x_13_1_2; } x13; struct CGPoint { double x_14_1_1; double x_14_1_2; } x14; float x15; int x16; int x17; int x18; int x19; } * _detectedLinePointer;
    float * _edgeAngle;
    char * _grayScale;
    int  _isHor;
    int  _numLines;
    char * _orgEdge;
    char * _processedEdge;
    char * _rgb;
    int  _rows;
    float  _scaleFactor;
}

+ (void)findHorizonForImage:(id)arg1 horizonLineH:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1[2]; float x2; bool x3; }*)arg2;

- (void)applyLineFilters;
- (void)edgeOrientationAnalysisFindModes:(char *)arg1;
- (void)extractGrayRGBData:(id)arg1;
- (void)findHorizon:(id)arg1 horizonLineH:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1[2]; float x2; bool x3; }*)arg2;
- (void)horizonDetection;
- (void)imageStatisticalAnalysis:(unsigned int*)arg1 numCC:(int)arg2;
- (void)lineOverlapHorBW:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; float *x3; float x4; int x5; int x6; float x7; float x8; float x9; float x10; float x11; float x12; struct CGPoint { double x_13_1_1; double x_13_1_2; } x13; struct CGPoint { double x_14_1_1; double x_14_1_2; } x14; float x15; int x16; int x17; int x18; int x19; }*)arg1 numLines:(int)arg2;
- (void)preProcessEdgeAnglePDF;
- (void)preProcessEdgeCC;
- (void)preProcessEdgeCheckNB;
- (void)sceneClassification;

@end