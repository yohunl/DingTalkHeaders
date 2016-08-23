//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSString;
@protocol OS_dispatch_queue;

@interface WKMessageStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSCache *_memoryCache;
    NSString *_storagePath;
}

+ (id)do_not_call_me_deprecatedOriginalTempDirectoryPath;
+ (id)originalImagePath;
+ (id)subStoragePathWithName:(id)arg1;
+ (id)rootPath;
+ (id)assistStorage;
+ (id)hdImageStorage;
- (void).cxx_destruct;
- (void)removeStorageForKey:(id)arg1;
- (_Bool)hasStorageForKey:(id)arg1;
- (id)dataForKey:(id)arg1 onlyInMemory:(_Bool)arg2;
- (id)dataForKey:(id)arg1;
- (void)storeData:(id)arg1 forKey:(id)arg2;
- (void)cleanMemory;
- (void)removeMemoryCacheForKey:(id)arg1;
- (void)setObjectInMemory:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyInMemory:(id)arg1;
- (_Bool)hasCacheForKeyInMemory:(id)arg1;
- (id)storagePathForHashKey:(id)arg1;
- (id)hashForString:(id)arg1;
- (void)onMemoryWarning:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)init;

@end
