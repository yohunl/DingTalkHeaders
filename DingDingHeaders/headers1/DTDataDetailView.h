//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class DTBadgeView, DTLineChartView, DTOrgTrendDataModel, DTPieProgressView, NSString, UIButton, UILabel, UIPageControl, UIScrollView;

@interface DTDataDetailView : UIView <UIScrollViewDelegate>
{
    CDUnknownBlockType _btnClickedBlock;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    long long _cellWidth;
    DTLineChartView *_lineChartView;
    DTPieProgressView *_scoreDetailView;
    DTOrgTrendDataModel *_trendData;
    UIButton *_guideButton;
    DTBadgeView *_badgeView;
    UILabel *_totalLabel;
    UILabel *_unitLabel;
    UILabel *_detailLabel;
    UIView *_levelDetailView;
}

@property(retain, nonatomic) UIView *levelDetailView; // @synthesize levelDetailView=_levelDetailView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain, nonatomic) UILabel *totalLabel; // @synthesize totalLabel=_totalLabel;
@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIButton *guideButton; // @synthesize guideButton=_guideButton;
@property(retain, nonatomic) DTOrgTrendDataModel *trendData; // @synthesize trendData=_trendData;
@property(retain, nonatomic) DTPieProgressView *scoreDetailView; // @synthesize scoreDetailView=_scoreDetailView;
@property(retain, nonatomic) DTLineChartView *lineChartView; // @synthesize lineChartView=_lineChartView;
@property(nonatomic) long long cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType btnClickedBlock; // @synthesize btnClickedBlock=_btnClickedBlock;
- (void).cxx_destruct;
- (id)orginalLabel;
- (void)configWithDefaultData;
- (void)refreshImproveButtonStatusWithShowDot:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)levelDetailButtonClick:(id)arg1;
- (void)guideButtonClicked;
- (void)showDefaultDataWithRadian:(double)arg1 andHeight:(double)arg2 animation:(_Bool)arg3 duration:(double)arg4;
- (void)showDetailDataWithRadian:(double)arg1 andHeight:(double)arg2 duration:(double)arg3;
- (void)configWithTrendData:(id)arg1;
- (void)loadComponent;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
