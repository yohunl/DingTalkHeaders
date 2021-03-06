//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "BLMailEventSection-Protocol.h"

@class NSString, UILabel;

@interface DTMailReaderCalenderArea : UIControl <BLMailEventSection>
{
    UILabel *_meetingLocationLabel;
    UILabel *_meetingDateLabel;
}

@property(retain, nonatomic) UILabel *meetingDateLabel; // @synthesize meetingDateLabel=_meetingDateLabel;
@property(retain, nonatomic) UILabel *meetingLocationLabel; // @synthesize meetingLocationLabel=_meetingLocationLabel;
- (void).cxx_destruct;
- (void)setAlarmTip:(id)arg1;
- (void)setStatusLabelText:(id)arg1;
- (void)showResponseButtons:(_Bool)arg1;
- (void)setNoMeetingInfo;
- (void)setMeetingDate:(id)arg1;
- (void)setMeetingLocation:(id)arg1;
- (void)setStatusIsAccepted:(_Bool)arg1 isDeclined:(_Bool)arg2 isTentative:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

