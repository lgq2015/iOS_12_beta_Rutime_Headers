/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVAction : NSObject {
    int  _action;
    id  _changeContext;
    id  _context;
}

@property (nonatomic, readonly) int action;
@property (nonatomic, retain) id changeContext;
@property (nonatomic, readonly) id context;

- (void).cxx_destruct;
- (int)action;
- (id)changeContext;
- (id)context;
- (id)description;
- (id)initWithAction:(int)arg1 context:(id)arg2;
- (void)setChangeContext:(id)arg1;

@end
