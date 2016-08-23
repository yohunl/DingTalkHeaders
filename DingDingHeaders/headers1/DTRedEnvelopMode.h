//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DTRedEnvelopMode : NSObject
{
    int _size;
    long long _type;
    long long _senderUid;
    NSString *_senderName;
    NSString *_clusterId;
    long long _orgId;
    NSString *_orgName;
    NSString *_congratulations;
    NSString *_amount;
    NSArray *_receivers;
}

+ (id)jsonStringWithRedEnvelopModel:(id)arg1;
+ (id)buildWithJsonString:(id)arg1;
@property(copy, nonatomic) NSArray *receivers; // @synthesize receivers=_receivers;
@property(nonatomic) int size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *congratulations; // @synthesize congratulations=_congratulations;
@property(copy, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(copy, nonatomic) NSString *clusterId; // @synthesize clusterId=_clusterId;
@property(copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(nonatomic) long long senderUid; // @synthesize senderUid=_senderUid;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isSendToMe;
- (id)customReceiverUids;

@end
