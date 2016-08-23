//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class UIButton, UIControl, UIImageView, UILabel, UIScrollView, UIView;

@interface DTRLoginManageViewController : DTViewController
{
    _Bool _apn;
    UIScrollView *_bgScrollView;
    UIImageView *_rloginImageView;
    UILabel *_rloginLabel;
    UIView *_notiSwitchView;
    UILabel *_notiMessage;
    UIControl *_fileAssistantView;
    UILabel *_fileAssistantTipView;
    UIButton *_logoutBtn;
    unsigned long long _type;
}

@property(nonatomic) _Bool apn; // @synthesize apn=_apn;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *logoutBtn; // @synthesize logoutBtn=_logoutBtn;
@property(retain, nonatomic) UILabel *fileAssistantTipView; // @synthesize fileAssistantTipView=_fileAssistantTipView;
@property(retain, nonatomic) UIControl *fileAssistantView; // @synthesize fileAssistantView=_fileAssistantView;
@property(retain, nonatomic) UILabel *notiMessage; // @synthesize notiMessage=_notiMessage;
@property(retain, nonatomic) UIView *notiSwitchView; // @synthesize notiSwitchView=_notiSwitchView;
@property(retain, nonatomic) UILabel *rloginLabel; // @synthesize rloginLabel=_rloginLabel;
@property(retain, nonatomic) UIImageView *rloginImageView; // @synthesize rloginImageView=_rloginImageView;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)onSwitchChanged:(id)arg1;
- (void)gotoFileAssistant;
- (void)fixRLoginImageView;
- (void)popBackManage;
- (_Bool)isModal;
- (void)onDeviceStatuChanged:(id)arg1;
- (void)kickWeb:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDeviceType:(unsigned long long)arg1 apn:(_Bool)arg2;

@end
