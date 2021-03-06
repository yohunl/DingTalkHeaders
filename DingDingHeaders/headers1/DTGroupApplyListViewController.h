//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTGroupApplyListCellDelegate-Protocol.h"
#import "DTLoadMoreDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTEmptyResultView, DTLoadMoreController, DTTableView, NSArray, NSString, UIActivityIndicatorView, UIImageView;

@interface DTGroupApplyListViewController : DTViewController <UITableViewDelegate, UITableViewDataSource, DTLoadMoreDelegate, DTGroupApplyListCellDelegate>
{
    NSString *_conversationId;
    DTTableView *_tableView;
    NSArray *_datasource;
    DTEmptyResultView *_emptyView;
    DTEmptyResultView *_unauthorizedView;
    DTLoadMoreController *_loadMoreController;
    UIActivityIndicatorView *_indicatorView;
    UIImageView *_tipView;
}

@property(retain, nonatomic) UIImageView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(retain, nonatomic) DTEmptyResultView *unauthorizedView; // @synthesize unauthorizedView=_unauthorizedView;
@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) DTTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (void)groupApplyStatusDidChange:(id)arg1;
- (void)addGroupButtonPressedInCell:(id)arg1 groupApply:(id)arg2;
- (void)passGroupApplyAndNofify:(id)arg1;
- (void)tipNameLengthTooLongWithGroupApply:(id)arg1 cell:(id)arg2;
- (void)acceptButtonPressedInCell:(id)arg1 groupApply:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)clearGroupApplyUnreadCount;
- (void)showsTableView;
- (void)showsUnauthorizedViewWithErrorMesssage:(id)arg1;
- (void)showsEmptyResultViewWithCount:(long long)arg1;
- (void)showsError:(id)arg1;
- (void)assembleDatasouceWithGroupApplyList:(id)arg1 nextCursor:(long long)arg2 hasMore:(_Bool)arg3 append:(_Bool)arg4;
- (void)checkGroupApplyListMobileContactAndFillName:(id)arg1;
- (void)loadDatasourceWithCursor:(long long)arg1 append:(_Bool)arg2;
- (void)loadComponent;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

