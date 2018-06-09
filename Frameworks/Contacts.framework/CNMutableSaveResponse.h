/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMutableSaveResponse : CNSaveResponse

+ (bool)supportsSecureCoding;

- (void)setContactSnapshot:(id)arg1 forIndexPath:(id)arg2;
- (void)setContainerSnapshot:(id)arg1 forIndexPath:(id)arg2;
- (void)setGroupSnapshot:(id)arg1 forIndexPath:(id)arg2;

@end