//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSString;

@interface DTTranslateResult : Marshal
{
    NSString *_result;
    NSString *_from;
    NSString *_to;
    NSString *_provider;
}

@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *to; // @synthesize to=_to;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
