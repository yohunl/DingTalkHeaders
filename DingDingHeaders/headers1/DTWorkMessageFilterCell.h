//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DTWorkMessageFilterModel, UILabel;

@interface DTWorkMessageFilterCell : UITableViewCell
{
    DTWorkMessageFilterModel *_model;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTWorkMessageFilterModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)configWorkFilterWithModel:(id)arg1;
- (void)setLeftMargin:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

