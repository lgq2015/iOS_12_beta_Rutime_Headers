/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface _FPChildrenEnumerator : NSObject <FPXEnumeratorObserver> {
    id /* block */  _enumerationCallback;
    id /* block */  _enumerationCompletionHandler;
    <FPXEnumerator> * _enumerator;
    FPItem * _parentItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)enumerateChildrenOfItem:(id)arg1 callback:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)didUpdateItem:(id)arg1;
- (void)enumerateFromPage:(id)arg1;
- (void)enumerationResultsDidChange;
- (void)finishWithError:(id)arg1;
- (id)initWithItem:(id)arg1 enumerationCallback:(id /* block */)arg2;

@end