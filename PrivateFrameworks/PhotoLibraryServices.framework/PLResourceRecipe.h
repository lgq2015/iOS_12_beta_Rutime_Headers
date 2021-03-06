/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLResourceRecipe : NSObject <NSCopying>

+ (Class)classFromRecipeID:(unsigned int)arg1;
+ (id)recipeFromID:(unsigned int)arg1;

- (void)applyToResource:(id)arg1 sourceProperties:(id)arg2 inContext:(id)arg3;
- (bool)colorSpaceIsNativeForDisplay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithRecipeID:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)recipeID;

@end
