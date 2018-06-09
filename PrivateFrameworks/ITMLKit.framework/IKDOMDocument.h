/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMDocument : IKDOMNode <IKJSDOMDocument, IKJSDOMXPathEvaluator, NSObject, _IKJSDOMDocument, _IKJSDOMDocumentProxy> {
    NSString * __documentURI;
    <IKNetworkRequestLoader> * __requestLoader;
    <IKJSDOMDocumentAppBridge> * _appBridge;
    unsigned long long  _itmlIDSequence;
}

@property (setter=_setDocumentURI:, nonatomic, retain) NSString *_documentURI;
@property (nonatomic, readonly) <IKNetworkRequestLoader> *_requestLoader;
@property (nonatomic) <IKJSDOMDocumentAppBridge> *appBridge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) IKDOMElement *documentElement;
@property (nonatomic, retain) NSString *documentURI;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IKDOMImplementation *implementation;
@property (nonatomic, readonly, retain) NSString *inputEncoding;
@property (nonatomic) unsigned long long itmlIDSequence;
@property (nonatomic) IKJSNavigationDocument *navigationDocument;
@property (nonatomic) bool strictErrorChecking;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSString *xmlEncoding;
@property (nonatomic) bool xmlStandalone;
@property (nonatomic, retain) NSString *xmlVersion;

+ (struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)_documentWithXMLStr:(id)arg1 lsInput:(id)arg2 error:(id*)arg3;
+ (void)_resetUpdatesForNode:(id)arg1;

- (void).cxx_destruct;
- (id)_documentURI;
- (id)_requestLoader;
- (void)_setDocumentURI:(id)arg1;
- (void)_updateITMLIDRecursivelyForNodePtr:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (id)adoptNode:(id)arg1;
- (id)appBridge;
- (id)asPrivateIKJSDOMDocument;
- (id)createCDATASection:(id)arg1;
- (id)createComment:(id)arg1;
- (id)createDocumentFragment;
- (id)createElement:(id)arg1;
- (id)createExpression:(id)arg1 :(id)arg2;
- (id)createTextNode:(id)arg1;
- (void)dealloc;
- (id)documentElement;
- (id)documentURI;
- (id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(long long)arg4 :(id)arg5;
- (id)getElementById:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)implementation;
- (id)initWithAppContext:(id)arg1;
- (id)initWithAppContext:(id)arg1 input:(id)arg2 error:(id*)arg3;
- (id)initWithAppContext:(id)arg1 qualifiedName:(id)arg2;
- (id)initWithAppContext:(id)arg1 xmlStr:(id)arg2 error:(id*)arg3;
- (id)inputEncoding;
- (unsigned long long)itmlIDSequence;
- (bool)markUpdated;
- (id)matchingImpressions:(id)arg1 :(id)arg2;
- (id)navigationDocument;
- (id)nodeName;
- (long long)nodeType;
- (id)recordedImpressions:(id)arg1;
- (void)replace:(id)arg1;
- (void)runTest:(id)arg1 :(id)arg2;
- (void)scrollToTop;
- (void)setAppBridge:(id)arg1;
- (void)setDocumentURI:(id)arg1;
- (void)setITMLIDForNode:(id)arg1;
- (void)setItmlIDSequence:(unsigned long long)arg1;
- (void)setNavigationDocument:(id)arg1;
- (void)setNeedsUpdate;
- (void)setStrictErrorChecking:(bool)arg1;
- (void)setXmlStandalone:(bool)arg1;
- (void)setXmlVersion:(id)arg1;
- (id)snapshotImpressions;
- (bool)strictErrorChecking;
- (void)swapITMLIDForNode:(id)arg1 withITMLIDForNode:(id)arg2;
- (id)xmlEncoding;
- (bool)xmlStandalone;
- (id)xmlVersion;

@end