//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTRedEnvelopRecordModel, NSArray, NSString;

@protocol DTRedEnvelopServicePersistenceProtocol <NSObject>
- (NSArray *)unsendRedenvelopRecordInConversationId:(NSString *)arg1;
- (_Bool)clearRedenvelopRecordInConversationId:(NSString *)arg1;
- (DTRedEnvelopRecordModel *)redEnvelopRecordWithBusinessId:(NSString *)arg1;
- (_Bool)saveRedEnvelopRecord:(DTRedEnvelopRecordModel *)arg1;
@end
