//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTConfErrorPushModle : Marshal
{
    NSNumber *_conferenceId;
    NSNumber *_callerId;
    NSString *_action;
    NSString *_cause;
    NSNumber *_time;
    NSNumber *_sequenceId;
    NSNumber *_level;
}

@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(retain, nonatomic) NSNumber *sequenceId; // @synthesize sequenceId=_sequenceId;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *cause; // @synthesize cause=_cause;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSNumber *callerId; // @synthesize callerId=_callerId;
@property(retain, nonatomic) NSNumber *conferenceId; // @synthesize conferenceId=_conferenceId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

