//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPIModel.h"

@class NSArray, NSNumber, NSString;

@interface BLCalendarEventAPIModel : BLBaseAPIModel
{
    long long _sequence;
    long long _eventClass;
    NSNumber *_startTime;
    NSNumber *_endTime;
    NSNumber *_allDayEvent;
    NSString *_subject;
    NSString *_body;
    NSString *_organizerName;
    NSString *_organizerEmail;
    NSString *_location;
    NSArray *_alarmList;
    NSArray *_attendees;
    NSArray *_exceptionDateList;
    NSNumber *_recurID;
    NSArray *_recurRules;
    NSArray *_attachs;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *attachs; // @synthesize attachs=_attachs;
@property(retain, nonatomic) NSArray *recurRules; // @synthesize recurRules=_recurRules;
@property(retain, nonatomic) NSNumber *recurID; // @synthesize recurID=_recurID;
@property(retain, nonatomic) NSArray *exceptionDateList; // @synthesize exceptionDateList=_exceptionDateList;
@property(retain, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property(retain, nonatomic) NSArray *alarmList; // @synthesize alarmList=_alarmList;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *organizerEmail; // @synthesize organizerEmail=_organizerEmail;
@property(retain, nonatomic) NSString *organizerName; // @synthesize organizerName=_organizerName;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSNumber *allDayEvent; // @synthesize allDayEvent=_allDayEvent;
@property(retain, nonatomic) NSNumber *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long eventClass; // @synthesize eventClass=_eventClass;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end
