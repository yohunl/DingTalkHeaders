//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTPushConverModel : Marshal
{
    NSString *_cid;
    NSNumber *_tag;
    NSArray *_messageList;
    NSNumber *_nextCursor;
}

@property(retain, nonatomic) NSNumber *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(copy, nonatomic) NSArray *messageList; // @synthesize messageList=_messageList;
@property(retain, nonatomic) NSNumber *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
