//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCSpaceDentryPersistenceProtocol-Protocol.h"

@class NSString, OpenDatabase, OpenMDHandler;

@interface DTCSpaceDentryPersistenceIMP : NSObject <DTCSpaceDentryPersistenceProtocol>
{
    OpenMDHandler *_dentryHandler;
    OpenDatabase *_dbConnection;
}

@property(retain, nonatomic) OpenDatabase *dbConnection; // @synthesize dbConnection=_dbConnection;
@property(retain, nonatomic) OpenMDHandler *dentryHandler; // @synthesize dentryHandler=_dentryHandler;
- (void).cxx_destruct;
- (void)deleteDentries:(id)arg1;
- (void)deleteAllDentriesInSpaceId:(long long)arg1 withParentId:(id)arg2;
- (id)findAllDentiesWithSpaceId:(long long)arg1 withParentId:(id)arg2 withSort:(id)arg3;
- (id)findHoldDentryWithSpaceId:(long long)arg1 withParentId:(id)arg2;
- (id)loadDentryWithUUID:(id)arg1;
- (id)loadDentryWithUUID:(id)arg1 withSpaceId:(long long)arg2 withParentId:(id)arg3;
- (id)loadDentry:(id)arg1 withSpaceId:(long long)arg2 withParentId:(id)arg3;
- (_Bool)saveDentry:(id)arg1;
- (_Bool)batchSaveDentries:(id)arg1;
- (id)initWithDbConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

