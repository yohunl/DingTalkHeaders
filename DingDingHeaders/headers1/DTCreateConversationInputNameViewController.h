//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTDefaultIconsHeadView, DTEnterpriseCard, NSString;

@interface DTCreateConversationInputNameViewController : DTViewController
{
    DTEnterpriseCard *_enterpriseCard;
    NSString *_iconMediaId;
    long long _iconActionType;
    DTDefaultIconsHeadView *_headView;
}

@property(retain, nonatomic) DTDefaultIconsHeadView *headView; // @synthesize headView=_headView;
@property(nonatomic) long long iconActionType; // @synthesize iconActionType=_iconActionType;
@property(copy, nonatomic) NSString *iconMediaId; // @synthesize iconMediaId=_iconMediaId;
@property(retain, nonatomic) DTEnterpriseCard *enterpriseCard; // @synthesize enterpriseCard=_enterpriseCard;
- (void).cxx_destruct;
- (void)onSaveTitle:(id)arg1;
- (void)configNavigationBar;
- (double)statusBarAndNavigationBarHeight;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

