/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNDispatchSource : NSObject <CNCancelable> {
    NSObject<OS_dispatch_source> * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancel;
- (void)dealloc;
- (id)initWithSource:(id)arg1;
- (id)source;

@end