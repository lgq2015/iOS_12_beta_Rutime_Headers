/* made by EzioChiu.
 */

@protocol HDFitnessMachinePairingManagerDelegate

@required

- (void)pairingManager:(HDFitnessMachinePairingManager *)arg1 didChangeNFCEnabledState:(bool)arg2;
- (void)pairingManager:(HDFitnessMachinePairingManager *)arg1 discoveredHealthService:(HKHealthService *)arg2 machineType:(unsigned long long)arg3;
- (void)pairingManager:(HDFitnessMachinePairingManager *)arg1 failedPairingWithError:(NSError *)arg2;
- (void)pairingManager:(HDFitnessMachinePairingManager *)arg1 updatedConnectionStateFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)pairingManagerDidBeginPairing:(HDFitnessMachinePairingManager *)arg1;
- (void)pairingManagerReadyToConnect:(HDFitnessMachinePairingManager *)arg1;
- (void)pairingManagerReceivedActivityTypeAndPermission:(HDFitnessMachinePairingManager *)arg1;
- (HDHealthServiceOOBInfo *)pairingManagerRequestsOOBData:(HDFitnessMachinePairingManager *)arg1 error:(id*)arg2;
- (void)pairingManagerUpdatedMachineInformation:(HDFitnessMachinePairingManager *)arg1;
- (void)pairingManagerWillBeginPairing:(HDFitnessMachinePairingManager *)arg1 fitnessMachineToken:(HDFitnessMachineSession *)arg2;

@end