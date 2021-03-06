//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "LWFetchedResultsControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWSlideMenuCellDelegate-Protocol.h"

@class DTEmptyResultView, DTTableView, LWFetchedResultsController, NSString;

@interface DTBossConversationListController : DTViewController <UITableViewDelegate, UITableViewDataSource, LWFetchedResultsControllerDelegate, WWSlideMenuCellDelegate>
{
    _Bool _isPresentVC;
    DTTableView *_tableView;
    DTEmptyResultView *_emptyResultView;
    LWFetchedResultsController *_fetchController;
}

+ (void)openBossConversationList;
@property(retain, nonatomic) LWFetchedResultsController *fetchController; // @synthesize fetchController=_fetchController;
@property(retain, nonatomic) DTEmptyResultView *emptyResultView; // @synthesize emptyResultView=_emptyResultView;
@property(retain, nonatomic) DTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isPresentVC; // @synthesize isPresentVC=_isPresentVC;
- (void).cxx_destruct;
- (void)createNewBossConversation;
- (void)dismissCurrentVC;
- (void)appDidEnterBackground:(id)arg1;
- (id)conversationAtRow:(unsigned long long)arg1;
- (void)checkEmptyPage;
- (void)controllerDidRollback:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(long long)arg4 newIndex:(unsigned long long)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (void)menuCell:(id)arg1 atIndexPath:(id)arg2 didClickedMenuIndex:(long long)arg3;
- (id)menuCell:(id)arg1 titlesAtIndexPath:(id)arg2;
- (id)tableViewOfMenuCell:(id)arg1;
- (_Bool)menuCell:(id)arg1 enableAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadAllBossConversations;
- (void)initializeDatasource;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

