//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTGroupMembersViewModel : Marshal
{
    NSNumber *_uid;
    NSString *_workStatus;
    NSString *_color;
    NSString *_empName;
}

@property(copy, nonatomic) NSString *empName; // @synthesize empName=_empName;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *workStatus; // @synthesize workStatus=_workStatus;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

