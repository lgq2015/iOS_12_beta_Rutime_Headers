/* made by EzioChiu.
 */

@protocol _SGDSuggestManagerContactsConfirmRejectProtocol

@required

- (void)confirmContact:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGRealtimeContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)confirmContactDetailRecord:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)confirmRecord:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)rejectContact:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGRealtimeContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)rejectContactDetailRecord:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)rejectCuratedContactDetail:(void *)arg1 from:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CNLabeledValue *, CNContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)rejectRecord:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*

@end