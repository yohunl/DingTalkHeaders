//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

#import "DTMessagePopupAlbumMenuViewDelegate-Protocol.h"
#import "ELCImagePickerControllerDelegate-Protocol.h"

@class LAActionRequest, LAActionResponse, NSDictionary, NSMutableArray, NSString;

@interface DTLAPImageAbout : LAPluginBase <DTMessagePopupAlbumMenuViewDelegate, ELCImagePickerControllerDelegate>
{
    _Bool _uploadStarted;
    _Bool _enbalemMltiple;
    _Bool _useMediaId;
    _Bool _imageNeedCompressed;
    long long _maxPickerCnt;
    long long _uploadingImageCnt;
    NSMutableArray *_uploadedImageUrls;
    double _imageQuality;
    LAActionRequest *_uploadRequest;
    LAActionResponse *_uploadResponse;
    NSDictionary *_stickersInfo;
    long long _cameraDevice;
    CDUnknownBlockType _imageDataHandler;
}

+ (id)pluginExactName;
@property(copy, nonatomic) CDUnknownBlockType imageDataHandler; // @synthesize imageDataHandler=_imageDataHandler;
@property(nonatomic) long long cameraDevice; // @synthesize cameraDevice=_cameraDevice;
@property(copy, nonatomic) NSDictionary *stickersInfo; // @synthesize stickersInfo=_stickersInfo;
@property(retain, nonatomic) LAActionResponse *uploadResponse; // @synthesize uploadResponse=_uploadResponse;
@property(retain, nonatomic) LAActionRequest *uploadRequest; // @synthesize uploadRequest=_uploadRequest;
@property(nonatomic) double imageQuality; // @synthesize imageQuality=_imageQuality;
@property(retain, nonatomic) NSMutableArray *uploadedImageUrls; // @synthesize uploadedImageUrls=_uploadedImageUrls;
@property long long uploadingImageCnt; // @synthesize uploadingImageCnt=_uploadingImageCnt;
@property(nonatomic) long long maxPickerCnt; // @synthesize maxPickerCnt=_maxPickerCnt;
@property(nonatomic) _Bool imageNeedCompressed; // @synthesize imageNeedCompressed=_imageNeedCompressed;
@property(nonatomic) _Bool useMediaId; // @synthesize useMediaId=_useMediaId;
@property(nonatomic) _Bool enbalemMltiple; // @synthesize enbalemMltiple=_enbalemMltiple;
@property _Bool uploadStarted; // @synthesize uploadStarted=_uploadStarted;
- (void).cxx_destruct;
- (void)resetUploadingStatusSafty;
- (id)hudWindow;
- (void)responseSuccessSafety;
- (void)uploadToTFS:(id)arg1 originalFilePath:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)compressImage:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)checkAndUpload:(id)arg1 originalFilePath:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)encodeImage:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)elcImagePickerControllerDidCancel:(id)arg1;
- (void)elcImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)loadItem:(id)arg1 withSuccessBlock:(CDUnknownBlockType)arg2 andFailureBlock:(CDUnknownBlockType)arg3;
- (void)handleSelectedPhotos:(id)arg1 isOriginal:(_Bool)arg2;
- (void)didCancelOnPopupAlbumMenuView:(id)arg1;
- (void)didOpenedAlbumOnPopupAlbumMenuView:(id)arg1;
- (void)didCancelPickImageAsset;
- (void)didPickImageAsset:(id)arg1;
- (void)didOpenedCameraOnPopupAlbumMenuView:(id)arg1;
- (void)didSelectedPhotosInAlbumWithViewModels:(id)arg1 isOriginal:(_Bool)arg2;
- (void)showPopupAlbumMenuView;
- (void)fetchImageData:(id)arg1 to:(id)arg2;
- (void)__exported__fetchImageData:(id)arg1 to:(id)arg2;
- (void)uploadImageFromCamera:(id)arg1 to:(id)arg2;
- (void)__exported__uploadImageFromCamera:(id)arg1 to:(id)arg2;
- (void)uploadImage:(id)arg1 to:(id)arg2;
- (void)__exported__uploadImage:(id)arg1 to:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

