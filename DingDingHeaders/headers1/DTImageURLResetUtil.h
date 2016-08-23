//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTImageURLResetUtil : NSObject
{
}

+ (id)resetURLWithoutWebp:(id)arg1;
+ (id)resetURLWithURL:(id)arg1 withSize:(struct CGSize)arg2;
+ (id)resetURLForEventIconWithURL:(id)arg1;
+ (id)resetURLForWallSingleThumbnailWithURL:(id)arg1;
+ (id)resetURLForWallThumbnailWithURL:(id)arg1;
+ (id)resetURLForPubAccountSummaryIconWithURL:(id)arg1;
+ (id)resetURLForPubAccountSummaryBarWithURL:(id)arg1;
+ (id)resetURLForCoverWithURL:(id)arg1;
+ (id)resetURLForShareWithURL:(id)arg1;
+ (id)resetURLForBigAvatarWithURL:(id)arg1;
+ (id)resetURLForMiddleAvatarWithURL:(id)arg1;
+ (id)resetURLForAvatarWithURL:(id)arg1;
+ (_Bool)isDefaultAvatar:(id)arg1;
+ (id)resetURLForPreviewWithURL:(id)arg1;
+ (id)resetURLWithURL:(id)arg1 withSize:(struct CGSize)arg2 isNeedShowClearLongPic:(_Bool)arg3;
+ (id)originalImageURLFromUrl:(id)arg1;
+ (struct CGSize)getSizeFromURL:(id)arg1;
+ (id)baseImageURL;

@end
