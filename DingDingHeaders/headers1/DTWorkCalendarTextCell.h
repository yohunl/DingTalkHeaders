//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTWorkCalendarCell.h"

@class UILabel;

@interface DTWorkCalendarTextCell : DTWorkCalendarCell
{
    UILabel *_titleLabel;
    UILabel *_forwardLabel;
}

+ (id)forwardAttributes;
+ (id)titleAttributes;
+ (double)cellHeightForCellModel:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) UILabel *forwardLabel; // @synthesize forwardLabel=_forwardLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCellModel:(id)arg1;
- (id)initWithCellStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
