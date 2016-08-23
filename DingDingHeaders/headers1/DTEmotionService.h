//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTEmotionPackageDownloadManager;

@interface DTEmotionService : NSObject
{
    DTEmotionPackageDownloadManager *_downloadManager;
}

+ (id)sharedEmotionService;
@property(retain, nonatomic) DTEmotionPackageDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void).cxx_destruct;
- (void)removeCustomEmotions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addCustomEmotion:(id)arg1 mediaId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getCustomEmotions:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPurchasedEmotionPackages:(CDUnknownBlockType)arg1;
- (void)purchaseEmotionPackage:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getEmotionPackageDetail:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getEmotionPackageList:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
