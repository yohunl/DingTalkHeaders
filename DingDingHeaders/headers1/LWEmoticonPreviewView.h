//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTDLDownloaderOperation, FLAnimatedImageView, LWEmotionItem, UIActivityIndicatorView, UIImage, UIImageView;

@interface LWEmoticonPreviewView : UIView
{
    LWEmotionItem *_emotionItem;
    UIImage *_bgImage;
    UIImageView *_bgImageView;
    FLAnimatedImageView *_previewImageView;
    UIActivityIndicatorView *_indicatorView;
    DTDLDownloaderOperation *_downloaderOperation;
}

@property(retain, nonatomic) DTDLDownloaderOperation *downloaderOperation; // @synthesize downloaderOperation=_downloaderOperation;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) FLAnimatedImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) LWEmotionItem *emotionItem; // @synthesize emotionItem=_emotionItem;
- (void).cxx_destruct;
- (void)showWithMagicImage:(id)arg1 bgImage:(id)arg2;
- (void)showWithContentImage:(id)arg1 bgImage:(id)arg2 layoutType:(unsigned long long)arg3;
- (void)reloadWithItem:(id)arg1 bgImage:(id)arg2;
- (void)reloadMagic;
- (void)reloadEmoji;
- (void)setContentFrameLayoutType:(unsigned long long)arg1 bgImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 emotionItem:(id)arg2 bgImage:(id)arg3;
- (void)dealloc;

@end

