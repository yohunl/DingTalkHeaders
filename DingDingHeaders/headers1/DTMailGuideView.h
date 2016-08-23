//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIPageControl, UIScrollView;
@protocol DTMailGuideViewDatasource, DTMailGuideViewDelegate;

@interface DTMailGuideView : UIView <UIScrollViewDelegate>
{
    long long _currentPage;
    id <DTMailGuideViewDatasource> _datasource;
    id <DTMailGuideViewDelegate> _delegate;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    long long _curPage;
    long long _totalPages;
}

@property(nonatomic) long long totalPages; // @synthesize totalPages=_totalPages;
@property(nonatomic) long long curPage; // @synthesize curPage=_curPage;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <DTMailGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DTMailGuideViewDatasource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)reloadData;
- (void)buildScrollView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
