//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface YapDatabaseConnectionDefaults : NSObject <NSCopying>
{
    _Bool objectCacheEnabled;
    _Bool metadataCacheEnabled;
    unsigned long long objectCacheLimit;
    unsigned long long metadataCacheLimit;
    long long objectPolicy;
    long long metadataPolicy;
    unsigned long long autoFlushMemoryFlags;
}

@property(nonatomic) unsigned long long autoFlushMemoryFlags; // @synthesize autoFlushMemoryFlags;
@property(nonatomic) long long metadataPolicy; // @synthesize metadataPolicy;
@property(nonatomic) long long objectPolicy; // @synthesize objectPolicy;
@property(nonatomic) unsigned long long metadataCacheLimit; // @synthesize metadataCacheLimit;
@property(nonatomic) _Bool metadataCacheEnabled; // @synthesize metadataCacheEnabled;
@property(nonatomic) unsigned long long objectCacheLimit; // @synthesize objectCacheLimit;
@property(nonatomic) _Bool objectCacheEnabled; // @synthesize objectCacheEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
