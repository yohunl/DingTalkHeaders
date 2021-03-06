//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface AMapLocationRegion : NSObject <NSCopying>
{
    _Bool _notifyOnEntry;
    _Bool _notifyOnExit;
    double _regionRadius;
    NSString *_identifier;
    long long _regionState;
    CDStruct_2c43369c _regionCenter;
}

@property(nonatomic) long long regionState; // @synthesize regionState=_regionState;
@property(nonatomic) _Bool notifyOnExit; // @synthesize notifyOnExit=_notifyOnExit;
@property(nonatomic) _Bool notifyOnEntry; // @synthesize notifyOnEntry=_notifyOnEntry;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double regionRadius; // @synthesize regionRadius=_regionRadius;
@property(nonatomic) CDStruct_c3b9c2ee regionCenter; // @synthesize regionCenter=_regionCenter;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
- (_Bool)coordinateInCircumscribedRegion:(CDStruct_c3b9c2ee)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

