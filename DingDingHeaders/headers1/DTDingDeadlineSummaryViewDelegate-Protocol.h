//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizDingModel, DTDingDeadlineSummaryView, UIButton;

@protocol DTDingDeadlineSummaryViewDelegate <NSObject>
- (void)didSelectedMore:(DTDingDeadlineSummaryView *)arg1;
- (void)closeButtonClicked:(UIButton *)arg1 summaryView:(DTDingDeadlineSummaryView *)arg2;
- (void)dingDeadlineSummaryCellDidSelected:(DTDingDeadlineSummaryView *)arg1 dingModel:(DTBizDingModel *)arg2;
@end

