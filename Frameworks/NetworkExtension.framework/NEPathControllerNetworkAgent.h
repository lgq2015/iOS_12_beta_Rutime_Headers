/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPathControllerNetworkAgent : NENetworkAgent {
    NSString * _advisoryAgentDomain;
    NSString * _advisoryAgentType;
    NWInterface * _advisoryInterface;
    id /* block */  _internalAssertHandler;
    id /* block */  _internalUnassertHandler;
    bool  _noAdvisoryTimer;
    NWInterface * _predictedInterface;
    bool  _weakAdvisory;
}

@property (retain) NSString *advisoryAgentDomain;
@property (retain) NSString *advisoryAgentType;
@property (retain) NWInterface *advisoryInterface;
@property (copy) id /* block */ internalAssertHandler;
@property (copy) id /* block */ internalUnassertHandler;
@property bool noAdvisoryTimer;
@property (retain) NWInterface *predictedInterface;
@property bool weakAdvisory;

+ (id)agentFromData:(id)arg1;
+ (id)agentType;

- (void).cxx_destruct;
- (id)advisoryAgentDomain;
- (id)advisoryAgentType;
- (id)advisoryInterface;
- (bool)assertAgentWithOptions:(id)arg1;
- (id)copyAgentData;
- (id)initWithAdvisoryAgentDomain:(id)arg1 agentType:(id)arg2 advisoryMode:(unsigned long long)arg3;
- (id)initWithAdvisoryInterface:(id)arg1 advisoryMode:(unsigned long long)arg2;
- (id /* block */)internalAssertHandler;
- (id /* block */)internalUnassertHandler;
- (bool)noAdvisoryTimer;
- (id)predictedInterface;
- (void)setAdvisoryAgentDomain:(id)arg1;
- (void)setAdvisoryAgentType:(id)arg1;
- (void)setAdvisoryInterface:(id)arg1;
- (void)setAssertHandler:(id /* block */)arg1;
- (void)setInternalAssertHandler:(id /* block */)arg1;
- (void)setInternalUnassertHandler:(id /* block */)arg1;
- (void)setNoAdvisoryTimer:(bool)arg1;
- (void)setPredictedInterface:(id)arg1;
- (void)setUnassertHandler:(id /* block */)arg1;
- (void)setWeakAdvisory:(bool)arg1;
- (void)unassertAgentWithOptions:(id)arg1;
- (bool)weakAdvisory;

@end