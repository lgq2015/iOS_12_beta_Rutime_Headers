/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUZipFileArchive : TSUZipArchive {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _archiveLength;
    TSUZipFileDescriptorWrapper * _fdWrapper;
    NSURL * _temporaryDirectoryURL;
}

+ (bool)isZipArchiveAtFD:(int)arg1;
+ (bool)isZipArchiveAtURL:(id)arg1 error:(id*)arg2;
+ (void)readArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (id)zipArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (unsigned long long)archiveLength;
- (bool)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id*)arg2;
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)initForReadingFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)isValid;
- (id)newArchiveReadChannel;
- (bool)openWithURL:(id)arg1 error:(id*)arg2;
- (void)removeTemporaryDirectory;
- (bool)reopenWithTemporaryURL:(id)arg1 error:(id*)arg2;

@end
