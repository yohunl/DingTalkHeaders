//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLUpdateItemAPIV1Task.h"

@class BLCalendar, BLCalendarEvent, BLFolder;

@interface BLUpdateCreateCalendarTask : BLUpdateItemAPIV1Task
{
    BLFolder *_folder;
    BLCalendar *_calendar;
    BLCalendarEvent *_event;
}

@property(retain, nonatomic) BLCalendarEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) BLCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) BLFolder *folder; // @synthesize folder=_folder;
- (void).cxx_destruct;
- (void)handleSingleSuccessModel:(id)arg1 index:(unsigned long long)arg2;
- (id)targetGroupInResponse:(id)arg1;
- (id)updateData;

@end
