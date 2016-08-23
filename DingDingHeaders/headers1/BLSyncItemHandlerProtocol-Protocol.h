//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BLAccount, BLFolder, BLFolderItemChangesAPIModel, NSArray;

@protocol BLSyncItemHandlerProtocol <NSObject>
- (NSArray *)syncItemsParamsArrayForFolders:(NSArray *)arg1 forAccount:(BLAccount *)arg2 windowSize:(long long)arg3 filterType:(long long)arg4;
- (void)processResponseWithChangedAPIModel:(BLFolderItemChangesAPIModel *)arg1 inFolder:(BLFolder *)arg2 forAccount:(BLAccount *)arg3 withNewItemCount:(unsigned long long *)arg4;

@optional
- (void)processResponseWithChangedAPIModel:(BLFolderItemChangesAPIModel *)arg1 inFolder:(BLFolder *)arg2 isFromSearch:(_Bool)arg3 forAccount:(BLAccount *)arg4 withNewItemCount:(unsigned long long *)arg5;
- (void)processResponseWithChangedAPIModel:(BLFolderItemChangesAPIModel *)arg1 forAccount:(BLAccount *)arg2 withNewItemCount:(unsigned long long *)arg3;
@end
