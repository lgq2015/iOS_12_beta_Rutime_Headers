/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDataSourceManager : RERelevanceEngineSubsystem <RELoggable> {
    NSSet * _availableDataSourceIdentifiers;
    NSSet * _currentDataSourceIdentifiers;
    NSArray * _currentDataSources;
    NSMutableArray * _dataSourceControllers;
    unsigned long long  _dataSourceState;
    <REDataSourceManagerObserver> * _delegate;
    NSSet * _disabledDataSources;
    REConcurrentDictionary * _elementGroupMap;
    NSSet * _elementGroupSupportingConfigurations;
    NSDictionary * _identifierApplicationIdentifierMap;
    NSDictionary * _identifierDataSourceMap;
    NSDictionary * _identifierOperatingSystemVersionMap;
    REDataSourceLoader * _loader;
    bool  _locationAllowed;
}

@property (retain) NSSet *availableDataSourceIdentifiers;
@property (retain) NSSet *currentDataSourceIdentifiers;
@property (readonly) NSArray *currentDataSources;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <REDataSourceManagerObserver> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) REDataSourceLoader *loader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleApplicationStateChange;
- (bool)_isApplicationRemovedOrRestrictedForIdentifier:(id)arg1;
- (void)_queue_availableDataSourcesDidChange;
- (void)_queue_loadDataSourceWithIdentifier:(id)arg1;
- (void)_queue_unloadDataSourceWithIdentifier:(id)arg1;
- (void)_queue_updateAvailableDataSourceIdentifiers;
- (void)_updatePreferences;
- (id)availableDataSourceIdentifiers;
- (Class)classForDataSourceIdentifier:(id)arg1;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)currentDataSourceIdentifiers;
- (id)currentDataSources;
- (void)dealloc;
- (id)delegate;
- (id)elementGroupForIdentifier:(id)arg1;
- (void)enumerateElementDataSourceControllers:(id /* block */)arg1;
- (id)initWithRelevanceEngine:(id)arg1 dataSourceLoader:(id)arg2 withDelegate:(id)arg3;
- (id)loader;
- (struct { long long x1; long long x2; long long x3; })minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1;
- (void)pause;
- (void)resume;
- (void)setAvailableDataSourceIdentifiers:(id)arg1;
- (void)setCurrentDataSourceIdentifiers:(id)arg1;

@end
