/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataGenerator : NSObject <HDHealthDaemonReadyObserver> {
    HDDemoDataActivitySampleGenerator * _activitySampleGenerator;
    NSMutableDictionary * _appProvenances;
    HDDemoDataBloodSampleGenerator * _bloodSampleGenerator;
    HDDemoDataBodySampleGenerator * _bodySampleGenerator;
    NSObject<OS_dispatch_queue> * _demoDataQueue;
    NSObject<OS_dispatch_source> * _demoDataTimer;
    HDDemoDataPerson * _demoPerson;
    HDDemoDataFoodSampleGenerator * _foodSampleGenerator;
    HDDemoDataGeneratorState * _generatorState;
    NSCalendar * _gregorianCalendar;
    HDDemoDataHealthDocumentSampleGenerator * _healthDocumentSampleGenerator;
    HDDemoDataHeartSampleGenerator * _heartSampleGenerator;
    bool  _isGeneratingDemoData;
    HDDemoDataMindfulnessSampleGenerator * _mindfulnessSampleGenerator;
    long long  _numHKSamples;
    HDDemoDataPathologySampleGenerator * _pathologySampleGenerator;
    HDProfile * _profile;
    HDDemoDataReproductiveHealthSampleGenerator * _reproductiveHealthSampleGenerator;
    NSArray * _sampleGenerators;
    HDDemoDataSleepSampleGenerator * _sleepSampleGenerator;
    HDDemoDataStatisticsSampleGenerator * _statisticsSampleGenerator;
    HDDemoDataVitalsSampleGenerator * _vitalsSampleGenerator;
}

@property (nonatomic, retain) HDDemoDataActivitySampleGenerator *activitySampleGenerator;
@property (nonatomic, retain) HDDemoDataBloodSampleGenerator *bloodSampleGenerator;
@property (nonatomic, retain) HDDemoDataBodySampleGenerator *bodySampleGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HDDemoDataPerson *demoPerson;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HDDemoDataFoodSampleGenerator *foodSampleGenerator;
@property (nonatomic, readonly) HDDemoDataGeneratorState *generatorState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDDemoDataHealthDocumentSampleGenerator *healthDocumentSampleGenerator;
@property (nonatomic, retain) HDDemoDataHeartSampleGenerator *heartSampleGenerator;
@property (nonatomic, retain) HDDemoDataMindfulnessSampleGenerator *mindfulnessSampleGenerator;
@property (nonatomic, retain) HDDemoDataPathologySampleGenerator *pathologySampleGenerator;
@property (nonatomic, retain) HDDemoDataReproductiveHealthSampleGenerator *reproductiveHealthSampleGenerator;
@property (nonatomic, retain) HDDemoDataSleepSampleGenerator *sleepSampleGenerator;
@property (nonatomic, retain) HDDemoDataStatisticsSampleGenerator *statisticsSampleGenerator;
@property (readonly) Class superclass;
@property (nonatomic, retain) HDDemoDataVitalsSampleGenerator *vitalsSampleGenerator;

- (void).cxx_destruct;
- (id)_appProvenanceWithBundleIdentifier:(id)arg1;
- (id)_appSourceWithBundleIdentifier:(id)arg1;
- (bool)_archiveObject:(id)arg1 toDirectoryPath:(id)arg2;
- (void)_archiveToDirectoryPath:(id)arg1;
- (double)_initialGenerationTimeWithDate:(id)arg1;
- (void)_insertBiographicalDataFromDemoPerson:(id)arg1;
- (void)_insertIntoDatabaseObjectCollection:(id)arg1 fromPerson:(id)arg2;
- (void)_insertMedicalIDForDemoPerson:(id)arg1;
- (id)_phoneProveance;
- (void)_queue_generateDataForDemoPerson:(id)arg1 numIntervals:(long long)arg2;
- (void)_queue_generateDataForDemoPerson:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 firstRun:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)_queue_generateDemoDataIfNeeded;
- (void)_queue_generateFirstRunDataForDemoPerson:(id)arg1;
- (void)_queue_initDemoDataSampleGenerators;
- (bool)_queue_loadDemoDataSampleGeneratorState;
- (void)_queue_runDemoDataGeneratorForDemoPerson:(id)arg1 endDate:(id)arg2;
- (void)_queue_setupDemoDataSampleGenerators;
- (bool)_queue_unarchiveFromDirectoryPath:(id)arg1;
- (id)_stateDirectory;
- (double)_timeIntervalFromInitialGenerationPeriod:(long long)arg1 currentDate:(id)arg2;
- (void)_triggerDemoDataGenerationAfterTimeInterval:(double)arg1;
- (id)_unarchiveDataWithClass:(Class)arg1 atDirectoryPath:(id)arg2;
- (void)_updateWorkoutConfigurationInGeneratorStateWithSampleDate:(id)arg1;
- (id)_watchProvenanceWithPerson:(id)arg1;
- (id)activitySampleGenerator;
- (id)bloodSampleGenerator;
- (id)bodySampleGenerator;
- (id)currentDateFromCurrentTime:(double)arg1;
- (void)daemonReady:(id)arg1;
- (id)demoPerson;
- (id)firstSampleDate;
- (long long)firstSampleDayOfYear;
- (id)foodSampleGenerator;
- (id)generatorState;
- (id)gregorianCalendar;
- (id)healthDocumentSampleGenerator;
- (id)heartSampleGenerator;
- (id)initWithProfile:(id)arg1;
- (bool)isDifferentDayFromTime:(double)arg1;
- (id)mindfulnessSampleGenerator;
- (id)pathologySampleGenerator;
- (id)reproductiveHealthSampleGenerator;
- (void)setActivitySampleGenerator:(id)arg1;
- (void)setBloodSampleGenerator:(id)arg1;
- (void)setBodySampleGenerator:(id)arg1;
- (void)setDemoPerson:(id)arg1;
- (void)setFoodSampleGenerator:(id)arg1;
- (void)setHealthDocumentSampleGenerator:(id)arg1;
- (void)setHeartSampleGenerator:(id)arg1;
- (void)setMindfulnessSampleGenerator:(id)arg1;
- (void)setPathologySampleGenerator:(id)arg1;
- (void)setReproductiveHealthSampleGenerator:(id)arg1;
- (void)setSleepSampleGenerator:(id)arg1;
- (void)setStatisticsSampleGenerator:(id)arg1;
- (void)setVitalsSampleGenerator:(id)arg1;
- (id)sleepSampleGenerator;
- (id)statisticsSampleGenerator;
- (id)vitalsSampleGenerator;

@end