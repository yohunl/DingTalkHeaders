//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTSearchBarDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"

@class DTFavoriteFilterButton, DTSearchBar, NSString, UISearchDisplayController, UITableView, UIView;
@protocol UISearchDisplayDelegate;

@interface DTFavoritesSearchController : NSObject <UISearchDisplayDelegate, DTSearchBarDelegate, UIGestureRecognizerDelegate>
{
    id <UISearchDisplayDelegate> _delegate;
    UITableView *_searchResultsTableView;
    UISearchDisplayController *_searchDisplayController;
    DTSearchBar *_searchBar;
    UIView *_searchDisplayView;
    UIView *_filterView;
    DTFavoriteFilterButton *_selectButton;
}

@property(nonatomic) __weak DTFavoriteFilterButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UIView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) UIView *searchDisplayView; // @synthesize searchDisplayView=_searchDisplayView;
@property(nonatomic) __weak DTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(retain, nonatomic) UITableView *searchResultsTableView; // @synthesize searchResultsTableView=_searchResultsTableView;
@property(nonatomic) __weak id <UISearchDisplayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setTouchButtonImg:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)filterButtonClicked:(id)arg1;
- (void)searchViewPressed;
- (void)searchViewSwipe;
- (void)searchBarBackButtonPressed:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(long long)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
