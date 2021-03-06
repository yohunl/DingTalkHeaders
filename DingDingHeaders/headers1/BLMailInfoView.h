//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BLTokenFieldDelegate-Protocol.h"

@class BLSubjectView, BLTokenField, NSString, UIButton, UIImageView, UILabel;
@protocol BLMailInfoViewDelegate;

@interface BLMailInfoView : UIView <BLTokenFieldDelegate>
{
    _Bool _extendable;
    _Bool _existAttachment;
    id <BLMailInfoViewDelegate> _delegate;
    BLTokenField *_tokenFieldOfCC;
    BLTokenField *_tokenField;
    UILabel *_toPrefixLabel;
    UILabel *_ccPrefixLabel;
    UILabel *_senderLabel;
    UILabel *_timeLabel;
    UIButton *_toRecipientsBtn;
    UILabel *_toRecipientCountLabel;
    UIImageView *_avatarImageView;
    UIImageView *_attachmentIcon;
    UILabel *_attachmentCountLabel;
    UIButton *_toggleInfoButton;
    BLSubjectView *_dateSubjectView;
    UIButton *_gotoAttachmentBtn;
    UILabel *_attachmentLabel;
    NSString *_recipientsString;
    double _recipientsWidth;
    unsigned long long _recipientsCount;
}

@property(nonatomic) _Bool existAttachment; // @synthesize existAttachment=_existAttachment;
@property(nonatomic) unsigned long long recipientsCount; // @synthesize recipientsCount=_recipientsCount;
@property(nonatomic) double recipientsWidth; // @synthesize recipientsWidth=_recipientsWidth;
@property(retain, nonatomic) NSString *recipientsString; // @synthesize recipientsString=_recipientsString;
@property(retain, nonatomic) UILabel *attachmentLabel; // @synthesize attachmentLabel=_attachmentLabel;
@property(retain, nonatomic) UIButton *gotoAttachmentBtn; // @synthesize gotoAttachmentBtn=_gotoAttachmentBtn;
@property(retain, nonatomic) BLSubjectView *dateSubjectView; // @synthesize dateSubjectView=_dateSubjectView;
@property(retain, nonatomic) UIButton *toggleInfoButton; // @synthesize toggleInfoButton=_toggleInfoButton;
@property(retain, nonatomic) UILabel *attachmentCountLabel; // @synthesize attachmentCountLabel=_attachmentCountLabel;
@property(retain, nonatomic) UIImageView *attachmentIcon; // @synthesize attachmentIcon=_attachmentIcon;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *toRecipientCountLabel; // @synthesize toRecipientCountLabel=_toRecipientCountLabel;
@property(retain, nonatomic) UIButton *toRecipientsBtn; // @synthesize toRecipientsBtn=_toRecipientsBtn;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *senderLabel; // @synthesize senderLabel=_senderLabel;
@property(retain, nonatomic) UILabel *ccPrefixLabel; // @synthesize ccPrefixLabel=_ccPrefixLabel;
@property(retain, nonatomic) UILabel *toPrefixLabel; // @synthesize toPrefixLabel=_toPrefixLabel;
@property(retain, nonatomic) BLTokenField *tokenField; // @synthesize tokenField=_tokenField;
@property(retain, nonatomic) BLTokenField *tokenFieldOfCC; // @synthesize tokenFieldOfCC=_tokenFieldOfCC;
@property(nonatomic) __weak id <BLMailInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool extendable; // @synthesize extendable=_extendable;
- (void).cxx_destruct;
- (void)completeShow;
- (void)relocateUI:(_Bool)arg1;
- (void)toggleInfoButtonTaped:(id)arg1;
- (void)tokenField:(id)arg1 tokenTaped:(id)arg2;
- (void)tokenFieldFrameWillChange:(id)arg1;
- (void)tokenField:(id)arg1 didAddToken:(id)arg2;
- (void)gotoAttachmentClick:(id)arg1;
- (void)clickOnSender:(id)arg1;
- (void)setAttachmentCount:(long long)arg1;
- (void)setSenderName:(id)arg1 andEmail:(id)arg2;
- (void)setDateFieldVisible:(_Bool)arg1;
- (void)updateDateFiled:(id)arg1;
- (void)updateAlRecipientsFileds:(id)arg1;
- (void)updateAllRecipiensField:(id)arg1 andRecipientsCount:(unsigned long long)arg2;
- (void)updateCcFieldTokens:(id)arg1;
- (void)updateToFieldTokens:(id)arg1;
- (void)buildBasicView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

