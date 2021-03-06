//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface DTLocationModel : NSObject
{
    NSString *_imgMediaId;
    double _latitude;
    double _longitude;
    NSString *_text;
    UIImage *_locationImage;
}

+ (id)jsonStringWithCardMode:(id)arg1;
+ (id)buildWithJsonString:(id)arg1;
@property(retain, nonatomic) UIImage *locationImage; // @synthesize locationImage=_locationImage;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *imgMediaId; // @synthesize imgMediaId=_imgMediaId;
- (void).cxx_destruct;

@end

