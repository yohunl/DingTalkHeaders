//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTGlobalSearcherBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTEmptyResultView, DTGlobalSearchResultsSection, NSArray, NSString, UITableView;

@interface DTGlobalSearchResultsViewController : DTGlobalSearcherBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hidesUsualContactResults;
    _Bool _hidesFriendResults;
    _Bool _hidesEnterpriseCardResults;
    _Bool _hidesMobileContactResults;
    _Bool _hidesGroupResults;
    UITableView *_tableView;
    NSArray *_dataSource;
    DTGlobalSearchResultsSection *_contactSection;
    DTGlobalSearchResultsSection *_usualContactSection;
    DTGlobalSearchResultsSection *_friendSection;
    DTGlobalSearchResultsSection *_enterpriseCardSection;
    DTGlobalSearchResultsSection *_mobileContactSection;
    DTGlobalSearchResultsSection *_groupSection;
    DTEmptyResultView *_searchEmptyView;
}

@property(retain, nonatomic) DTEmptyResultView *searchEmptyView; // @synthesize searchEmptyView=_searchEmptyView;
@property(retain, nonatomic) DTGlobalSearchResultsSection *groupSection; // @synthesize groupSection=_groupSection;
@property(retain, nonatomic) DTGlobalSearchResultsSection *mobileContactSection; // @synthesize mobileContactSection=_mobileContactSection;
@property(retain, nonatomic) DTGlobalSearchResultsSection *enterpriseCardSection; // @synthesize enterpriseCardSection=_enterpriseCardSection;
@property(retain, nonatomic) DTGlobalSearchResultsSection *friendSection; // @synthesize friendSection=_friendSection;
@property(retain, nonatomic) DTGlobalSearchResultsSection *usualContactSection; // @synthesize usualContactSection=_usualContactSection;
@property(retain, nonatomic) DTGlobalSearchResultsSection *contactSection; // @synthesize contactSection=_contactSection;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool hidesGroupResults; // @synthesize hidesGroupResults=_hidesGroupResults;
@property(nonatomic) _Bool hidesMobileContactResults; // @synthesize hidesMobileContactResults=_hidesMobileContactResults;
@property(nonatomic) _Bool hidesEnterpriseCardResults; // @synthesize hidesEnterpriseCardResults=_hidesEnterpriseCardResults;
@property(nonatomic) _Bool hidesFriendResults; // @synthesize hidesFriendResults=_hidesFriendResults;
@property(nonatomic) _Bool hidesUsualContactResults; // @synthesize hidesUsualContactResults=_hidesUsualContactResults;
- (void).cxx_destruct;
- (_Bool)hasSearchRestuls;
- (void)showsContactInfoWithRelation:(id)arg1;
- (void)showsMoreSearchResultOfMobileContactWithSearchText:(id)arg1;
- (void)gotoUnregisterVC:(id)arg1 uid:(long long)arg2;
- (void)gotoContactProfileWithMobileContact:(id)arg1;
- (void)searchMobileContactWithSearchText:(id)arg1;
- (void)searchFriendWithSearchText:(id)arg1;
- (void)searchUsualContactWithSearchText:(id)arg1;
- (void)showsRelationListOfMaster:(id)arg1 withRootCrumbName:(id)arg2;
- (void)showsMoreSearchResultsOfEnterpriseWithOrgId:(long long)arg1 orgName:(id)arg2;
- (void)showsSearchResultOfEnterpriseCard:(id)arg1 withSearchText:(id)arg2;
- (void)searchEnterpriseCardWithSearchText:(id)arg1;
- (void)buildDatasource;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadDataSource;
- (void)loadComponent;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

