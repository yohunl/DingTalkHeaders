//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DTAvatarImageView, UIImageView, UILabel;

@interface DTDingReceiverCellTableViewCell : UITableViewCell
{
    DTAvatarImageView *_avatarView;
    UILabel *_titleLabel;
    UIImageView *_accessView;
    UILabel *_rightLabel;
}

@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UIImageView *accessView; // @synthesize accessView=_accessView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)configItem:(id)arg1 workStatus:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

