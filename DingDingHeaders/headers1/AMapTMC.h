//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapTMC : AMapSearchObject
{
    long long _distance;
    NSString *_status;
}

+ (id)ajo_mapping;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
- (void).cxx_destruct;
- (id)init;

@end

