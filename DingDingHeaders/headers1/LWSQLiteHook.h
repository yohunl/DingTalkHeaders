//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface LWSQLiteHook : NSObject
{
    _Bool _exclusive;
    struct sqlite3 *_sqlite;
    NSMutableDictionary *_observerDict;
    int _lock;
}

+ (id)hookWithSQLite:(struct sqlite3 *)arg1 enableExclusiveHook:(_Bool)arg2;
+ (id)hookWithSQLite:(struct sqlite3 *)arg1;
- (void).cxx_destruct;
- (id)findObserverInfosByTableKey:(id)arg1;
- (id)findAllObserverInfos;
- (void)removeObserver:(id)arg1 forTable:(id)arg2;
- (void)addObserver:(id)arg1 forTable:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handleOperation:(long long)arg1 table:(id)arg2 rowId:(long long)arg3;
- (void)dealloc;
- (void)removeExclusiveHook;
- (void)enableExclusiveHook;
- (CDUnknownFunctionPointerType)rollbackHookProc;
- (CDUnknownFunctionPointerType)updateHookProc;
- (id)initWithSQLite:(struct sqlite3 *)arg1 enableExclusiveHook:(_Bool)arg2;
- (id)initWithSQLite:(struct sqlite3 *)arg1;

@end
