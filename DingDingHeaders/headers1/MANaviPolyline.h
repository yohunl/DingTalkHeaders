//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MAOverlay-Protocol.h"

@class MAPolyline, NSString;

@interface MANaviPolyline : NSObject <MAOverlay>
{
    long long _type;
    MAPolyline *_polyline;
}

@property(retain, nonatomic) MAPolyline *polyline; // @synthesize polyline=_polyline;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)initWithPolyline:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

