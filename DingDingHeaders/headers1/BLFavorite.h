//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLYapObjectWithAccount.h"

@class BLFavoriteContent, NSString;

@interface BLFavorite : BLYapObjectWithAccount
{
    NSString *_spaceId;
    NSString *_itemId;
    NSString *_msgId;
    BLFavoriteContent *_content;
    NSString *_type;
    long long _modifiedTime;
    NSString *_tag;
    NSString *_title;
    NSString *_summary;
}

@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) long long modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) BLFavoriteContent *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *spaceId; // @synthesize spaceId=_spaceId;
- (void).cxx_destruct;

@end

