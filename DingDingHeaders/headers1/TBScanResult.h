//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TBScanResult : NSObject
{
    int _subType;
    int _approach;
    NSString *_resultType;
    NSString *_data;
    NSString *_hiddenData;
    NSMutableDictionary *_extData;
}

@property(retain, nonatomic) NSMutableDictionary *extData; // @synthesize extData=_extData;
@property(nonatomic) int approach; // @synthesize approach=_approach;
@property(retain, nonatomic) NSString *hiddenData; // @synthesize hiddenData=_hiddenData;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
- (void).cxx_destruct;
- (id)initWithTBDecodeResult:(id)arg1;

@end
