/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteDatabase : NSObject {
    struct unordered_set<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> > { 
        struct __hash_table<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *>, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<sqlite3_stmt *> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<sqlite3_stmt *> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _activeStatements;
    NSMutableDictionary * _attachedDatabaseURLsByName;
    bool  _checkpointRequired;
    struct sqlite3 { } * _db;
    <HDSQLiteDatabaseDelegate> * _delegate;
    NSURL * _fileURL;
    bool  _isHandlingTransactionEnd;
    bool  _isInTransaction;
    NSMutableArray * _onCommitBlocks;
    NSMutableArray * _onRollbackBlocks;
    bool  _requiresRollback;
    bool  _secureDeleteEnabled;
    struct __CFDictionary { } * _statementCache;
    long long  _transactionType;
    bool  _writer;
}

@property (nonatomic) bool checkpointRequired;
@property (nonatomic) <HDSQLiteDatabaseDelegate> *delegate;
@property (nonatomic, readonly) NSURL *fileURL;
@property (getter=isOpen, nonatomic, readonly) bool open;
@property (nonatomic) bool secureDeleteEnabled;
@property (getter=isWriter, nonatomic) bool writer;

+ (bool)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(bool*)arg2 resultCode:(int*)arg3 error:(id*)arg4;
+ (id)highFrequencyDatabaseURLWithProfileDirectoryPath:(id)arg1;
+ (id)mainDatabaseURLWithProfileDirectoryPath:(id)arg1;
+ (id)protectedDatabaseURLWithProfileDirectoryPath:(id)arg1;
+ (id)virtualFilesystemModule;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_assertNoActiveStatements;
- (int)_copyContentsFromDatabase:(struct sqlite3 { }*)arg1 toDatabase:(struct sqlite3 { }*)arg2;
- (bool)_executeSQL:(id)arg1 cache:(bool)arg2 error:(id*)arg3 bindingHandler:(id /* block */)arg4 enumerationHandler:(id /* block */)arg5;
- (bool)_executeSQL:(id)arg1 error:(id*)arg2;
- (bool)_executeSQL:(id)arg1 error:(id*)arg2 retryIfBusy:(bool)arg3;
- (bool)_integerValueForPragma:(id)arg1 databaseName:(id)arg2 value:(long long*)arg3 error:(id*)arg4;
- (int)_openForWriting:(bool)arg1 error:(id*)arg2;
- (bool)_prepareStatementForSQL:(id)arg1 cache:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (void)_resetStatement:(struct sqlite3_stmt { }*)arg1 finalize:(bool)arg2;
- (id)_schemaForDatabaseWithName:(id)arg1 error:(id*)arg2;
- (id)_schemaForIndexWithName:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (id)_schemaForTableWithName:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)_setPragma:(id)arg1 integerValue:(long long)arg2 withDatabaseName:(id)arg3 error:(id*)arg4;
- (struct sqlite3_stmt { }*)_statementForSQL:(id)arg1 shouldCache:(bool)arg2 didUseCache:(bool*)arg3 error:(id*)arg4;
- (id)_tableNamesForDatabaseWithName:(id)arg1 error:(id*)arg2;
- (bool)_verifyDatabaseOpenAndReturnError:(id*)arg1;
- (void)accessDatabaseUsingBlock:(id /* block */)arg1;
- (bool)accessHFDForReadingWithError:(id*)arg1 block:(id /* block */)arg2;
- (bool)accessHFDForWritingWithError:(id*)arg1 block:(id /* block */)arg2;
- (bool)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id*)arg3;
- (bool)attachProtectedDatabaseWithURL:(id)arg1 error:(id*)arg2;
- (bool)checkpointRequired;
- (void)close;
- (bool)columnIsNullable:(id)arg1 inTable:(id)arg2 error:(id*)arg3;
- (bool)correlationCountForDataEntitySubclassTable:(id)arg1 count:(long long*)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)delegate;
- (bool)deleteDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3;
- (bool)deleteRowsFromDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3;
- (bool)detachDatabaseWithName:(id)arg1 error:(id*)arg2;
- (bool)detachProtectedDatabaseWithError:(id*)arg1;
- (id)dumpSchemaWithError:(id*)arg1;
- (bool)enableIncrementalAutovacuumForDatabaseWithName:(id)arg1 error:(id*)arg2;
- (bool)executeSQL:(id)arg1 error:(id*)arg2;
- (bool)executeSQL:(id)arg1 error:(id*)arg2 bindingHandler:(id /* block */)arg3 enumerationHandler:(id /* block */)arg4;
- (bool)executeSQLStatements:(id)arg1 error:(id*)arg2;
- (bool)executeUncachedSQL:(id)arg1 error:(id*)arg2 bindingHandler:(id /* block */)arg3 enumerationHandler:(id /* block */)arg4;
- (id)fileURL;
- (bool)foreignKeyExistsFromTable:(id)arg1 column:(id)arg2 toTable:(id)arg3 column:(id)arg4 error:(id*)arg5;
- (int)getChangesCount;
- (id)getLastErrorWithResultCode:(int)arg1;
- (id)highFrequencyDatabaseURL;
- (bool)incrementalVacuumDatabaseIfNeeded:(id)arg1 error:(id*)arg2;
- (id)initMemoryDatabaseFromURL:(id)arg1 delegate:(id)arg2;
- (id)initMemoryDatabaseWithDelegate:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1 copyingDatabase:(id)arg2 delegate:(id)arg3;
- (id)initWithDatabaseURL:(id)arg1 delegate:(id)arg2;
- (bool)isDatabaseWithNameAttached:(id)arg1;
- (bool)isOpen;
- (bool)isProtectedDatabaseAttached;
- (bool)isWriter;
- (id)lastInsertRowID;
- (void)onCommit:(id /* block */)arg1 orRollback:(id /* block */)arg2;
- (int)openForReadingWithError:(id*)arg1;
- (int)openWithError:(id*)arg1;
- (bool)performIntegrityCheckWithError:(id*)arg1 integrityErrorHandler:(id /* block */)arg2;
- (bool)performTransactionWithType:(long long)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (id)queryPlanForSQL:(id)arg1 error:(id*)arg2;
- (void)requireRollback;
- (bool)secureDeleteEnabled;
- (void)setCheckpointRequired:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSecureDeleteEnabled:(bool)arg1;
- (bool)setUserVersion:(long long)arg1 withDatabaseName:(id)arg2 error:(id*)arg3;
- (void)setWriter:(bool)arg1;
- (id)statementsForDeleteRowsFromDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3;
- (bool)table:(id)arg1 hasColumnWithName:(id)arg2 error:(id*)arg3;
- (id)typeOfColumn:(id)arg1 inTable:(id)arg2 error:(id*)arg3;
- (long long)userVersionWithDatabaseName:(id)arg1 error:(id*)arg2;
- (long long)validateForeignKeysForTable:(id)arg1 databaseName:(id)arg2 error:(id*)arg3;

@end
