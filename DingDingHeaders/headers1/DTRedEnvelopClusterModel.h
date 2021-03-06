//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTRedEnvelopClusterModel : Marshal
{
    NSNumber *_createTime;
    NSNumber *_modifyTime;
    NSNumber *_sender;
    NSString *_businessId;
    NSString *_clusterId;
    NSString *_amount;
    NSNumber *_size;
    NSArray *_receivers;
    NSNumber *_type;
    NSString *_cid;
    NSNumber *_count;
    NSNumber *_status;
    NSNumber *_oid;
    NSString *_congratulations;
    NSNumber *_pickTime;
    NSNumber *_pickDoneTime;
    NSNumber *_alipayStatus;
    NSString *_alipayOrderString;
}

@property(copy, nonatomic) NSString *alipayOrderString; // @synthesize alipayOrderString=_alipayOrderString;
@property(retain, nonatomic) NSNumber *alipayStatus; // @synthesize alipayStatus=_alipayStatus;
@property(retain, nonatomic) NSNumber *pickDoneTime; // @synthesize pickDoneTime=_pickDoneTime;
@property(retain, nonatomic) NSNumber *pickTime; // @synthesize pickTime=_pickTime;
@property(copy, nonatomic) NSString *congratulations; // @synthesize congratulations=_congratulations;
@property(retain, nonatomic) NSNumber *oid; // @synthesize oid=_oid;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *clusterId; // @synthesize clusterId=_clusterId;
@property(copy, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSNumber *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSNumber *modifyTime; // @synthesize modifyTime=_modifyTime;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

