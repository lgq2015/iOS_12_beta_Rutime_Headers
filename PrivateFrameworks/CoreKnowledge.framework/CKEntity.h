/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEntity : NSObject {
    IMAccount * _chatAccount;
    CNContact * _cnContact;
    bool  _enlargedContactImage;
    IMHandle * _handle;
    UIImage * _transcriptContactImage;
    UIImage * _transcriptDrawerContactImage;
}

@property (nonatomic, readonly, copy) NSString *IDSCanonicalAddress;
@property (nonatomic, readonly) void*abRecord;
@property (nonatomic, readonly, copy) NSString *abbreviatedDisplayName;
@property (nonatomic, retain) IMAccount *chatAccount;
@property (nonatomic, retain) CNContact *cnContact;
@property (nonatomic, readonly) IMHandle *defaultIMHandle;
@property (nonatomic) bool enlargedContactImage;
@property (nonatomic, readonly, copy) NSString *fullName;
@property (nonatomic, retain) IMHandle *handle;
@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly) bool isMe;
@property (nonatomic, readonly) UIImage *locationMapViewContactImage;
@property (nonatomic, readonly) UIImage *locationShareBalloonContactImage;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *originalAddress;
@property (nonatomic, readonly) int propertyType;
@property (nonatomic, readonly, copy) NSString *rawAddress;
@property (nonatomic, readonly, copy) NSString *textToneIdentifier;
@property (nonatomic, readonly, copy) NSString *textVibrationIdentifier;
@property (nonatomic, readonly) UIImage *transcriptContactImage;
@property (nonatomic, readonly) UIImage *transcriptDrawerContactImage;

+ (id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2;
+ (id)copyEntityForAddressString:(id)arg1;

- (void).cxx_destruct;
- (id)IDSCanonicalAddress;
- (id)_croppedImageFromImageData:(id)arg1;
- (void)_setBusinessInfoForMutableContact:(id)arg1 enlargedImageData:(id)arg2;
- (void*)abRecord;
- (id)abbreviatedDisplayName;
- (id)chatAccount;
- (id)cnContact;
- (void)contactStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)defaultIMHandle;
- (id)description;
- (bool)enlargedContactImage;
- (id)fullName;
- (id)handle;
- (unsigned long long)hash;
- (int)identifier;
- (id)initWithChat:(id)arg1 imHandle:(id)arg2;
- (id)initWithIMHandle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (id)locationMapViewContactImage;
- (id)locationShareBalloonContactImage;
- (id)name;
- (id)originalAddress;
- (id)personViewControllerWithDelegate:(id)arg1 isUnknown:(bool*)arg2;
- (id)personViewControllerWithDelegate:(id)arg1 isUnknown:(bool*)arg2 contactStoreProvider:(id)arg3;
- (int)propertyType;
- (id)rawAddress;
- (void)setChatAccount:(id)arg1;
- (void)setCnContact:(id)arg1;
- (void)setEnlargedContactImage:(bool)arg1;
- (void)setHandle:(id)arg1;
- (id)textToneIdentifier;
- (id)textVibrationIdentifier;
- (id)transcriptContactImage;
- (id)transcriptDrawerContactImage;

@end