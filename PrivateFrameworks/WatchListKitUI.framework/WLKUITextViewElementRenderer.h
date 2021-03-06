/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUITextViewElementRenderer : NSObject {
    TVTextElement * _element;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) TVTextElement *element;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (void)drawElementInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)element;
- (id)initWithElement:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })textSize;

@end
