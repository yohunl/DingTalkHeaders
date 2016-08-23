//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MWCaptionView, MWPhoto, MWPhotoBrowser, NSArray, NSDictionary, NSString, UIImage, UIView;
@protocol MWPhoto;

@protocol MWPhotoBrowserDelegate <NSObject>
- (id <MWPhoto>)photoBrowser:(MWPhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(MWPhotoBrowser *)arg1;

@optional
- (void)photoBrowserCurrentIndex:(unsigned long long)arg1;
- (void)photoBrowserCustomBottomToolBarOriginComplete:(MWPhoto *)arg1;
- (UIView *)photoBrowserCustomBottomToolBar:(MWPhotoBrowser *)arg1 customAtIndex:(unsigned long long)arg2;
- (NSArray *)photoBrowser:(MWPhotoBrowser *)arg1 customMenusAtIndex:(unsigned long long)arg2;
- (_Bool)photoBrowser:(MWPhotoBrowser *)arg1 recogizedQRCode:(NSString *)arg2 atIndex:(unsigned long long)arg3;
- (UIImage *)photoBrowser:(MWPhotoBrowser *)arg1 animateImageAtIndex:(unsigned long long)arg2;
- (struct CGRect)photoBrowser:(MWPhotoBrowser *)arg1 animateFrameAtIndex:(unsigned long long)arg2;
- (void)photoBrowserDownloadImageError:(MWPhotoBrowser *)arg1 errUserInfo:(NSDictionary *)arg2;
- (void)photoBrowserDidDisappear:(MWPhotoBrowser *)arg1;
- (void)photoBrowserDidFinishModalPresentation:(MWPhotoBrowser *)arg1;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2 selectedChanged:(_Bool)arg3;
- (_Bool)photoBrowser:(MWPhotoBrowser *)arg1 isPhotoSelectedAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 actionButtonPressedForPhotoAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 didDisplayPhotoAtIndex:(unsigned long long)arg2;
- (NSString *)photoBrowser:(MWPhotoBrowser *)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (MWCaptionView *)photoBrowser:(MWPhotoBrowser *)arg1 captionViewForPhotoAtIndex:(unsigned long long)arg2;
- (id <MWPhoto>)photoBrowser:(MWPhotoBrowser *)arg1 thumbPhotoAtIndex:(unsigned long long)arg2;
@end
