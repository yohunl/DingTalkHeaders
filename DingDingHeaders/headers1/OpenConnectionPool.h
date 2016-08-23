//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSRecursiveLock, OpenConnection;
@protocol OpenConnectionPoolDelegate;

@interface OpenConnectionPool : NSObject
{
    _Bool _multiConnAvailable;
    _Bool _closed;
    OpenConnection *_rwConnection;
    id <OpenConnectionPoolDelegate> _delegate;
    NSMutableArray *_readConnections;
    NSRecursiveLock *_lock;
}

@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(retain, nonatomic) NSMutableArray *readConnections; // @synthesize readConnections=_readConnections;
@property(readonly, nonatomic) _Bool multiConnAvailable; // @synthesize multiConnAvailable=_multiConnAvailable;
@property(readonly, nonatomic) __weak id <OpenConnectionPoolDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) OpenConnection *rwConnection; // @synthesize rwConnection=_rwConnection;
- (void).cxx_destruct;
- (void)closeReadConnections;
- (void)closeAll;
- (id)idleReadConnection;
- (void)openAllReadConnectionsInTranscation;
- (id)openReadWriteConnection;
- (id)initWithDelegate:(id)arg1 needMultiConn:(_Bool)arg2;
- (id)init;

@end
