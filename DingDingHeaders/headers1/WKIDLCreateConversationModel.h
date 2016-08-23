//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface WKIDLCreateConversationModel : Marshal
{
    NSArray *_openIds;
    NSString *_title;
    NSString *_icon;
    NSDictionary *_extension;
    NSNumber *_tag;
    NSNumber *_type;
    NSNumber *_memberLimit;
    NSNumber *_superGroup;
    NSString *_parentId;
    NSNumber *_nodeType;
    NSNumber *_active;
    NSArray *_members;
    NSNumber *_unique;
}

@property(retain, nonatomic) NSNumber *unique; // @synthesize unique=_unique;
@property(copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(retain, nonatomic) NSNumber *active; // @synthesize active=_active;
@property(retain, nonatomic) NSNumber *nodeType; // @synthesize nodeType=_nodeType;
@property(copy, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(retain, nonatomic) NSNumber *superGroup; // @synthesize superGroup=_superGroup;
@property(retain, nonatomic) NSNumber *memberLimit; // @synthesize memberLimit=_memberLimit;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *openIds; // @synthesize openIds=_openIds;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
