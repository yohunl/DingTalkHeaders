//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTRedEnvelopClusterSentListModel : Marshal
{
    NSNumber *_year;
    NSNumber *_totalRedEnvelopCluster;
    NSNumber *_totalRedEnvelop;
    NSArray *_redEnvelopClusters;
    NSString *_totalAmount;
}

@property(copy, nonatomic) NSString *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(copy, nonatomic) NSArray *redEnvelopClusters; // @synthesize redEnvelopClusters=_redEnvelopClusters;
@property(retain, nonatomic) NSNumber *totalRedEnvelop; // @synthesize totalRedEnvelop=_totalRedEnvelop;
@property(retain, nonatomic) NSNumber *totalRedEnvelopCluster; // @synthesize totalRedEnvelopCluster=_totalRedEnvelopCluster;
@property(retain, nonatomic) NSNumber *year; // @synthesize year=_year;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
