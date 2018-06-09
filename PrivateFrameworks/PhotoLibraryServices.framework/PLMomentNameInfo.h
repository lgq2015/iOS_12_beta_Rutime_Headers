/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentNameInfo : NSObject {
    NSArray * __orderedNames;
    PLRevGeoCompoundNameInfo * __primaryNameInfo;
    PLRevGeoCompoundNameInfo * __secondaryNameInfo;
    bool  _locationInfoIsValid;
}

@property (setter=_setOrderedNames:, nonatomic, retain) NSArray *_orderedNames;
@property (nonatomic, retain) PLRevGeoCompoundNameInfo *_primaryNameInfo;
@property (nonatomic, retain) PLRevGeoCompoundNameInfo *_secondaryNameInfo;

+ (id)_localizedNameForName:(id)arg1;

- (id)_orderedNames;
- (id)_primaryNameInfo;
- (id)_secondaryNameInfo;
- (void)_setOrderedNames:(id)arg1;
- (id)componentsForPrimaryTitle;
- (id)componentsForSecondaryTitle;
- (void)dealloc;
- (id)initWithMoment:(id)arg1;
- (id)initWithMomentList:(id)arg1;
- (id)localizedPrimaryTitle;
- (bool)locationInfoIsValid;
- (void)set_primaryNameInfo:(id)arg1;
- (void)set_secondaryNameInfo:(id)arg1;

@end