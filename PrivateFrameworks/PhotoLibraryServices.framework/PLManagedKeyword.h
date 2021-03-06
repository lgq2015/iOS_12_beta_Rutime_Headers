/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedKeyword : PLManagedObject

@property (nonatomic, retain) NSSet *assetAttributes;
@property (nonatomic, retain) NSString *title;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

@end
