//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTSearchBarDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"

@class DTSearchBar, DTSearchDisplayNavigationController, NSArray, NSString, UISearchDisplayController, UIView, UIViewController;
@protocol DTSearchDisplayControllerDelegate, DTSearchDisplayControllerHomePageDelegate;

@interface DTSearchDisplayController : NSObject <UISearchDisplayDelegate, UINavigationControllerDelegate, DTSearchBarDelegate>
{
    _Bool _hidesResultView;
    UIViewController *_rootViewController;
    DTSearchDisplayNavigationController *_navigationController;
    id <DTSearchDisplayControllerDelegate> _delegate;
    DTSearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    NSArray *_searchHistoryList;
    UIView<DTSearchDisplayControllerHomePageDelegate> *_searchHomeView;
}

@property(retain, nonatomic) UIView<DTSearchDisplayControllerHomePageDelegate> *searchHomeView; // @synthesize searchHomeView=_searchHomeView;
@property(copy, nonatomic) NSArray *searchHistoryList; // @synthesize searchHistoryList=_searchHistoryList;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(retain, nonatomic) DTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool hidesResultView; // @synthesize hidesResultView=_hidesResultView;
@property(nonatomic) __weak id <DTSearchDisplayControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)historyWordClick:(id)arg1;
- (void)searchViewSwipe;
- (void)searchViewPressed;
- (void)hideSearchDisplay;
@property(readonly, nonatomic) DTSearchDisplayNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (id)getHomePageWithView:(id)arg1 tabBar:(id)arg2;
- (id)findDimmingViewInView:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchBarBackButtonPressed:(id)arg1;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
