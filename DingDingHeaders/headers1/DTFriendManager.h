//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTFriendManager : NSObject
{
}

- (void)close;
- (void)removeFriendDataWithUid:(long long)arg1;
- (void)setNextCursor:(long long)arg1;
- (long long)nextCursor;
- (void)fetchFriendsIncrementally:(long long)arg1;
- (void)syncFriendsOfServerIncrementally;
- (void)friendsDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

