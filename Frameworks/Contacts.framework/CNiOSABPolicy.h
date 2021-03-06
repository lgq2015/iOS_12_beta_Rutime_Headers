/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABPolicy : CNPolicy {
    bool  _abSourceIsContentReadonly;
    void * _fakePerson;
    void * _iOSABPolicy;
}

- (id)_orderedLabels:(id)arg1 withOrder:(id)arg2;
- (void)dealloc;
- (id)initWithAddressBookPolicy:(void*)arg1 readOnly:(bool)arg2;
- (bool)isReadonly;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (bool)shouldAddContact:(id)arg1;
- (bool)shouldRemoveContact:(id)arg1;
- (bool)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id*)arg4;
- (id)supportedLabelsForContactProperty:(id)arg1;

@end
