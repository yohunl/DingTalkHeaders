//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface DTRedEnvelopSelectReceiverCell : UIView
{
    UILabel *_titleLabel;
    UILabel *_commentLabel;
    UIImageView *_indicatorView;
    UIImageView *_topLine;
    UIImageView *_bottomLine;
}

@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)becomeNormal;
- (void)becomeHighlight;
- (id)initWithFrame:(struct CGRect)arg1;

@end
