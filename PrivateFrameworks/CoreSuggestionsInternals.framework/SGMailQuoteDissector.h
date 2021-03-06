/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMailQuoteDissector : SGPipelineDissector {
    bool  _paranoid;
}

- (id)_tofuRegions:(id)arg1 utf8:(const char *)arg2 utf16:(id)arg3 isAOSPMail:(bool)arg4;
- (id)_xWrote:(id)arg1 utf8:(const char *)arg2;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)initParanoid;
- (id)quotedRegionsFrom:(id)arg1 isAOSPMail:(bool)arg2 foundToEndOfMessage:(bool*)arg3;

@end
