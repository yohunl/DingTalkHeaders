//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTApmtConfCreateModel : Marshal
{
    _Bool _enableDing;
    NSNumber *_callerId;
    NSArray *_calleeIds;
    NSString *_callerNick;
    NSString *_title;
    NSNumber *_startTime;
    NSNumber *_duration;
    NSNumber *_orgId;
}

@property(nonatomic) _Bool enableDing; // @synthesize enableDing=_enableDing;
@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *callerNick; // @synthesize callerNick=_callerNick;
@property(copy, nonatomic) NSArray *calleeIds; // @synthesize calleeIds=_calleeIds;
@property(retain, nonatomic) NSNumber *callerId; // @synthesize callerId=_callerId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

