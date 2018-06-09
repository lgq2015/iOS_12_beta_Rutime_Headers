/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHRadialBodyLayoutItemPathCache : NSObject {
    NSNumber * innerRadius;
    struct CGPath { } * pathLayoutRelative;
    NSArray * pathSelectionKnobs;
    struct CGPath { } * pathTransformRelative;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  rootedLayoutRect;
    unsigned long long  seriesIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  wedgeCenterPoint;
}

@property (nonatomic, readonly, copy) NSNumber *innerRadius;
@property (nonatomic, readonly) struct CGPath { }*pathLayoutRelative;
@property (nonatomic, readonly, copy) NSArray *pathSelectionKnobs;
@property (nonatomic, readonly) struct CGPath { }*pathTransformRelative;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rootedLayoutRect;
@property (nonatomic, readonly) unsigned long long seriesIndex;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } wedgeCenterPoint;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSeriesIndex:(unsigned long long)arg1 rootedLayoutRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 wedgeCenterPoint:(struct CGPoint { double x1; double x2; })arg3 pathLayoutRelative:(struct CGPath { }*)arg4 pathTransformRelative:(struct CGPath { }*)arg5 pathSelectionKnobs:(id)arg6 innerRadius:(id)arg7;
- (id)innerRadius;
- (struct CGPath { }*)pathLayoutRelative;
- (id)pathSelectionKnobs;
- (struct CGPath { }*)pathTransformRelative;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rootedLayoutRect;
- (unsigned long long)seriesIndex;
- (struct CGPoint { double x1; double x2; })wedgeCenterPoint;

@end