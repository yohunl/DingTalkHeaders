//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTFilterModel, NSOrderedSet, NSString;

@interface DTContactPickModel : NSObject
{
    _Bool _enableSingleSelection;
    _Bool _banDepartSelection;
    _Bool _enableCustomerPicker;
    _Bool _enableEnterprisePicker;
    _Bool _enableFriendPicker;
    _Bool _enableMobileContactPicker;
    _Bool _enableExistingGroupPicker;
    _Bool _enableMyGroupPicker;
    _Bool _enableGroupMemberPicker;
    _Bool _enableUsualContactPicker;
    _Bool _forbidExtContactPicker;
    _Bool _forbidCRMCustomerPicker;
    _Bool _supportFixLine;
    NSOrderedSet *_selectedPersons;
    NSOrderedSet *_selectedDepartments;
    unsigned long long _returnResultType;
    NSString *_customTitle;
    long long _toplimit;
    CDUnknownBlockType _pickDidCompleteBlock;
    CDUnknownBlockType _conversationDidPickBlock;
    CDUnknownBlockType _pickDidCancelBlock;
    CDUnknownBlockType _pickOverToplimit;
    NSString *_tip;
    NSOrderedSet *_hiddenPersons;
    NSOrderedSet *_disablePersons;
    NSOrderedSet *_requiredPersons;
    NSOrderedSet *_disableDepartments;
    NSOrderedSet *_requiredDepartments;
    long long _orgId;
    DTFilterModel *_filter;
}

+ (id)stringSetWithNumberArray:(id)arg1;
+ (id)stringSetWithNumberSet:(id)arg1;
@property(nonatomic) _Bool supportFixLine; // @synthesize supportFixLine=_supportFixLine;
@property(retain, nonatomic) DTFilterModel *filter; // @synthesize filter=_filter;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(nonatomic) _Bool forbidCRMCustomerPicker; // @synthesize forbidCRMCustomerPicker=_forbidCRMCustomerPicker;
@property(nonatomic) _Bool forbidExtContactPicker; // @synthesize forbidExtContactPicker=_forbidExtContactPicker;
@property(nonatomic) _Bool enableUsualContactPicker; // @synthesize enableUsualContactPicker=_enableUsualContactPicker;
@property(nonatomic) _Bool enableGroupMemberPicker; // @synthesize enableGroupMemberPicker=_enableGroupMemberPicker;
@property(nonatomic) _Bool enableMyGroupPicker; // @synthesize enableMyGroupPicker=_enableMyGroupPicker;
@property(nonatomic) _Bool enableExistingGroupPicker; // @synthesize enableExistingGroupPicker=_enableExistingGroupPicker;
@property(nonatomic) _Bool enableMobileContactPicker; // @synthesize enableMobileContactPicker=_enableMobileContactPicker;
@property(nonatomic) _Bool enableFriendPicker; // @synthesize enableFriendPicker=_enableFriendPicker;
@property(nonatomic) _Bool enableEnterprisePicker; // @synthesize enableEnterprisePicker=_enableEnterprisePicker;
@property(nonatomic) _Bool enableCustomerPicker; // @synthesize enableCustomerPicker=_enableCustomerPicker;
@property(copy, nonatomic) NSOrderedSet *requiredDepartments; // @synthesize requiredDepartments=_requiredDepartments;
@property(copy, nonatomic) NSOrderedSet *disableDepartments; // @synthesize disableDepartments=_disableDepartments;
@property(copy, nonatomic) NSOrderedSet *requiredPersons; // @synthesize requiredPersons=_requiredPersons;
@property(copy, nonatomic) NSOrderedSet *disablePersons; // @synthesize disablePersons=_disablePersons;
@property(copy, nonatomic) NSOrderedSet *hiddenPersons; // @synthesize hiddenPersons=_hiddenPersons;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) CDUnknownBlockType pickOverToplimit; // @synthesize pickOverToplimit=_pickOverToplimit;
@property(copy, nonatomic) CDUnknownBlockType pickDidCancelBlock; // @synthesize pickDidCancelBlock=_pickDidCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType conversationDidPickBlock; // @synthesize conversationDidPickBlock=_conversationDidPickBlock;
@property(copy, nonatomic) CDUnknownBlockType pickDidCompleteBlock; // @synthesize pickDidCompleteBlock=_pickDidCompleteBlock;
@property(nonatomic) long long toplimit; // @synthesize toplimit=_toplimit;
@property(nonatomic) _Bool banDepartSelection; // @synthesize banDepartSelection=_banDepartSelection;
@property(nonatomic) _Bool enableSingleSelection; // @synthesize enableSingleSelection=_enableSingleSelection;
@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(nonatomic) unsigned long long returnResultType; // @synthesize returnResultType=_returnResultType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSOrderedSet *selectedDepartments; // @synthesize selectedDepartments=_selectedDepartments;
@property(copy, nonatomic) NSOrderedSet *selectedPersons; // @synthesize selectedPersons=_selectedPersons;

@end
