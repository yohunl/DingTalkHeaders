//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTCSpaceProperty : NSObject
{
    _Bool _isPersonalSpace;
    long long _oid;
    NSString *_cid;
    NSString *_cname;
    NSString *_oName;
    unsigned long long _accessAuthority;
}

+ (id)jsonStringWithProperty:(id)arg1;
+ (id)buildWithJsonString:(id)arg1;
@property(nonatomic) _Bool isPersonalSpace; // @synthesize isPersonalSpace=_isPersonalSpace;
@property(nonatomic) unsigned long long accessAuthority; // @synthesize accessAuthority=_accessAuthority;
@property(copy, nonatomic) NSString *oName; // @synthesize oName=_oName;
@property(copy, nonatomic) NSString *cname; // @synthesize cname=_cname;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;

@end
