/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICRemoteFileWrapper : NSFileWrapper <NSSecureCoding> {
    NSData * _cachedData;
    NSURL * _remoteURL;
}

@property (nonatomic, retain) NSData *cachedData;
@property (nonatomic, retain) NSURL *remoteURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addFileWrapper:(id)arg1;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (id)cachedData;
- (id)dataWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileAttributes;
- (id)fileWrappers;
- (id)filename;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteURL:(id)arg1;
- (bool)isDirectory;
- (bool)isSymbolicLink;
- (id)keyForFileWrapper:(id)arg1;
- (bool)matchesContentsOfURL:(id)arg1;
- (id)preferredFilename;
- (bool)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)regularFileContents;
- (id)remoteURL;
- (void)removeFileWrapper:(id)arg1;
- (id)serializedRepresentation;
- (void)setCachedData:(id)arg1;
- (void)setRemoteURL:(id)arg1;
- (id)symbolicLinkDestinationURL;
- (bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4;

@end