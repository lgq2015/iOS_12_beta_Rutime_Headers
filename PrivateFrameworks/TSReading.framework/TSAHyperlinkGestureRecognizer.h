/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSAHyperlinkGestureRecognizer : UIGestureRecognizer {
    TSWPHyperlinkField * _hitField;
    TSDRep<TSWPHyperlinkHostRepProtocol> * _hitRep;
    TSDInteractiveCanvasController * _icc;
    bool  _tapEnabled;
    bool  _tapHoldEnabled;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchBeginPoint;
    bool  _wasTapHold;
}

@property (nonatomic, retain) TSWPHyperlinkField *hitField;
@property (nonatomic, retain) TSDRep<TSWPHyperlinkHostRepProtocol> *hitRep;
@property (nonatomic) TSDInteractiveCanvasController *icc;
@property (nonatomic) bool tapEnabled;
@property (nonatomic) bool tapHoldEnabled;
@property (nonatomic, readonly) bool wasTapHold;

- (void)dealloc;
- (id)hitField;
- (id)hitRep;
- (id)icc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)p_delayElapsed:(id)arg1;
- (id)p_smartFieldForTouch:(id)arg1 outRep:(id*)arg2;
- (void)reset;
- (void)setEnabled:(bool)arg1;
- (void)setHitField:(id)arg1;
- (void)setHitRep:(id)arg1;
- (void)setIcc:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTapEnabled:(bool)arg1;
- (void)setTapHoldEnabled:(bool)arg1;
- (bool)tapEnabled;
- (bool)tapHoldEnabled;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (bool)wasTapHold;

@end