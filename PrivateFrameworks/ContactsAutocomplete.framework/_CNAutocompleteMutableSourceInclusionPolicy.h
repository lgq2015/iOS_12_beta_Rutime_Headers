/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface _CNAutocompleteMutableSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy> {
    bool  _includeCalendarServers;
    bool  _includeContacts;
    bool  _includeDirectoryServers;
    bool  _includePredictions;
    bool  _includeRecents;
    bool  _includeSuggestions;
    bool  _includeSupplementalResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool includeCalendarServers;
@property bool includeContacts;
@property bool includeDirectoryServers;
@property bool includePredictions;
@property bool includeRecents;
@property bool includeSuggestions;
@property bool includeSupplementalResults;
@property (readonly) Class superclass;

- (bool)includeCalendarServers;
- (bool)includeContacts;
- (bool)includeDirectoryServers;
- (bool)includePredictions;
- (bool)includeRecents;
- (bool)includeSuggestions;
- (bool)includeSupplementalResults;
- (void)setIncludeCalendarServers:(bool)arg1;
- (void)setIncludeContacts:(bool)arg1;
- (void)setIncludeDirectoryServers:(bool)arg1;
- (void)setIncludePredictions:(bool)arg1;
- (void)setIncludeRecents:(bool)arg1;
- (void)setIncludeSuggestions:(bool)arg1;
- (void)setIncludeSupplementalResults:(bool)arg1;

@end