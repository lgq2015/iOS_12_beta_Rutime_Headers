/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVDataAccessor : NSObject {
    unsigned int  _faceAlgorithmUmbrellaVersion;
    <PVPersistenceDelegate> * _persistenceDelegate;
    unsigned int  _sceneAlgorithmUmbrellaVersion;
}

@property (nonatomic) unsigned int faceAlgorithmUmbrellaVersion;
@property (nonatomic, retain) <PVPersistenceDelegate> *persistenceDelegate;
@property (nonatomic) unsigned int sceneAlgorithmUmbrellaVersion;

- (void).cxx_destruct;
- (id)activeFaceprintsByFaceLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)allAlgorithmicFaceGroups:(id*)arg1;
- (unsigned long long)countOfAlgorithmicFaceGroups;
- (unsigned long long)countOfClusteredFaces;
- (unsigned long long)countOfClusteredFacesWithClusterSequenceNumbersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)countOfClusteringEligibleFaces;
- (unsigned long long)countOfFaces;
- (bool)deleteEmptyGroupsAndReturnError:(id*)arg1;
- (id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2;
- (unsigned int)faceAlgorithmUmbrellaVersion;
- (id)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(bool)arg2 error:(id*)arg3;
- (id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2 excludeClustered:(bool)arg3;
- (id)facesForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id*)arg2;
- (id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 canceler:(id)arg2 error:(id*)arg3;
- (id)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(bool)arg2 error:(id*)arg3;
- (id)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)persistGeneratedFaceCrops:(id)arg1 error:(id*)arg2;
- (id)persistenceDelegate;
- (id)personForLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)personWithFaceLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)personsForLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)rejectedFacesForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)resetLibraryClustersWithCanceler:(id)arg1 error:(id*)arg2;
- (unsigned int)sceneAlgorithmUmbrellaVersion;
- (void)setFaceAlgorithmUmbrellaVersion:(unsigned int)arg1;
- (void)setPersistenceDelegate:(id)arg1;
- (void)setSceneAlgorithmUmbrellaVersion:(unsigned int)arg1;
- (id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id*)arg1;
- (id)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:(id)arg1 withFaceprintVersion:(unsigned int)arg2;

@end