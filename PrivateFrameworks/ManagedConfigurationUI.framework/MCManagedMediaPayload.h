/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCManagedMediaPayload : MCPayload {
    MCBook * _managedBook;
}

@property (nonatomic, retain) MCBook *managedBook;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)initWithManagedMedia:(id)arg1 profile:(id)arg2;
- (id)managedBook;
- (void)setManagedBook:(id)arg1;
- (id)title;

@end
