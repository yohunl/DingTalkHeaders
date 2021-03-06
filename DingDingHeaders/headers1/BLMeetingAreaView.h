//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "ACDProxyModelFilterSortDelegate-Protocol.h"
#import "BLMailEventSection-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ACDListModel, ACDTableViewUpdateAdapter, NSArray, NSString, UIButton, UILabel, UITableViewCell, UIView;
@protocol BLMeetingEventResponseAction;

@interface BLMeetingAreaView : UITableView <UITableViewDataSource, UITableViewDelegate, ACDProxyModelFilterSortDelegate, BLMailEventSection>
{
    _Bool _alarmEditable;
    _Bool _canViewAttendeeStatus;
    _Bool _needShowOrganizer;
    _Bool _everythingInvisible;
    _Bool _hasViewStatusArea;
    _Bool _hasActionArea;
    id <BLMeetingEventResponseAction> _eventHandler;
    UILabel *_meetingLocationLabel;
    UILabel *_meetingDateLabel;
    UILabel *_meetingOrganizerLabel;
    UIButton *_acceptButton;
    UIButton *_declineButton;
    UIButton *_suspendButton;
    UILabel *_meetingStatusLabel;
    UIButton *_arrow;
    UIButton *_viewStatusArrow;
    UIView *_lineView;
    UIView *_shortLineView;
    UITableViewCell *_organizerCell;
    UITableViewCell *_locationCell;
    UITableViewCell *_dateCell;
    UITableViewCell *_alarmCell;
    UITableViewCell *_viewStatusCell;
    UITableViewCell *_actionCell;
    NSArray *_cellArray;
    ACDListModel *_fieldModel;
    ACDTableViewUpdateAdapter *_uiAdapter;
}

@property(nonatomic) _Bool hasActionArea; // @synthesize hasActionArea=_hasActionArea;
@property(nonatomic) _Bool hasViewStatusArea; // @synthesize hasViewStatusArea=_hasViewStatusArea;
@property(nonatomic) _Bool everythingInvisible; // @synthesize everythingInvisible=_everythingInvisible;
@property(retain, nonatomic) ACDTableViewUpdateAdapter *uiAdapter; // @synthesize uiAdapter=_uiAdapter;
@property(retain, nonatomic) ACDListModel *fieldModel; // @synthesize fieldModel=_fieldModel;
@property(retain, nonatomic) NSArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) UITableViewCell *actionCell; // @synthesize actionCell=_actionCell;
@property(retain, nonatomic) UITableViewCell *viewStatusCell; // @synthesize viewStatusCell=_viewStatusCell;
@property(retain, nonatomic) UITableViewCell *alarmCell; // @synthesize alarmCell=_alarmCell;
@property(retain, nonatomic) UITableViewCell *dateCell; // @synthesize dateCell=_dateCell;
@property(retain, nonatomic) UITableViewCell *locationCell; // @synthesize locationCell=_locationCell;
@property(retain, nonatomic) UITableViewCell *organizerCell; // @synthesize organizerCell=_organizerCell;
@property(retain, nonatomic) UIView *shortLineView; // @synthesize shortLineView=_shortLineView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *viewStatusArrow; // @synthesize viewStatusArrow=_viewStatusArrow;
@property(retain, nonatomic) UIButton *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *meetingStatusLabel; // @synthesize meetingStatusLabel=_meetingStatusLabel;
@property(retain, nonatomic) UIButton *suspendButton; // @synthesize suspendButton=_suspendButton;
@property(retain, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UILabel *meetingOrganizerLabel; // @synthesize meetingOrganizerLabel=_meetingOrganizerLabel;
@property(retain, nonatomic) UILabel *meetingDateLabel; // @synthesize meetingDateLabel=_meetingDateLabel;
@property(retain, nonatomic) UILabel *meetingLocationLabel; // @synthesize meetingLocationLabel=_meetingLocationLabel;
@property(nonatomic) _Bool needShowOrganizer; // @synthesize needShowOrganizer=_needShowOrganizer;
@property(nonatomic) _Bool canViewAttendeeStatus; // @synthesize canViewAttendeeStatus=_canViewAttendeeStatus;
@property(nonatomic) _Bool alarmEditable; // @synthesize alarmEditable=_alarmEditable;
@property(retain, nonatomic) id <BLMeetingEventResponseAction> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)fitToContent;
- (_Bool)acdModel:(id)arg1 filterObject:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewStatusClicked:(id)arg1;
- (void)alarmClicked:(id)arg1;
- (void)didTapOrganizer:(id)arg1;
- (void)responseButtonTaped:(id)arg1;
- (void)setStatusLabelText:(id)arg1;
- (void)showResponseButtons:(_Bool)arg1;
- (void)setNoMeetingInfo;
- (void)setMeetingOrganizer:(id)arg1;
- (void)setAlarmTip:(id)arg1;
- (void)setMeetingDate:(id)arg1;
- (void)setMeetingLocation:(id)arg1;
- (void)setStatusIsAccepted:(_Bool)arg1 isDeclined:(_Bool)arg2 isTentative:(_Bool)arg3;
- (void)setupUIAdapter;
- (id)commonStyleCell;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

