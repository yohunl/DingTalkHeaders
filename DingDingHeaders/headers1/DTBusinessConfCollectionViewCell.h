//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, DTAvatarImageView, DTConferenceMember, UILabel;

@interface DTBusinessConfCollectionViewCell : UICollectionViewCell
{
    _Bool _special;
    DTConferenceMember *_currentMember;
    DTAvatarImageView *_avatarView;
    UILabel *_nickLabel;
    CAShapeLayer *_minusLayer;
}

@property(retain, nonatomic) CAShapeLayer *minusLayer; // @synthesize minusLayer=_minusLayer;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) DTAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) DTConferenceMember *currentMember; // @synthesize currentMember=_currentMember;
@property(nonatomic, getter=isSpecial) _Bool special; // @synthesize special=_special;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1;
- (void)reloadSpecialCell:(id)arg1 sizeKey:(id)arg2;
- (void)reloadMemberCell:(id)arg1 sizeKey:(id)arg2;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;

@end

