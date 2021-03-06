/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SABinaryLocator : NSObject {
    NSString * _buildNumber;
    bool  _dirty;
    bool  _enabled;
    NSMutableDictionary * _mappings;
}

@property bool enabled;

+ (id)sharedBinaryLocator;

- (void).cxx_destruct;
- (void)_saveMappings;
- (bool)addURL:(id)arg1 ForUUID:(id)arg2;
- (bool)addURLForCSSymbolOwner:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (oneway void)done;
- (bool)enabled;
- (id)init;
- (id)initSharedBinaryLocator;
- (id)mappings;
- (bool)removeURLForUUID:(id)arg1;
- (void)saveMappings;
- (void)setEnabled:(bool)arg1;
- (id)urlForUUID:(id)arg1;

@end
