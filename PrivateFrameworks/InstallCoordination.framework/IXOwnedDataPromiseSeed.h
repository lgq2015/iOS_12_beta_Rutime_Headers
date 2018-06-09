/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXOwnedDataPromiseSeed : IXDataPromiseSeed <NSCopying, NSSecureCoding> {
    NSURL * _stagingBaseDir;
}

@property (nonatomic, retain) NSURL *stagingBaseDir;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStagingBaseDir:(id)arg1;
- (id)stagingBaseDir;

@end