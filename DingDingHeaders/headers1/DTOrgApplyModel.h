//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTOrgDeptModel, DTUserProfileModel, NSNumber, NSString;

@interface DTOrgApplyModel : Marshal
{
    _Bool _isRead;
    NSNumber *_id_;
    NSNumber *_orgId;
    NSString *_orgName;
    DTUserProfileModel *_userProfileModel;
    NSString *_content;
    NSNumber *_status;
    DTOrgDeptModel *_dept;
}

@property(retain, nonatomic) DTOrgDeptModel *dept; // @synthesize dept=_dept;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) DTUserProfileModel *userProfileModel; // @synthesize userProfileModel=_userProfileModel;
@property(copy, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
@property(retain, nonatomic) NSNumber *id_; // @synthesize id_=_id_;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

