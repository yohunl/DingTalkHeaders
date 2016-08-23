//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAvatarImageView, DTIdentifier, NSString, UIImageView, UILabel;
@protocol DTAttendenceHeaderViewDelegate;

@interface DTAttendenceHeaderView : UIView
{
    id <DTAttendenceHeaderViewDelegate> _delegate;
    DTIdentifier *_identifier;
    NSString *_dateString;
    DTAvatarImageView *_avatarImageView;
    UIImageView *_avatarBackgroundView;
    UILabel *_nameLable;
    UILabel *_dateLable;
    UIImageView *_separatorLine;
}

@property(retain, nonatomic) UIImageView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *dateLable; // @synthesize dateLable=_dateLable;
@property(retain, nonatomic) UILabel *nameLable; // @synthesize nameLable=_nameLable;
@property(retain, nonatomic) UIImageView *avatarBackgroundView; // @synthesize avatarBackgroundView=_avatarBackgroundView;
@property(retain, nonatomic) DTAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(retain, nonatomic) DTIdentifier *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <DTAttendenceHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configHeaderViewWithIdentifier:(id)arg1 dateString:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
