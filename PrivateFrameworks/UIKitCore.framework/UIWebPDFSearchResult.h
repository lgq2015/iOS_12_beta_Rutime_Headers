/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebPDFSearchResult : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  boundingBox;
    unsigned long long  pageIndex;
    NSArray * rects;
    NSArray * rotationAngles;
    NSString * string;
    NSArray * strings;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic, retain) NSArray *rects;
@property (nonatomic, retain) NSArray *rotationAngles;
@property (nonatomic, retain) NSString *string;
@property (nonatomic, retain) NSArray *strings;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (void)dealloc;
- (unsigned long long)pageIndex;
- (id)rects;
- (id)rotationAngles;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setRects:(id)arg1;
- (void)setRotationAngles:(id)arg1;
- (void)setString:(id)arg1;
- (void)setStrings:(id)arg1;
- (id)string;
- (id)strings;

@end