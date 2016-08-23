//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAdapter.h"

@interface BLMailAdapter : BLBaseAdapter
{
}

+ (id)adapterWithAccount:(id)arg1 containEmail:(id)arg2;
+ (id)adapterWithAccount:(id)arg1 betweenMeAndEmail:(id)arg2;
+ (id)adapterWithAccount:(id)arg1 sessionID:(id)arg2 excludeFolderUUID:(id)arg3;
+ (id)adapterWithAccount:(id)arg1 sessionID:(id)arg2 folderUUID:(id)arg3;
+ (id)adapterWithAccount:(id)arg1 folderUUID:(id)arg2 isRead:(_Bool)arg3 shouldThreading:(_Bool)arg4 excludeMailUUIDs:(id)arg5;
+ (id)adapterWithAccount:(id)arg1 folderUUID:(id)arg2 shouldThreading:(_Bool)arg3 crossFolder:(_Bool)arg4;
+ (id)adapterWithAccount:(id)arg1 folderUUID:(id)arg2 shouldThreading:(_Bool)arg3;
+ (id)adapterWithAccount:(id)arg1 folderUUID:(id)arg2 isRead:(_Bool)arg3 excludeMailUUIDs:(id)arg4;
+ (id)adapterWithAccount:(id)arg1 folderUUID:(id)arg2 groupBySendDate:(_Bool)arg3;
+ (id)adapterWithAccount:(id)arg1 folderUUID:(id)arg2;
- (void)updateWithTag:(id)arg1 shouldThreading:(_Bool)arg2;
- (void)updateFolderUUID:(id)arg1 readStatus:(long long)arg2 shouldThreading:(_Bool)arg3 tags:(id)arg4 crossFolder:(_Bool)arg5 excludeMailUUIDs:(id)arg6;
- (void)updateFolderUUID:(id)arg1 readStatus:(long long)arg2 shouldThreading:(_Bool)arg3 tags:(id)arg4 excludeMailUUIDs:(id)arg5;
- (void)updateFolderUUID:(id)arg1 isRead:(_Bool)arg2 shouldThreading:(_Bool)arg3 excludeMailUUIDs:(id)arg4;
- (void)updateFolderUUID:(id)arg1 isRead:(_Bool)arg2 excludeMailUUIDs:(id)arg3;
- (void)updateFolderUUID:(id)arg1 shouldThreading:(_Bool)arg2;
- (void)updateFolderUUID:(id)arg1;

@end
