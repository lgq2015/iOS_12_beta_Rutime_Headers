/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNArchivedUIState : TSPObject {
    TNUIState * _uiState;
}

@property (nonatomic, readonly) TNUIState *uiState;

- (void).cxx_destruct;
- (id)initWithUIState:(id)arg1 context:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)uiState;

@end
