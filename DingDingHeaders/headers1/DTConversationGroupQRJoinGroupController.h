//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTBizConversation, NSString, UIButton, UIImageView, UIScrollView;

@interface DTConversationGroupQRJoinGroupController : DTViewController
{
    _Bool _hasSentJoinGroupRequest;
    _Bool _hasDidAppear;
    UIScrollView *_contentView;
    UIImageView *_orgCardView;
    UIImageView *_bottomLine;
    UIButton *_confirmButton;
    DTBizConversation *_conversation;
    NSString *_qrcode;
    long long _senderId;
}

@property(nonatomic) _Bool hasDidAppear; // @synthesize hasDidAppear=_hasDidAppear;
@property(nonatomic) _Bool hasSentJoinGroupRequest; // @synthesize hasSentJoinGroupRequest=_hasSentJoinGroupRequest;
@property(nonatomic) long long senderId; // @synthesize senderId=_senderId;
@property(retain, nonatomic) NSString *qrcode; // @synthesize qrcode=_qrcode;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *orgCardView; // @synthesize orgCardView=_orgCardView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)jumpToDTMessageBaseViewController;
- (void)openApplyJoinGroupViewController;
- (void)confirmButtonAction:(id)arg1;
- (void)showJoinGroupConfirmButton;
- (void)disableConfirmationButton;
- (void)didFinishCheckJoinGroupWithResult:(_Bool)arg1;
- (void)checkHasSentJoinGroupRequest;
- (void)verifyQRCodeDidFinish:(long long)arg1 conversation:(id)arg2 isMember:(_Bool)arg3;
- (void)fetchConversation;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithQRcode:(id)arg1;

@end
