//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTPickedAssetsHandler : NSObject
{
}

+ (id)formatAssetContentSize:(long long)arg1;
+ (long long)fileSizeWithPath:(id)arg1;
+ (_Bool)isGreaterThanMaxOriginalSize:(long long)arg1;
+ (_Bool)isGreaterThanMaxCompressedSize:(long long)arg1;
+ (void)applySendPickedAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)compressPickedVideoWithURL:(id)arg1 baseController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)compressVideoAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)showErrorMessage:(id)arg1;
+ (id)storeCoverImageWithAssetPath:(id)arg1;
+ (id)temporayPathForCoverImage;

@end
