//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WKSyncProtocolDelegate-Protocol.h"

@class DTBusinessConferenceViewController, NSString, UIButton, UIWindow;

@interface DTConferenceInit : NSObject <WKSyncProtocolDelegate>
{
    _Bool _hasInit;
    _Bool _hasReq;
    UIWindow *_window;
    UIWindow *_conferenceWindow;
    DTBusinessConferenceViewController *_conferenceVC;
    UIButton *_conferenceBtn;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hasReq; // @synthesize hasReq=_hasReq;
@property(retain, nonatomic) UIButton *conferenceBtn; // @synthesize conferenceBtn=_conferenceBtn;
@property(nonatomic) _Bool hasInit; // @synthesize hasInit=_hasInit;
@property(retain, nonatomic) DTBusinessConferenceViewController *conferenceVC; // @synthesize conferenceVC=_conferenceVC;
@property(retain, nonatomic) UIWindow *conferenceWindow; // @synthesize conferenceWindow=_conferenceWindow;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)pan:(id)arg1;
- (void)enterConferenceView;
- (void)exitConferenceView;
- (void)languageChanged:(id)arg1;
- (void)onNetworkStatusChanged:(id)arg1;
- (void)conferenceInComing:(id)arg1;
- (void)becomeActive;
- (void)pushKitAction:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelLockState:(int)arg1;
- (void)registerLockState:(id)arg1;
- (void)didReceiveRemotePushKitNotification:(id)arg1;
- (void)didReceiveRemoteNotification:(id)arg1;
- (void)pullConferenceWhenBecomeActive;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)hideAll:(CDUnknownBlockType)arg1;
- (void)show:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)show:(CDUnknownBlockType)arg1;
- (void)onAccountLoggedOut:(id)arg1;
- (void)clear;
- (void)getBizDataWithTypes:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)receiveDatas:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)setupSyncProtocol;
- (void)destoryVoIP;
- (void)setupVoIP;
- (void)getFeedInfo;
- (void)getShowPageInfo;
- (void)getWhiteUser;
- (void)setup;
- (void)dealloc;
- (void)startDetectCellPhoneNet;
- (_Bool)shouldShowWarnAlert;
- (id)getMobileService;
- (void)loginSuccess:(id)arg1;
- (void)organizationDidChanged;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
