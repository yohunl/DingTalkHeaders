//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCMode.h"

@class NSArray, NSString;

@interface DTCOAMode : DTCMode
{
    NSArray *_formArray;
    NSString *_number;
    NSString *_unit;
}

+ (id)jsonStringWithMode:(id)arg1;
+ (id)buildWithJsonString:(id)arg1;
@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(copy, nonatomic) NSArray *formArray; // @synthesize formArray=_formArray;
- (void).cxx_destruct;

@end
