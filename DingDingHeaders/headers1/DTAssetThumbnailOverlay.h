//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface DTAssetThumbnailOverlay : UIView
{
    _Bool _didSetupConstraints;
    UIImageView *_gradient;
    UIImageView *_badge;
    UILabel *_duration;
}

@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UILabel *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIImageView *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) UIImageView *gradient; // @synthesize gradient=_gradient;
- (void).cxx_destruct;
- (struct UIEdgeInsets)layoutMarginsForAssetCollection:(id)arg1;
- (void)bind:(id)arg1;
- (void)bindVideoFlagWithDuration:(id)arg1;
- (void)updateConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

