//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface WKChatBizModel : NSObject
{
    NSMutableArray *_msgList;
    NSMutableArray *_unreadList;
    NSMutableArray *_deleteList;
    NSMutableArray *_recallList;
    NSMutableArray *_extensionList;
    NSMutableArray *_memberTagList;
    NSMutableArray *_memberExtList;
    NSMutableArray *_memberTagAndExtList;
    NSMutableArray *_conversationClearList;
    NSMutableArray *_deliveryMsgReadStatusList;
    NSMutableArray *_deliveryMsgStatusList;
    NSMutableArray *_viewStatusList;
}

@property(retain, nonatomic) NSMutableArray *viewStatusList; // @synthesize viewStatusList=_viewStatusList;
@property(retain, nonatomic) NSMutableArray *deliveryMsgStatusList; // @synthesize deliveryMsgStatusList=_deliveryMsgStatusList;
@property(retain, nonatomic) NSMutableArray *deliveryMsgReadStatusList; // @synthesize deliveryMsgReadStatusList=_deliveryMsgReadStatusList;
@property(retain, nonatomic) NSMutableArray *conversationClearList; // @synthesize conversationClearList=_conversationClearList;
@property(retain, nonatomic) NSMutableArray *memberTagAndExtList; // @synthesize memberTagAndExtList=_memberTagAndExtList;
@property(retain, nonatomic) NSMutableArray *memberExtList; // @synthesize memberExtList=_memberExtList;
@property(retain, nonatomic) NSMutableArray *memberTagList; // @synthesize memberTagList=_memberTagList;
@property(retain, nonatomic) NSMutableArray *extensionList; // @synthesize extensionList=_extensionList;
@property(retain, nonatomic) NSMutableArray *recallList; // @synthesize recallList=_recallList;
@property(retain, nonatomic) NSMutableArray *deleteList; // @synthesize deleteList=_deleteList;
@property(retain, nonatomic) NSMutableArray *unreadList; // @synthesize unreadList=_unreadList;
@property(retain, nonatomic) NSMutableArray *msgList; // @synthesize msgList=_msgList;
- (void).cxx_destruct;
- (id)init;

@end

