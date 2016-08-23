//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DTATService : NSObject
{
    NSMutableDictionary *_persistentAtDic;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *persistentAtDic; // @synthesize persistentAtDic=_persistentAtDic;
- (void).cxx_destruct;
- (void)clearAtDicWithCId:(id)arg1;
- (_Bool)containMeWithAtDic:(id)arg1;
- (_Bool)containWithUid:(unsigned long long)arg1 cId:(id)arg2;
- (id)exchangeUidToNickText:(id)arg1 atDic:(id)arg2;
- (id)exchangeNickToUidText:(id)arg1 atDic:(id)arg2 cId:(id)arg3;
- (id)arrayWithCId:(id)arg1;
- (void)persistentSaveAtWithDTAT:(id)arg1;
- (id)init;

@end
