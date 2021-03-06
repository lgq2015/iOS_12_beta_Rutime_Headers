/* made by EzioChiu.
 */

@protocol PLSyncablePerson <NSObject, PLSyncableObject>

@required

- (NSString *)fullName;
- (bool)graphVerified;
- (bool)isTombstone;
- (bool)keyFaceIsPicked;
- (NSString *)personUUID;
- (NSString *)pointerDescription;
- (void)setFullName:(NSString *)arg1;
- (void)setKeyFaceToPicked;
- (void)setPersonUUID:(NSString *)arg1;
- (NSString *)syncDescription;
- (bool)userVerified;

@end
