//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCSpaceServiceNetworkProtocol-Protocol.h"

@class NSString;

@interface DTCSpaceServiceNetworkIMP : NSObject <DTCSpaceServiceNetworkProtocol>
{
}

- (void)updateSpaceExtensionById:(long long)arg1 extension:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)searchByTypes:(id)arg1 withOrgIds:(id)arg2 withFileTypes:(id)arg3 withOffset:(long long)arg4 withLength:(long long)arg5 sucessBlock:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)listFiles:(long long)arg1 withPageSize:(unsigned long long)arg2 withFolderId:(id)arg3 withSortType:(long long)arg4 withContentTypes:(id)arg5 withLoadMoreID:(id)arg6 sucessBlock:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (void)commonResultHandlerWith:(id)arg1 sucessBlock:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)infoDeleteDentryWithItemId:(id)arg1 withSpaceId:(long long)arg2 withPath:(id)arg3 sucessBlock:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)listSpace:(_Bool)arg1 withSpaceIds:(id)arg2 sucessBlock:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)perviewWithBizType:(id)arg1 withBizId:(id)arg2 withObjectId:(id)arg3 withAttchId:(id)arg4 withToken:(id)arg5 sucessBlock:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)searchDentryWithString:(id)arg1 spaces:(id)arg2 offset:(unsigned long long)arg3 pageSize:(unsigned long long)arg4 withType:(long long)arg5 success:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)transferDentry:(id)arg1 inSourceSpaceId:(long long)arg2 toTargetSpaceId:(long long)arg3 toTargetFolderId:(id)arg4 toTargetFolderPath:(id)arg5 withTransferType:(unsigned long long)arg6 conflictType:(long long)arg7 success:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)infoDentry:(long long)arg1 withItemId:(id)arg2 withPath:(id)arg3 success:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)deleteDentries:(id)arg1 withSpaceId:(long long)arg2 success:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)renameDentry:(id)arg1 withNewName:(id)arg2 success:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)addDentry:(id)arg1 withStoreType:(unsigned long long)arg2 withConflictHandler:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)addDentry:(long long)arg1 withUrl:(id)arg2 withFolderId:(id)arg3 withPath:(id)arg4 withName:(id)arg5 withStoreType:(unsigned long long)arg6 withConflictHandler:(unsigned long long)arg7 success:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)addDentry:(long long)arg1 withPath:(id)arg2 withFolderId:(id)arg3 withName:(id)arg4 withStoreUrl:(id)arg5 withStoreType:(unsigned long long)arg6 withConflictHandler:(unsigned long long)arg7 success:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)listDentries:(long long)arg1 withFolderId:(id)arg2 withLoadMoreId:(id)arg3 withLength:(long long)arg4 withSortType:(long long)arg5 withTopType:(long long)arg6 success:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

