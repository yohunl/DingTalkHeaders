//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _YYUIControlBlockTarget : NSObject
{
    CDUnknownBlockType _block;
    unsigned long long _events;
}

@property(nonatomic) unsigned long long events; // @synthesize events=_events;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)invoke:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 events:(unsigned long long)arg2;

@end

