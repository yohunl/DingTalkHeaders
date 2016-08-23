//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACDRunLoopObserver, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ACDContext : NSObject
{
    _Bool _toPast;
    NSMutableSet *_registeredClassIDs;
    ACDContext *_parentContext;
    _Bool _isCleared;
    ACDRunLoopObserver *_runLoopObserver;
    void *queueSpecific;
    struct vector<ACDManagedClassInfo *, std::__1::allocator<ACDManagedClassInfo *>> _classInfo;
    _Bool _isDirty;
    _Bool _isPerformingChanges;
    NSObject<OS_dispatch_queue> *_contextQueue;
    unsigned long long _contextType;
}

+ (unsigned long long)lowerBoundOnVector:(const vector_f567cfc8 *)arg1 withValue:(id)arg2 cmp:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool isPerformingChanges; // @synthesize isPerformingChanges=_isPerformingChanges;
@property(readonly, nonatomic) unsigned long long contextType; // @synthesize contextType=_contextType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(retain, nonatomic) ACDContext *parentContext; // @synthesize parentContext=_parentContext;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)preloadProperties:(id)arg1 forClass:(Class)arg2;
- (void)forgetPastForClassInfo:(id)arg1;
- (id)performChangesForClass:(id)arg1;
- (void)deliverDeltas:(id)arg1;
- (void)performChanges;
- (id)objectWithRID:(unsigned long long)arg1 forClass:(Class)arg2;
- (id)findObjectsWithSQLCondition:(id)arg1 forClass:(Class)arg2;
- (id)findObjectsWithPredicate:(id)arg1 forClass:(Class)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)faultInObject:(id)arg1;
- (unsigned long long)nextRIDForClass:(Class)arg1;
- (void)registerClass:(Class)arg1 withPreloadPropList:(id)arg2;
- (void)registerClass:(Class)arg1;
- (void)dealloc;
- (void)clear;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;
- (id)memIndexForClass:(Class)arg1;
- (id)modelForClass:(Class)arg1;
- (id)infoForClass:(Class)arg1;
- (id)infoForClassID:(unsigned int)arg1;

@end
