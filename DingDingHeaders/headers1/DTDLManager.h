//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTDLCache, DTDLDownloader, NSMutableArray;
@protocol DTDLManagerDelegate;

@interface DTDLManager : NSObject
{
    id <DTDLManagerDelegate> _delegate;
    DTDLCache *_downloaderCache;
    DTDLDownloader *_downloader;
    CDUnknownBlockType _cacheKeyFilter;
    NSMutableArray *_failedURLs;
    NSMutableArray *_runningOperations;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *runningOperations; // @synthesize runningOperations=_runningOperations;
@property(retain, nonatomic) NSMutableArray *failedURLs; // @synthesize failedURLs=_failedURLs;
@property(copy) CDUnknownBlockType cacheKeyFilter; // @synthesize cacheKeyFilter=_cacheKeyFilter;
@property(retain, nonatomic) DTDLDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) DTDLCache *downloaderCache; // @synthesize downloaderCache=_downloaderCache;
@property(nonatomic) __weak id <DTDLManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)verifyCrcWithResponse:(id)arg1 data:(id)arg2;
- (_Bool)isRunning;
- (void)cancelAll;
- (id)downloadWithMediaId:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (id)downloadWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (_Bool)diskDataExistsForURL:(id)arg1;
- (id)cacheKeyForURL:(id)arg1;
- (id)createCache;
- (id)init;

@end

