//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTDingCommentServiceProtocol-Protocol.h"

@class NSString;
@protocol DTDingCommentNetworkProtocol, DTDingCommentPersistenceProtocol;

@interface DTDingCommentServiceIMP : NSObject <DTDingCommentServiceProtocol>
{
    id <DTDingCommentPersistenceProtocol> _persistenceIMP;
    id <DTDingCommentNetworkProtocol> _networkIMP;
}

@property(retain, nonatomic) id <DTDingCommentNetworkProtocol> networkIMP; // @synthesize networkIMP=_networkIMP;
@property(retain, nonatomic) id <DTDingCommentPersistenceProtocol> persistenceIMP; // @synthesize persistenceIMP=_persistenceIMP;
- (void).cxx_destruct;
- (id)loadLocalDingCommentList:(long long)arg1 size:(int)arg2;
- (_Bool)removeLocalDingComment:(long long)arg1 commentId:(long long)arg2;
- (_Bool)saveLocalDingComment:(id)arg1;
- (void)listDingComment:(long long)arg1 latest:(_Bool)arg2 cursor:(long long)arg3 size:(int)arg4 success:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)removeDingComment:(long long)arg1 commentId:(long long)arg2 success:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)sendDingComment:(id)arg1 atOpenIds:(id)arg2 success:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
