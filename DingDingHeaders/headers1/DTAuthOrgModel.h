//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTAuthOrgModel : Marshal
{
    _Bool _authFromB2b;
    _Bool _thirdPartyEncrypt;
    NSString *_orgId;
    NSString *_orgName;
    NSString *_logoMediaId;
    NSNumber *_vipLevel;
    NSNumber *_authLevel;
    NSString *_corpId;
}

@property(nonatomic) _Bool thirdPartyEncrypt; // @synthesize thirdPartyEncrypt=_thirdPartyEncrypt;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(retain, nonatomic) NSNumber *authLevel; // @synthesize authLevel=_authLevel;
@property(nonatomic) _Bool authFromB2b; // @synthesize authFromB2b=_authFromB2b;
@property(retain, nonatomic) NSNumber *vipLevel; // @synthesize vipLevel=_vipLevel;
@property(copy, nonatomic) NSString *logoMediaId; // @synthesize logoMediaId=_logoMediaId;
@property(copy, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(copy, nonatomic) NSString *orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
