//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLYapObjectWithAccount.h"

@class NSOrderedSet;

@interface BLCalendarRecurrence : BLYapObjectWithAccount
{
    long long _count;
    long long _durationInSecond;
    long long _freq;
    unsigned long long _interval;
    long long _recurIDForException;
    long long _until;
    long long _weekStart;
    NSOrderedSet *_byDayListOfMonth;
    NSOrderedSet *_byDayListOfWeek;
    NSOrderedSet *_byDayListOfYear;
    NSOrderedSet *_byMonthListOfYear;
    NSOrderedSet *_bySetPosList;
    NSOrderedSet *_byWeekListOfYear;
}

@property(retain, nonatomic) NSOrderedSet *byWeekListOfYear; // @synthesize byWeekListOfYear=_byWeekListOfYear;
@property(retain, nonatomic) NSOrderedSet *bySetPosList; // @synthesize bySetPosList=_bySetPosList;
@property(retain, nonatomic) NSOrderedSet *byMonthListOfYear; // @synthesize byMonthListOfYear=_byMonthListOfYear;
@property(retain, nonatomic) NSOrderedSet *byDayListOfYear; // @synthesize byDayListOfYear=_byDayListOfYear;
@property(retain, nonatomic) NSOrderedSet *byDayListOfWeek; // @synthesize byDayListOfWeek=_byDayListOfWeek;
@property(retain, nonatomic) NSOrderedSet *byDayListOfMonth; // @synthesize byDayListOfMonth=_byDayListOfMonth;
@property(nonatomic) long long weekStart; // @synthesize weekStart=_weekStart;
@property(nonatomic) long long until; // @synthesize until=_until;
@property(nonatomic) long long recurIDForException; // @synthesize recurIDForException=_recurIDForException;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long freq; // @synthesize freq=_freq;
@property(nonatomic) long long durationInSecond; // @synthesize durationInSecond=_durationInSecond;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;

@end
