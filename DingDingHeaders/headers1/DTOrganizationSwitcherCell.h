//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DTBadgeView, DTOrganizationSwitcherModel, DTWebImageView, UILabel;

@interface DTOrganizationSwitcherCell : UITableViewCell
{
    DTOrganizationSwitcherModel *_switcherModel;
    DTWebImageView *_iconView;
    UILabel *_titleLabel;
    DTBadgeView *_badgeView;
}

@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) DTOrganizationSwitcherModel *switcherModel; // @synthesize switcherModel=_switcherModel;
- (void).cxx_destruct;
- (void)configOrgSwitcherWithModel:(id)arg1 showUnreadCount:(_Bool)arg2;
- (void)setRightMargin:(double)arg1;
- (void)setLeftMargin:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

