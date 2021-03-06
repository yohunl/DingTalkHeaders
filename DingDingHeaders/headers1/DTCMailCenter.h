//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BLFileBasedInterfaceRouteDelegate-Protocol.h"
#import "DTChooseReleatedMailControllerDelegate-Protocol.h"
#import "DTConversationSelectViewControllerDelegate-Protocol.h"
#import "MWPhotoBrowserDelegate-Protocol.h"

@class BLFolder, MWPhotoBrowser, NSMutableDictionary, NSString;
@protocol BLFileBasedInterfaceRouteDelegate, BLPhotoBrowserDataSource, DTCMailPickerDelegate;

@interface DTCMailCenter : NSObject <MWPhotoBrowserDelegate, DTChooseReleatedMailControllerDelegate, DTConversationSelectViewControllerDelegate, BLFileBasedInterfaceRouteDelegate>
{
    _Bool _isAutoLoginDingTalkMail;
    _Bool _isAlertingModifiedEnterpriseEmail;
    BLFolder *_currentUsingFolder;
    id <BLPhotoBrowserDataSource> _photoDataSource;
    MWPhotoBrowser *_browser;
    id <DTCMailPickerDelegate> _cMailPickerDelegate;
    long long _lastRefreshMailTime;
    NSString *_mailHelperCid;
    NSString *_willTransmitAttachmentURL;
    NSString *_willTransmitAttachmentName;
    NSMutableDictionary *_didShowLoginModifiedMailDict;
    id <BLFileBasedInterfaceRouteDelegate> _spaceRouteHandler;
}

+ (id)cMailModeWithBLMail:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) id <BLFileBasedInterfaceRouteDelegate> spaceRouteHandler; // @synthesize spaceRouteHandler=_spaceRouteHandler;
@property(retain, nonatomic) NSMutableDictionary *didShowLoginModifiedMailDict; // @synthesize didShowLoginModifiedMailDict=_didShowLoginModifiedMailDict;
@property(nonatomic) _Bool isAlertingModifiedEnterpriseEmail; // @synthesize isAlertingModifiedEnterpriseEmail=_isAlertingModifiedEnterpriseEmail;
@property(copy, nonatomic) NSString *willTransmitAttachmentName; // @synthesize willTransmitAttachmentName=_willTransmitAttachmentName;
@property(copy, nonatomic) NSString *willTransmitAttachmentURL; // @synthesize willTransmitAttachmentURL=_willTransmitAttachmentURL;
@property(retain, nonatomic) NSString *mailHelperCid; // @synthesize mailHelperCid=_mailHelperCid;
@property(nonatomic) long long lastRefreshMailTime; // @synthesize lastRefreshMailTime=_lastRefreshMailTime;
@property(nonatomic) __weak id <DTCMailPickerDelegate> cMailPickerDelegate; // @synthesize cMailPickerDelegate=_cMailPickerDelegate;
@property(nonatomic) __weak MWPhotoBrowser *browser; // @synthesize browser=_browser;
@property(nonatomic) __weak id <BLPhotoBrowserDataSource> photoDataSource; // @synthesize photoDataSource=_photoDataSource;
@property(retain, nonatomic) BLFolder *currentUsingFolder; // @synthesize currentUsingFolder=_currentUsingFolder;
@property(nonatomic) _Bool isAutoLoginDingTalkMail; // @synthesize isAutoLoginDingTalkMail=_isAutoLoginDingTalkMail;
- (void).cxx_destruct;
- (void)sendMailToChat:(id)arg1 action:(unsigned long long)arg2 mailMode:(id)arg3 pageTitle:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)requestCanUnbindEmailFromServerWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (long long)canUnbindEmailFromLocal;
- (void)clearBindedEmailNotificationMarks;
- (_Bool)showNewEmailBindToEnterpiseIfNeed:(id)arg1;
- (void)autoLoginDingTalkMailIfNeed;
- (void)mailCtrlClicked:(id)arg1;
- (void)didSendMail:(id)arg1;
- (void)didSaveMailDraft:(id)arg1;
- (void)onAccountLoggedOut:(id)arg1;
- (void)onAccountLoginIn:(id)arg1;
- (void)monitorSendMailStatus;
- (void)didRefreshMailFail:(id)arg1;
- (void)didRefreshMail:(id)arg1;
- (void)onNetworkStatusChanged:(id)arg1;
- (void)folderStatusModified:(id)arg1;
- (id)conversationSelectViewAttachmentDataForSend;
- (int)conversationSelectViewAttachmentType;
- (void)chooseReleatedMailController:(id)arg1 selectedMails:(id)arg2;
- (void)photoBrowserDownloadImageError:(id)arg1 errUserInfo:(id)arg2;
- (id)photoBrowser:(id)arg1 customMenusAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)openWebViewFromViewController:(id)arg1 withOpenUrl:(id)arg2;
- (void)openPhotoBrowserFromViewController:(id)arg1 withDataSource:(id)arg2;
- (void)saveAttachmentToSpace:(id)arg1 mailID:(id)arg2 fromVC:(id)arg3;
- (void)presentFolderChooserFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)presentFileChooserFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)presentContactInterfaceFromViewController:(id)arg1 forTransmitContent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)presentContactChooserFromViewController:(id)arg1 alreadySelected:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)presentCameraFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)presentPhotoLibraryFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)isDingTalkMailBinded;
- (_Bool)isDingAccountValid:(id)arg1;
- (void)checkCmailAccountWithCompletionBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)checkCmailAccountWithMailMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (_Bool)isZhongXing;
- (id)doBindAndLogin:(CDUnknownBlockType)arg1;
- (id)createMailAttachmentWithCSpaceDentries:(id)arg1 withAccount:(id)arg2;
- (void)createCMailWriterWithAction:(unsigned long long)arg1 receivers:(id)arg2 subject:(id)arg3 mailExtension:(id)arg4 denties:(id)arg5 mailMessage:(id)arg6 pageTitle:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)createCMailWriterWithAction:(unsigned long long)arg1 receivers:(id)arg2 subject:(id)arg3 mailExtension:(id)arg4 denties:(id)arg5 mailMessage:(id)arg6 SuccessBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)createCMailWriterWithAction:(unsigned long long)arg1 receivers:(id)arg2 subject:(id)arg3 mailMessage:(id)arg4 SuccessBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)createCMailWriterWithAction:(unsigned long long)arg1 receiver:(id)arg2 subject:(id)arg3 mailMessage:(id)arg4 SuccessBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)createMailDetailWithSearchRecord:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)createMailDetailWithMailMessage:(id)arg1 conversation:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)createMailDetailWithMailMessage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)createCMailListWithDefaultMode:(int)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)createMailChooserWithUid:(long long)arg1 withDelegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)orgAuthEmailsForCurrentUser;
- (_Bool)isMailHelperExist;
- (void)setMailHelperAtTop:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (_Bool)isMailHelperAtTop;
- (void)setCmailPushAction:(unsigned long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)cmailPushAction;
- (void)setImportantMailPush:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (_Bool)importantMailPush;
- (void)setDingAccount:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

