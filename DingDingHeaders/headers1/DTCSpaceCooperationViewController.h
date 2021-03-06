//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCSpaceBaseViewController.h"

#import "DTCSpaceCooperationTableDelegate-Protocol.h"

@class BLAccount, DTCSpaceCooperationTable, DTOrganization, NSString;

@interface DTCSpaceCooperationViewController : DTCSpaceBaseViewController <DTCSpaceCooperationTableDelegate>
{
    BLAccount *_account;
    DTOrganization *_defaultOrganization;
    DTCSpaceCooperationTable *_tableView;
}

@property(retain, nonatomic) DTCSpaceCooperationTable *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) DTOrganization *defaultOrganization; // @synthesize defaultOrganization=_defaultOrganization;
@property(retain, nonatomic) BLAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)gotoSettingVC:(id)arg1;
- (void)gotoPrivilegeSettingPanel:(id)arg1;
- (void)cooperationDidHideBarSort:(_Bool)arg1;
- (void)gotoWithIndexPath:(id)arg1;
- (void)sendUT:(long long)arg1;
- (void)openFilterVC:(long long)arg1;
- (void)changeSortTypeWithOperationBar:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)setupNavigationBar;
- (void)backEvent:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)currentNavigationController;
- (void)initTopOperationBarData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

