/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVAppStyle : NSObject {
    struct { 
        union { 
            struct UIEdgeInsets { 
                double top; 
                double left; 
                double bottom; 
                double right; 
            } insetValue; 
            double doubleValue; 
        } ; 
        bool isValueSet; 
    }  _height;
    struct { 
        union { 
            struct UIEdgeInsets { 
                double top; 
                double left; 
                double bottom; 
                double right; 
            } insetValue; 
            double doubleValue; 
        } ; 
        bool isValueSet; 
    }  _interitemSpacing;
    struct { 
        union { 
            struct UIEdgeInsets { 
                double top; 
                double left; 
                double bottom; 
                double right; 
            } insetValue; 
            double doubleValue; 
        } ; 
        bool isValueSet; 
    }  _margin;
    struct { 
        union { 
            struct UIEdgeInsets { 
                double top; 
                double left; 
                double bottom; 
                double right; 
            } insetValue; 
            double doubleValue; 
        } ; 
        bool isValueSet; 
    }  _maxHeight;
    struct { 
        union { 
            struct UIEdgeInsets { 
                double top; 
                double left; 
                double bottom; 
                double right; 
            } insetValue; 
            double doubleValue; 
        } ; 
        bool isValueSet; 
    }  _maxWidth;
    struct { 
        union { 
            struct UIEdgeInsets { 
                double top; 
                double left; 
                double bottom; 
                double right; 
            } insetValue; 
            double doubleValue; 
        } ; 
        bool isValueSet; 
    }  _minHeight;
    struct { 
        union { 
            struct UIEdgeInsets { 
                double top; 
                double left; 
                double bottom; 
                double right; 
            } insetValue; 
            double doubleValue; 
        } ; 
        bool isValueSet; 
    }  _minWidth;
    struct { 
        union { 
            struct UIEdgeInsets { 
                double top; 
                double left; 
                double bottom; 
                double right; 
            } insetValue; 
            double doubleValue; 
        } ; 
        bool isValueSet; 
    }  _padding;
    NSMutableDictionary * _stylesMap;
    struct { 
        union { 
            struct UIEdgeInsets { 
                double top; 
                double left; 
                double bottom; 
                double right; 
            } insetValue; 
            double doubleValue; 
        } ; 
        bool isValueSet; 
    }  _width;
}

@property (nonatomic) struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; } height;
@property (nonatomic) struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; } interitemSpacing;
@property (nonatomic) struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; } margin;
@property (nonatomic) struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; } maxHeight;
@property (nonatomic) struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; } maxWidth;
@property (nonatomic) struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; } minHeight;
@property (nonatomic) struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; } minWidth;
@property (nonatomic) struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; } padding;
@property (nonatomic) struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; } width;

- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forStyleProperty:(id)arg2;
- (struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })height;
- (struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })interitemSpacing;
- (struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })margin;
- (struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })maxHeight;
- (struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })maxWidth;
- (struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })minHeight;
- (struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })minWidth;
- (struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })padding;
- (void)setHeight:(struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })arg1;
- (void)setInteritemSpacing:(struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })arg1;
- (void)setMargin:(struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })arg1;
- (void)setMaxHeight:(struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })arg1;
- (void)setMaxWidth:(struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })arg1;
- (void)setMinHeight:(struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })arg1;
- (void)setMinWidth:(struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })arg1;
- (void)setPadding:(struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })arg1;
- (void)setWidth:(struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })arg1;
- (id)valueForStyle:(id)arg1;
- (struct { union { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; double x_1_1_2; } x1; bool x2; })width;

@end
