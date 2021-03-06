//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPIModel.h"

@class NSArray, NSSet, NSString;

@interface BLContactAPIModel : BLBaseAPIModel
{
    NSString *_email;
    NSString *_mobile;
    NSString *_name;
    NSString *_pinYinName;
    NSString *_jianPinName;
    NSString *_remark;
    NSString *_avatarId;
    NSString *_uid;
    NSString *_phoneExt;
    NSSet *_extendList;
    NSSet *_aliases;
    long long _type;
    NSArray *_popAccounts;
    NSArray *_smtpAccounts;
}

@property(retain, nonatomic) NSArray *smtpAccounts; // @synthesize smtpAccounts=_smtpAccounts;
@property(retain, nonatomic) NSArray *popAccounts; // @synthesize popAccounts=_popAccounts;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSSet *aliases; // @synthesize aliases=_aliases;
@property(retain, nonatomic) NSSet *extendList; // @synthesize extendList=_extendList;
@property(retain, nonatomic) NSString *phoneExt; // @synthesize phoneExt=_phoneExt;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *jianPinName; // @synthesize jianPinName=_jianPinName;
@property(retain, nonatomic) NSString *pinYinName; // @synthesize pinYinName=_pinYinName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

