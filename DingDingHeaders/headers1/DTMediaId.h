//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTMediaId : NSObject
{
    _Bool _burn;
    short _type;
    int _height;
    int _width;
    long long _sequence;
}

@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) _Bool burn; // @synthesize burn=_burn;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) short type; // @synthesize type=_type;
- (id)getTypeStr;

@end

