//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTCSpaceResultDataModel, NSNumber, NSString;

@interface DTCSpaceResultModel : Marshal
{
    NSNumber *_resultCode;
    NSString *_resultMsg;
    DTCSpaceResultDataModel *_data;
}

@property(retain, nonatomic) DTCSpaceResultDataModel *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(retain, nonatomic) NSNumber *resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

