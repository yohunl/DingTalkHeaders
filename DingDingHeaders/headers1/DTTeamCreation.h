//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JSONCollectionType-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface DTTeamCreation : NSObject <JSONCollectionType, NSCopying>
{
    _Bool _isFastCreate;
    _Bool _need40Service;
    long long _orgId;
    long long _templateId;
    NSString *_sampleMediaId;
    NSString *_teamName;
    NSArray *_departList;
    long long _maxDepartId;
    unsigned long long _step;
    NSArray *_bossUids;
    long long _industryCode;
    NSString *_industryDesc;
    NSString *_city;
    NSString *_inviteCode;
    NSString *_support40ServiceURL;
    unsigned long long _from;
}

@property(nonatomic) unsigned long long from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *support40ServiceURL; // @synthesize support40ServiceURL=_support40ServiceURL;
@property(nonatomic) _Bool need40Service; // @synthesize need40Service=_need40Service;
@property(nonatomic) _Bool isFastCreate; // @synthesize isFastCreate=_isFastCreate;
@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *industryDesc; // @synthesize industryDesc=_industryDesc;
@property(nonatomic) long long industryCode; // @synthesize industryCode=_industryCode;
@property(copy, nonatomic) NSArray *bossUids; // @synthesize bossUids=_bossUids;
@property(nonatomic) unsigned long long step; // @synthesize step=_step;
@property(nonatomic) long long maxDepartId; // @synthesize maxDepartId=_maxDepartId;
@property(copy, nonatomic) NSArray *departList; // @synthesize departList=_departList;
@property(copy, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
@property(copy, nonatomic) NSString *sampleMediaId; // @synthesize sampleMediaId=_sampleMediaId;
@property(nonatomic) long long templateId; // @synthesize templateId=_templateId;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)arrayElementTypeForFieldName:(id)arg1;
- (_Bool)isValid;
- (_Bool)isBoss:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
