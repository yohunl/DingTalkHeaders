//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactBaseViewController.h"

@class DTButton, DTContact, UIBarButtonItem, UIImageView, UILabel, UIView;

@interface DTMyMobileViewController : DTContactBaseViewController
{
    UIImageView *_imageView;
    UILabel *_phoneTitleLabel;
    UILabel *_mobileLabel;
    DTButton *_changeButton;
    UILabel *_tipLabel;
    UIView *_phoneView;
    UIBarButtonItem *_rightItem;
    DTContact *_currentContact;
}

@property(retain, nonatomic) DTContact *currentContact; // @synthesize currentContact=_currentContact;
@property(retain, nonatomic) UIBarButtonItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) UIView *phoneView; // @synthesize phoneView=_phoneView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) DTButton *changeButton; // @synthesize changeButton=_changeButton;
@property(retain, nonatomic) UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(retain, nonatomic) UILabel *phoneTitleLabel; // @synthesize phoneTitleLabel=_phoneTitleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (id)getCountryNameWithCountryCode:(id)arg1;
- (void)gotoChangeMobile;
- (void)changeMobileButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)didReceiveMemoryWarning;

@end
