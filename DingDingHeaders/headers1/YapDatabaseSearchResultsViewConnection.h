//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YapDatabaseViewConnection.h"

@class NSString, YapDatabaseSearchResultsView;

@interface YapDatabaseSearchResultsViewConnection : YapDatabaseViewConnection
{
    NSString *query;
    _Bool queryChanged;
    struct sqlite3_stmt *snippetTable_getForRowidStatement;
    struct sqlite3_stmt *snippetTable_setForRowidStatement;
    struct sqlite3_stmt *snippetTable_removeForRowidStatement;
    struct sqlite3_stmt *snippetTable_removeAllStatement;
}

- (void).cxx_destruct;
- (void)setGroupingBlock:(id)arg1 groupingBlockType:(long long)arg2 sortingBlock:(id)arg3 sortingBlockType:(long long)arg4;
- (void)getQuery:(id *)arg1 wasChanged:(_Bool *)arg2;
- (void)setQuery:(id)arg1 isChange:(_Bool)arg2;
- (id)query;
- (struct sqlite3_stmt *)snippetTable_removeAllStatement;
- (struct sqlite3_stmt *)snippetTable_removeForRowidStatement;
- (struct sqlite3_stmt *)snippetTable_setForRowidStatement;
- (struct sqlite3_stmt *)snippetTable_getForRowidStatement;
- (void)processChangeset:(id)arg1;
- (void)getInternalChangeset:(id *)arg1 externalChangeset:(id *)arg2 hasDiskChanges:(_Bool *)arg3;
- (id)internalChangesetKeys;
- (void)postCommitCleanup;
- (void)postRollbackCleanup;
- (id)newReadWriteTransaction:(id)arg1;
- (id)newReadTransaction:(id)arg1;
@property(readonly, nonatomic) YapDatabaseSearchResultsView *searchResultsView;
- (void)_flushStatements;

@end
