//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTPhonebookModel : Marshal
{
    _Bool _isDelete;
    NSNumber *_uid;
    NSNumber *_tag;
    NSString *_mobile;
}

@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSNumber *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

