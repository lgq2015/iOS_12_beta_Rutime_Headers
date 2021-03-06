/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPluginManager : NSObject {
    HDDaemon * _daemon;
    NSArray * _legacyPlugins;
    NSDictionary * _legacyPluginsByIdentifier;
    NSArray * _plugins;
}

@property (nonatomic) HDDaemon *daemon;
@property (nonatomic, retain) NSDictionary *legacyPluginsByIdentifier;

- (void).cxx_destruct;
- (id)_createLegacyPluginsFromClasses:(id)arg1;
- (id)_createPluginsFromClasses:(id)arg1;
- (id)_internalPluginsPath;
- (void)_loadPlugins;
- (Class)_loadPrincipalClassConformingToProtocols:(id)arg1 fromBundleAtPath:(id)arg2;
- (id)_loadPrincipalClassesConformingToProtocols:(id)arg1 fromBundlesInDirectoryAtPath:(id)arg2 error:(id*)arg3;
- (id)_pluginClasses;
- (id)_pluginPaths;
- (id)_pluginsPath;
- (id)_principalClassProtocols;
- (id)createExtensionsForDaemon:(id)arg1;
- (id)createExtensionsForProfile:(id)arg1;
- (id)daemon;
- (id)initWithDaemon:(id)arg1;
- (id)legacyPlugins;
- (id)legacyPluginsByIdentifier;
- (id)pluginForIdentifier:(id)arg1;
- (id)pluginsConformingToProtocol:(id)arg1;
- (id)pluginsForProtocol:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setLegacyPluginsByIdentifier:(id)arg1;

@end
