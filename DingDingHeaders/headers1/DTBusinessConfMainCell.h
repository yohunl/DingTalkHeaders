//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewCell.h"

@class UILabel;
@protocol BusinessConfCellDelegate;

@interface DTBusinessConfMainCell : DTTableViewCell
{
    id <BusinessConfCellDelegate> _delegate;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak id <BusinessConfCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)reloadAddMore:(id)arg1 index:(unsigned long long)arg2;
- (void)reloadCell:(id)arg1 index:(unsigned long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
