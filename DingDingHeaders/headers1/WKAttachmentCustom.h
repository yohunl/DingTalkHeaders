//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKAttachment.h"

@class NSDictionary, NSString;

@interface WKAttachmentCustom : WKAttachment
{
    int _customType;
    NSString *_url;
    long long _size;
    NSDictionary *_extension;
}

@property(retain, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int customType; // @synthesize customType=_customType;
- (void).cxx_destruct;
- (id)init;

@end

