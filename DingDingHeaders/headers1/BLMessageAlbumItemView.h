//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexPath, UIButton, UIImageView;
@protocol BLMessageAlbumItemViewDelegate;

@interface BLMessageAlbumItemView : UIView
{
    UIImageView *_imageView;
    NSIndexPath *_indexPath;
    UIImageView *_checkBoxView;
    id <BLMessageAlbumItemViewDelegate> _delegate;
    UIButton *_backgroundButton;
}

@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) __weak id <BLMessageAlbumItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *checkBoxView; // @synthesize checkBoxView=_checkBoxView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)configureMessageAlbumItemView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

